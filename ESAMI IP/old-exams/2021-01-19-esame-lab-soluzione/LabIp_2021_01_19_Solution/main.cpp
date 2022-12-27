#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits>
#include "Cognome.h"

int main()
{
  DriverList driverList = nullptr;
  OrderList orderList = nullptr;

  ReadDriver("driver_data.txt", driverList);
  printDriverList(driverList);

  ReadOrder("order_data.txt", orderList);
  printOrderList(orderList);

  while (orderList != nullptr) { 
    DriverList closestDriver = nullptr;
    GetClosestDriver(driverList, orderList, closestDriver);
    UpdateDriver(orderList, closestDriver);
    std::cout << "Il driver 2 " << closestDriver->data.id << " trasporta " << closestDriver->data.currentVolume << " volume di merce." << std::endl;
    orderList = orderList->next; 
  }

}