#include <iostream>
using namespace std;
void check(string);

main()
{
  string input;
  check(input);
}
void check(string)
{
  string input;
  cout << "Enter input i.e is true or false:";
  cin >> input;
  if(input == "true")
   {
      cout << "false" << endl;
   }
  if(input == "false")
   {
      cout << "true" << endl;
   }
}

  