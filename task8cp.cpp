#include<iostream>
using namespace std;
void pet(int holidays);

main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;

pet(holidays);
}

void pet(int holidays)
{
int w_Days=365-holidays;
int t_Games=(w_Days*63)+(holidays*127);
int difference=30000-t_Games;


if(difference<0)
{
difference=-difference;
cout<<"Tom will run away."<<endl;
cout<<difference/60 <<" hours and " <<difference%60 <<" minutes for play";
}

else
{
cout<<"Tom sleeps well."<<endl;
cout<<difference/60 <<" hours and " <<difference%60 <<" minutes less for play";
}
}