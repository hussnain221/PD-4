#include<iostream>
using namespace std;
void possibleBonus(int yourPosition, int friendPosition);

main()
{
int yourPosition, friendPosition;
cout<<"Enter your position: ";
cin>>yourPosition;
cout<<"Enter your friend's position: ";
cin>>friendPosition;

possibleBonus(yourPosition, friendPosition);
}

void possibleBonus(int yourPosition, int friendPosition)
{
int result=friendPosition-yourPosition;

if(result<=7)
cout<<"true";

else
cout<<"false";

}