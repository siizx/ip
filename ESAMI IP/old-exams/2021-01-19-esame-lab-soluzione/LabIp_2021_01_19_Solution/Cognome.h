#include<string>
#include<iostream>
#include<fstream>


struct Position{
  double x;
  double y;
};

struct Driver{
  int id;
  Position address;
  double currentVolume;
};

struct Order{
  int id;
  Position address;
  double volume;
};

struct DriverCell { 
	Driver data; 
	DriverCell* next; 
};

struct OrderCell { 
	Order data; 
	OrderCell* next; 
};

typedef DriverCell* DriverList;
typedef OrderCell* OrderList;



void addDriverToList(DriverList& headDriver, Driver newDriver);
void addOrderToList(OrderList& headOrder, Order newOrder);
void ReadDriver(std::string nomefile, DriverList & t);
void ReadOrder(std::string nomefile, OrderList & t);
void printDriverList(DriverList dList);
void printOrderList(OrderList oList);
double GetDistance(Position add1, Position add2);
void GetClosestDriver(DriverList dList, OrderList oList, DriverList & closestDriver);
void UpdateDriver(OrderList oList, DriverList & closestDriver);

