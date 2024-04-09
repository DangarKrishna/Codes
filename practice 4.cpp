#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ 
 int km;
 int m;
 int cm;
 int kmtom=1000.0;
 int mtocm=100.0;

 cout<<"Enter Kilometer:";
 cin>>km;

 m=km*kmtom;
 cm=m*mtocm;

 cout<<"kilometer to meter:"<<m<<endl;
 cout<<"kilometer to centimeter:"<<cm<<endl;

 return 0;


}