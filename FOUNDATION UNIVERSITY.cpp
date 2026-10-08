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
  
  //f starts
  for(int i=2,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=2,j=2;i<=6;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=2,j=5;i<=6;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //o starts
  for(int i=8,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=8,j=2;i<=13;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=13,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=8,j=8;i<=13;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //u starts
  for(int i=15,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=15,j=8;i<=20;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=20,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //n starts
  for(int i=22,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=22,j=2;i<=28,j<=8;i++,j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=28,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //d starts
  for(int i=30,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }  
  
  for(int i=30,j=8;i<=38;i++)
  {   
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=38,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=30,j=2;i<=38;i++)
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
  
  for(int i=40,j=5;i<=45;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //t starts
  for(int i=47,j=2;i<=52;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=49,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //i starts
  for(int i=54,j=2;i<=59;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=57,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=54,j=8;i<=59;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //o starts
  for(int i=61,j=2;j<=8;j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=61,j=8;i<=66;i++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=66,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=66,j=2;i>=61;i--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  //n starts
  for(int i=68,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=68,j=2;i<=74,j<=8;i++,j++)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  
  for(int i=74,j=8;j>=2;j--)
  {
  	Sleep(100);
  	system("color 04");
  	gotoxy(i,j);
  	cout<<"*";
  }
  

    // U starts
    for(int i=2,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=2,j=16;i<=8;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=8,j=16;j>=10;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // N starts
    for(int i=11,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=11,j=10;i<=17 && j<=16;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=17,j=16;j>=10;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // I starts
    for(int i=20,j=10;i<=26;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=23,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=20,j=16;i<=26;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // V starts
    for(int i=29,j=10;i<=32 && j<=16;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=35,j=10;i>=32 && j<=16;i--,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // E starts
    for(int i=38,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=38,j=10;i<=44;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=38,j=13;i<=43;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=38,j=16;i<=44;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // R starts
    for(int i=47,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=47,j=10;i<=53;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=53,j=10;j<=13;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=53,j=13;i>=47;i--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=53,j=13;i<=59 && j<=16;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // S starts
    for(int i=67,j=10;i>=61;i--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=61,j=10;j<=13;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=61,j=13;i<=67;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=67,j=13;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=67,j=16;i>=61;i--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // I starts
    for(int i=70,j=10;i<=76;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=73,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=70,j=16;i<=76;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // T starts
    for(int i=79,j=10;i<=85;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=82,j=10;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // Y starts
    for(int i=88,j=10;i<=91 && j<=13;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=94,j=10;i>=91 && j<=13;i--,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=91,j=13;j<=16;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

  
  
  
  
  
  
  
  
  
  
  
  
  getch();
}