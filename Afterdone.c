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
-------------------------------------------------------------------------------
//05-10-2020
//for revision purpose
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to test yourself to build program which denote\nThe pre-increment and post-increment operators\n");
    int i,ch,op;
    do{
    printf("Enter the number: ");
    scanf(" %d",&i);
    printf("input value is %d\n",i);
    printf("Choose the option\n");
    puts("#1- post +ve increment");
    puts("#2- post -ve increment");
    puts("#3- pre  +ve increment");
    puts("#4- pre  -ve increment");
    puts("#5- all increment");
    puts("#6- previous increment");
    puts("#7- simple way increment");
    puts("NOTES:\n Post increment is lower Priority than Pre-increment");
    puts("Post increment i++: i=i+1\nPre increment ++i: i+1=i");
    printf("Input your choose: ");
    scanf(" %d",&ch);
    /*printf("Please Enter the number: ");
    scanf(" %d",&i);
    printf("The value you have entered: %d\n",i);
    printf("and Please choose the option showing above: ");
    scanf(" %d",&ch);
    */
    switch(ch)
    {
    case 1:
    printf("Before the post +ve increment:%d\n",i);
    printf("Post  +ve increment,\ni++ =%d",i++);
    printf("\n\tAfter the post +ve increment:%d",i);
    break;

    case 2:
    printf("Before the post -ve increment:%d\n",i);
    printf("Post  -ve increment,\ni-- =%d",i--);
    printf("\n\tAfter the post -ve increment:%d",i);
    break;

    case 3:
    printf("Before the pre +ve increment:%d\n",i);
    printf("Pre  +ve increment,\n++i =%d",++i);
    printf("\n\tAfter the pre +ve increment:%d",i);
    break;

    case 4:
    printf("Before the pre -ve increment:%d\n",i);
    printf("Pre  -ve increment,\n--i =%d",--i);
    printf("\n\tAfter the pre -ve increment:%d",i);
    break;

    case 5:
    printf("All increment\n");
    printf("Enter the number");
    scanf(" %d",&i);
    printf(" Before i++: %d\n",i);
    printf("i++ %d\n",i++);
    printf(" After i++: %d\n\n",i);

    printf(" Before ++i: %d\n",i);
    printf("++i %d\n",++i);
    printf(" After ++i: %d\n\n",i);

    printf(" Before i--: %d\n",i);
    printf("i-- %d\n",i--);
    printf(" After i--: %d\n\n",i);

    printf(" Before --i: %d\n",i);
    printf("--i %d\n",--i);
    printf(" After --i: %d\n\n",i);

    break;

    case 6:
    printf("\nInput i= %d in pre-increment(++i) ",++i);
    printf("\nAfter pre-increment: %d",i);

    printf("\nInput i= %d in post-increment(i++||i=i+1) ",i++);
    printf("\nAfter post-increment: %d",i);

    printf("\nInput i= %d in pre-increment(--i) ",--i);
    printf("\nAfter pre-decrement: %d",i);

    printf("\nInput i= %d in pre-increment(i--||i=i-1) ",i--);
    printf("\nAfter pre-decrement: %d",i);
    break;

    case 7:
    printf("simple way increment\n");
    printf(" Before i++: %d\n",i);
    printf("i++ %d\n",i++);
    printf(" After i++: %d\n\n",i);

    printf(" Before ++i: %d\n",i);
    printf("++i %d\n",++i);
    printf(" After ++i: %d\n\n",i);

    printf(" Before i--: %d\n",i);
    printf("i-- %d\n",i--);
    printf(" After i--: %d\n\n",i);

    printf(" Before --i: %d\n",i);
    printf("--i %d\n",--i);
    printf(" After --i: %d\n\n",i);
    break;

    default:
        printf("Invalid input");
        break;
    }
    printf("\nDo you want to continue this\nPress 1");
    scanf(" %d",&op);
    if(op==1)
    {
        system("cls");
    }
    else
    {
        printf("Process has been terminated");
    }    }while(op==1);
    getch();

}
//this code is not larger than you think,try the example


