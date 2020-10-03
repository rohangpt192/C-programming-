//Some extra after C programming
#include <stdio.h>
#include <conio.h>
void main()
{
    int a=3,b=4;
    printf("Hello\nworld\n");
    printf("Hello\tWorld\n");
    printf("Hello\bworld\n");
    printf("Hello\rWorld");
    //gotoxy(10,12); it's only work on turbo c
    printf("Sum of %d and %d is %d",a,b,a+b);

}
/*
format specifier
%d for int keyword
%f for float keyword
%c for char keyword
%s for string
%lf for long float


*/


//Use of gotoxy in gcc compliler
//use of goto predefine function in gcc complier
//Demo of gotoxy(x,y); function
#include <stdio.h>
#include <windows.h> //for windows library
#include <conio.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    gotoxy(20,8);
    printf("Test2");
    getch();
}

//Example #2
#include <stdio.h>
#include <windows.h> //for windows library
#include <conio.h>
void gotoxy(int x,int y)
{
    COORD c;//where COORD is predefine structure
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    int x,y;
    printf("Input co-ordinate of x and y");
    scanf(" %d %d",&x,&y);
    gotoxy(x,y);
    printf("Test5");
    getch();
}

//Example #3
#include <stdio.h>
#include <windows.h>
#include <conio.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        gotoxy(10,i);
        printf("Hello World\n");
    }
    getch();
    return 0;
}

//Example #4
//use of goto predefine function in gcc complier
#include <stdio.h>
#include <windows.h> //for windows library
#include <conio.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
    int x,y,n,i;
    printf("input co-ordinate of x: ");
    scanf(" %d",&x);
    printf("Enter the number: ");
    scanf(" %d",&n);
    system("cls"); //clrscr(); for gcc

    for(i=1;i<=n;i++)
    {
        gotoxy(x,i);
        printf("Hello World");
    }
    getch();



}




