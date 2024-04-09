#include<iostream>
#include<iomanip>
using namespace std;

int main()
{  

double a,b,c;
double avg;
 float total;

cout<<" Input any three number of your choice:";
cout<<endl;

cin>>a>>b>>c;

total=(a+b+c);

avg=(total/3);

cout<<"Average of given numbers is:"<<avg<<endl;

return 0;

}