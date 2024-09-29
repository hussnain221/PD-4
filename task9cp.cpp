#include<iostream>
using namespace std;
void tpChecker(int people, int tp);

main()
{
int people, tp;
cout<<"Number of people in household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;

tpChecker(people, tp);
}

void tpChecker(int people, int tp)
{
int days;
days=(tp*500)/(people*57);

if(days>=14)
cout<<"Your TP will last "<<days<<" days, no need to panic!";

else
cout<<"Your TP will only last "<<days<<" days, buy more!";
}