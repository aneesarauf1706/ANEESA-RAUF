#include<iostream>
#include<conio.h>
#include<windows.h>
//void gotoxy(int ,int);
using namespace std;
void gotoxy(int x, int y) 
{ 
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
		
int main()
{
  int i,j;
  
   //A STARTS//
   for(i=2,j=8;j>=2;j--)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
  for(int i=2,j=2; i<=8;i++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
    for(int i=8,j=2; j<=8;j++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  
   for(int i=2,j=5; i<=8;i++)
  {
   Sleep(100);
   system("color 04");
   gotoxy(i,j);
   cout<<"*";
  }
  //n starts
  for(int i=10,j=8;j>=2;j--)
{
	    {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
}
  for(int i=10,j=2; i<=16,j<=8;i++,j++ )
    {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=16,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  //e starts
  for(int i=18,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=18,j=2;i<=23;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }  
	
	for(int i=18,j=5;i<=23;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	for(int i=18,j=8;i<=23;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	//e starts
	for(int i=25,j=2;j<=8;j++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=25,j=2;i<=30;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=25,j=5;i<=30;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=25,j=8;i<30;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	//s starts
	for(int i=38,j=2;i>=33;i--)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=33,j=2;j<=5;j++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	for(int i=33,j=5;i<=38;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=38,j=5;j<=8;j++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";	
	}
	
	for(int i=33,j=8;i<=38;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	//a starts
	for(int i=40,j=8;j>=2;j--)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	for(int i=40,j=2;i<=45;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	for(int i=45,j=2;j<=8;j++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	for(int j=5,i=40;i<=45;i++)
	{
	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
	}
	
	//r starts
	for(int i=50,j=2;j<=8;j++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=50,j=2;i<=55;i++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=55,j=2;j<=5;j++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=55,j=5;i>=50;i--)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=50,j=5;i>=55,j<=8;i++,j++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	//a starts
	for(int i=57,j=8;j>=2;j--)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}

 	for(int i=57,j=2;i<=62;i++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=62,j=2;j<=8;j++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=62,j=5;i>=57;i--)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	//u  starts
	for(int i=65,j=2;j<=8;j++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=65,j=8;i<=70;i++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=70,j=8;j>=2;j--)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}

    //f starts
    for(int i=72,j=2;j<=8;j++)
    {
    	Sleep(100);
    	system("color 04");
    	gotoxy(i,j);
    	cout<<"*";
	}
	
	for(int i=72,j=2;i<=76;i++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
	for(int i=72,j=5;i<=76;i++)
	{
		Sleep(100);
		system("color 04");
		gotoxy(i,j);
		cout<<"*";
	}
	
getch();
}
