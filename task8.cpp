#include <iostream>
using namespace std;
void ifequal(int,int);

main()
{
  int number1;
  int number2;
  ifequal(number1,number2);
}
void ifequal(int,int)
{
  int number1;
  int number2;
  cout << "Enter 1st number:";
  cin >> number1;
  cout << "Enter 2nd number:";
  cin >> number2;
  if(number1 == number2)
   {
     cout << "true" << endl;
   }
  if(number1 != number2)
   {
     cout << "false" << endl;
   }
}