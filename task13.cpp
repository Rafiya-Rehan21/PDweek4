#include <iostream>
using namespace std;
void sleepTime(int holidays, int workingDays, int playingTime, int difference);

main()
{
  int holidays;
  int workingDays;
  int playingTime;
  int difference;
  cout << "Enter number of holidays:";
  cin >> holidays;
  workingDays = (365-holidays);
  playingTime= (workingDays * 63 + holidays * 127);
  difference = (30000 - playingTime);
  sleepTime(holidays, workingDays,playingTime,difference);
}
void sleepTime(int holidays, int workingDays, int playingTime, int difference)
{
  
  if(playingTime > 30000)
   {
      cout << "Tom runs away!!" << endl;
   }
  if(playingTime < 30000)
   {
      cout << "Tom sleeps well !!" << endl;
   }
  cout << "Difference from current year's norm:" << difference << endl;
}

 