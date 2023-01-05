#include <iostream>
using namespace std;
void speedLimit(int);

main()
{
  int speed;
  speedLimit(speed);
}
void speedLimit(int)
{
  int speed;
  cout << "Enter speed of car:";
  cin >> speed;
  if(speed > 100)
   {
     cout << "HALT...YOU WILL BE CHALLENGED!!!" << endl;
   }
   if(speed < 100)   
    {
      cout << "Perfect! You're going good." << endl;
    }

}