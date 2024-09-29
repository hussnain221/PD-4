#include<iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);

main()
{
int redRose, whiteRose, tulip;
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips: ";
cin>>tulip;

flowerShop(redRose, whiteRose, tulip);
}

void flowerShop(int redRose, int whiteRose, int tulip)
{
float total, discount;
total=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);
cout<<"Original Price: $"<<total<<endl;

if(total>200)
{
discount=total-(total*0.2);
cout<<"Price after discount: $"<<discount;
}

else
cout<<"No discount applied.";

}