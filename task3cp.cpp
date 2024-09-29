#include<iostream>
using namespace std;
void country(string name,float price);

main()
{
string name;
float price;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>price;

country(name,price);
}

void country(string name,float price)
{
float discount;

if(name=="Pakistan")
{
discount=price-(price*0.05);
cout<<"Final ticket price after discount: "<<discount;
}

if(name=="Ireland")
{
discount=price-(price*0.1);
cout<<"Final ticket price after discount: "<<discount;
}

if(name=="India")
{
discount=price-(price*0.2);
cout<<"Final ticket price after discount: "<<discount;
}

if(name=="England")
{
discount=price-(price*0.3);
cout<<"Final ticket price after discount: "<<discount;
}

if(name=="Canada")
{
discount=price-(price*0.45);
cout<<"Final ticket price after discount: "<<discount;
}

}
