#include <iostream>
using namespace std;
void printMenu();

main()
{
  printMenu();
}
void printMenu()
{
  string name1;
  string name2;
  int matric1;
  int matric2;
  int inter1;
  int inter2;
  int ecat1;
  int ecat2;
  float matric_percentage1;
  float matric_percentage2;
  float inter_percentage1;
  float inter_percentage2;
  float ecat_percentage1;
  float ecat_percentage2;
  float matric_weightage1;
  float matric_weightage2;
  float inter_weightage1;
  float inter_weightage2;
  float ecat_weightage1;
  float ecat_weightage2;
  float aggregate1;
  float aggregate2;
  cout << "UNIVERSITY of ENGINEERING and TECHNOLOGY" << endl;
  cout << "Enter name of 1st student:";
  cin >> name1;
  cout << "Enter name of 2nd student:";
  cin >> name2;
  cout << "Enter matric marks of 1st student:";
  cin >> matric1;
  cout << "Enter matric marks of 2nd student:";
  cin >> matric2;
  cout << "Enter inter marks of 1st student:";
  cin >> inter1;
  cout << "Enter inter marks of 2nd student:";
  cin >> inter2;
  cout << "Enter ecat marks of 1st student:";
  cin >> ecat1;
  cout << "Enter ecat marks of 2nd student:";
  cin >> ecat2;
  matric_percentage1 = (matric1/1100.0)*100;
  matric_percentage2 = (matric2/1100.0)*100;
  inter_percentage1 = (inter1/550.0)*100;
  inter_percentage2 = (inter2/550.0)*100;
  ecat_percentage1 = (ecat1/400.0)*100;
  ecat_percentage2 = (ecat2/400.0)*100;
  matric_weightage1 = (matric_percentage1*30)/100;
  matric_weightage2 = (matric_percentage2*30)/100;
  inter_weightage1 = (inter_percentage1*30)/100; 
  inter_weightage2 = (inter_percentage2*30)/100;
  ecat_weightage1 = (ecat_percentage1*40)/100;
  ecat_weightage2 = (ecat_percentage2*40)/100;
  aggregate1 = (matric_weightage1 + inter_weightage1 + ecat_weightage1);
  aggregate2 = (matric_weightage2 + inter_weightage2 + ecat_weightage2);
  cout << "Aggregate of 1st student is:" << aggregate1 << endl;
  cout << "Aggregate of 2nd student is:" << aggregate2 << endl;
  if(ecat1 > ecat2)
   {
      cout << "Roll number 1 is alloted to 1st student." << endl;
   }
  if(ecat2 > ecat1)
   {
      cout << "Roll number 1 is alloted to 2nd student." << endl;
   }
}


  






  
