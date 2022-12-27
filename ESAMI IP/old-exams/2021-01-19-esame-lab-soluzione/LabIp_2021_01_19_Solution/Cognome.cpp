#include "Cognome.h"
#include<limits>

void addDriverToList(DriverList& headDriver, Driver newDriver)
{
  DriverCell* tmpcell = new DriverCell;
  tmpcell->data = newDriver;
  tmpcell->next = headDriver; 
	headDriver = tmpcell;
};

void addOrderToList(OrderList& headOrder, Order newOrder)
{
  OrderCell* tmpcell = new OrderCell;
  tmpcell->data = newOrder;
  tmpcell->next = headOrder; 
	headOrder = tmpcell;
};

void ReadDriver(std::string nomefile, DriverList & t)
{
  std::ifstream file;
  file.open(nomefile);
  if (!file.good()) throw std::string("Non posso aprire il file dati");

  int id;
  double x, y, currentVolume;

  std::string line;
  while (file >> id >> x >> y >> currentVolume)
  {
    Position pos;
    pos.x = x;
    pos.y = y;

    Driver driver;
    driver.id = id;
    driver.address = pos;
    driver.currentVolume = currentVolume;
    
    addDriverToList(t, driver);
  }
  
  file.close();
}

void ReadOrder(std::string nomefile, OrderList & t)
{
  std::ifstream file;
  file.open(nomefile);
  if (!file.good()) throw std::string("Non posso aprire il file dati");
  int id;
  double x, y, volume;

  std::string line;
  while (file >> id >> x >> y >> volume)
  {
    Position pos;
    pos.x = x;
    pos.y = y;

    Order order;
    order.id = id;
    order.address = pos;
    order.volume = volume;
    
    addOrderToList(t, order);
  }
  
  
  file.close();
}

void printDriverList(DriverList dList) 
{ 
	if (dList) {
    std::cout << "Driver: " << dList->data.id;
    std::cout << " address = (" << dList->data.address.x << ", ";
    std::cout << dList->data.address.y << ") ";
    std::cout << "currentVolume = " << dList->data.currentVolume << "\n";
    printDriverList(dList->next);
  }
  std::cout << std::endl;
}

void printOrderList(OrderList oList) 
{ 
	if(oList) {
    std::cout << "Order: " << oList->data.id;
    std::cout << " address = (" << oList->data.address.x << ", ";
    std::cout << oList->data.address.y << ") ";
    std::cout << "Volume = " << oList->data.volume << "\n";
    printOrderList(oList->next);
  }
    std::cout << std::endl;
} 

double GetDistance(Position add1, Position add2)
{
  return (add1.x - add2.x)*(add1.x - add2.x) + (add1.y - add2.y)*(add1.y - add2.y);
}

void GetClosestDriver(DriverList dList, OrderList oList, DriverList & closestDriver)
{
  double min = std::numeric_limits<int>::max();
  if(oList != nullptr)
  {
    while (dList != nullptr) { 
      double currentDistance = GetDistance(dList->data.address, oList->data.address);
      //std::cout << dList->data.id << " " << oList->data.id << " = " <<currentDistance << std::endl;
      if(currentDistance < min){
        min = currentDistance;
        closestDriver = dList;
      } 
      dList = dList->next; 
    }
  }
}

void UpdateDriver(OrderList oList, DriverList & closestDriver)
{
  if(oList != nullptr && closestDriver != nullptr)
  {
    closestDriver->data.currentVolume += oList->data.volume;
  }
}
