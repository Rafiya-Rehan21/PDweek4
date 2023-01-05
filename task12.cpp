#include <iostream>
using namespace std;
void flowers();

main()
{
  flowers();
}
void flowers()
{
  int redrose;
  int whiterose;
  int tulips;
  float RRprice;
  float WRprice;
  float tulipsPrice;
  float totalPrice;
  float discount;
  float discountPrice;
  cout << "Enter number of red roses:";
  cin >> redrose;
  cout << "Enter number of white roses:";
  cin >> whiterose;
  cout << "Enter number of tulips:";
  cin >> tulips;
  RRprice = 2 * redrose;
  WRprice = 4.10 * whiterose;
  tulipsPrice = 2.50 * tulips;
  totalPrice = RRprice + WRprice + tulipsPrice;
  discount = (20 * totalPrice) / 100;
  discountPrice = totalPrice - discount;
  cout << "Orignal price is :" << totalPrice << endl;
  if(totalPrice > 200)
   {
      cout << "Price after discount is:" << discountPrice << endl;
   }
}