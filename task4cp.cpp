#include<iostream>
using namespace std;
void challan(float speed);

main()
{
float speed;
cout<<"Enter speed: ";
cin>>speed;

challan(speed);
}

void challan(float speed)
{
if(speed<=100)
   cout<<"Perfect! You're going good.";

else
   cout<<"HAlt... YOU WILL BE CHALLANED!!!";
}
