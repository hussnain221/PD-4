#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void maze();
void player(int x, int y);

main()
{
int x=10 , y=1 ;
system("cls");
maze();
while(true)
  {
   player(x,y);
   y=y+1;
   if(y==7)
   {
     while(y>1)
     {
       player(x,y);
       y=y-1;
     }
   }
  }
}

void maze()
{
cout<<"#######################"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#                     #"<<endl;
cout<<"#######################"<<endl;
}

void player(int x, int y)
{
gotoxy(x,y);
Sleep(200);
cout<<"P";
gotoxy(x,y);
cout<<" ";
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}