#include<iostream>
using namespace std;
void conversion(string condition);

main()
{
string condition;
cout<<"Enter 'true' or 'false': ";
cin>>condition;

conversion(condition);
}

void conversion(string condition)
{
if(condition=="true")
   cout<<"false";

if(condition=="false")
   cout<<"true";
}