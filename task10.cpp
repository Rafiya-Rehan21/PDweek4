#include <iostream>
using namespace std;
void finalPrice(string);

main()
{
  string country;
  finalPrice(country);
}
void finalPrice(string)
{
  string country;
  int ticketPrice;
  int pakTP;
  int pakTPD;
  int ireTP;
  int ireTPD;
  int indTP;
  int indTPD;
  int engTP;
  int engTPD;
  int canTP;
  int canTPD;
while(true)
{
  cout << "Enter name of country:";
  cin >> country;
  cout << "Enter price of ticket:";
  cin >> ticketPrice;
  pakTP = (5 * ticketPrice) / 100;
  pakTPD = ticketPrice - pakTP;
  if(country == "pakistan")
   {
      cout << "Price is:" << pakTPD << endl;
   }
  ireTP = (10 * ticketPrice) / 100;
  ireTPD = ticketPrice - ireTP;
  if(country == "ireland")
   {
      cout << "Price is:" << ireTPD << endl;
   }
  indTP = (20 * ticketPrice) / 100;
  indTPD = ticketPrice - indTP;
  if(country == "india")
   {
      cout << "Price is:" << indTPD << endl;
   }
  engTP = (30 * ticketPrice) / 100;
  engTPD = ticketPrice - engTP;
  if(country == "england")
   { 
      cout << "Price is:" << engTPD << endl;
   }
  canTP = (45 * ticketPrice) / 100;
  canTPD = ticketPrice - canTP;
  if(country == "canada")
   {
      cout << "Price is :" << canTPD << endl;
   }
}
}