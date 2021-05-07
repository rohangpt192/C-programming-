#include <stdio.h>
#include <conio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int w,int x)
{
    return x-w;
}
int mul(int,int);
int div(int d,int e)
{
    return d/e;
}
void main()
{
    int a,b,c,ch,temp,opt;
    do{
    printf("Test your programming skills\n");
    printf("Enter the number: ");
    scanf(" %d %d",&a,&b);
    printf("Choose the option\n");
    puts("#1- Addition");
    puts("#2- Subtraction");
    puts("#3- Multiplication");
    puts("#4- Division");
    puts("#5- Exchange number between a and b");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("Method #1 by function call :%d\n",add(a,b));
        printf("Method #2 by adding on format \n%d+%d=%d\n",a,b,a+b);
        printf("Method #3 by addition of two variable into one variable\n");
        c=a+b;
        printf("Addition of a and b: %d\n",c);
    }
    else if(ch==2)
    {
        printf("Subtraction of b and a: %d-%d=%d",a,b,sub(a,b));
    }
    else if(ch==3)
    {
        printf("Multiplication of b and a\n %d-%d=%d",a,b,sub(a,b));
    }
    else if(ch==4)
    {
        printf("Division of a and b:%d\n",div(a,b));

    }
    else if(ch==5)
    {
        printf("Exchange number between a and b");
        printf("Before exchange number\nWhere value of a=%d and b=%d\n",a,b);
        temp=a;
        a=b;
        b=temp;
        printf("After exchange number\nWhere value of a=%d and b=%d\n",a,b);

    }
    else
        printf("Invalid Input\n");

    printf("Do you want to continue this process");
    scanf(" %d",&opt);
    if(opt==1)
    {
        system("cls");
    }
    }while(opt==1);
    getch();

}

int mul(int m,int n)
{
    int p;
    p=m*n;
    return p;
}

//12-11-2020
 #include <stdio.h>
#include <conio.h>
int rectangle(int x,int y)
{
    return x*y;
}
int square(int x)
{
    return x*x;
}
void main()
{
    printf("Write a program to test yourself to \nCalculate the areas of square , rectangle and circle by using function and switch case\n");
    int a,b,area,choose;
    printf("Enter the number of length/side and breath: ");
    scanf(" %d %d",&a,&b);
    printf("Choose the option");
    puts("#1: Area of rectangle");
    puts("#2: Area of Square");
    puts("#3: Area of Triangle");
    puts("#4: Area of Circle");
    scanf(" %d", &choose);
    switch(choose)
    {
    case 1:
        printf("Length: %d,Breath: %d,\nArea of Rectangle: %d",a,b,)

        break;

    default:
        printf("Invalid Input");
        break;
    }



}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate the average by using function method\n");
    int i,n,arr[10],total=0;
    printf("Enter the number: ");
    scanf(" %d",&n);
    printf("Input the average number:");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        total +=arr[i];
    }
    printf("Total Input is :%d",total);
    printf("\nAverage: %.2f",total/(float)n);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate the average by using function method");
    printf("\nalso,find out grade of student");
    int i,n,arr[10],total=0;
    float avg;
    printf("\nEnter the number of subject: ");
    scanf(" %d",&n);
    printf("Input the marks of all number of subject you have input:");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        total +=arr[i];
    }
    printf("Total Input is :%d",total);
    avg=total/(float)n;
    printf("\nAverage: %.2f",avg);
    if(avg>=60)
        printf("\nFirst Division: Grade A");
    else if((avg>=50) && (avg<=60))
        printf("\nSecond Division: Grade B");
    else if((avg>=40) && (avg<=50))
        printf("\nThird Division: Grade C");
    else
    {
        printf("\nfailed");
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program in while and do-while loop to print message many times user wants");
    int n,i;
    char meg[50];
    printf("\nEnter your message: ");
    scanf(" %s",&meg);
    printf("\nEnter the number:");
    scanf(" %d",&n);
    i=1;
    while(i<=n)
    {
        printf("%s\n",meg);
        i++;
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0,n,ch;
    printf("Enter:");
    scanf(" %d",&n);
    puts("choose the option");
    puts("#1-Non-Reverse order");
    puts("#2-Reverse order");
    scanf(" %d",&ch);
    switch(ch)
    {
    case 1:
        printf("Non-Reverse\n");
        while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    break;
    case 2:
        printf("Reverse\n");
        i=n;
        do
        {
            printf("%d\t",i);
            i--;
        }while(i>=1);

    break;
    default:
        printf("Invalid Option");
        break;

    }
}

#include <stdio.h>

void main()
{
    int i,no[5]={2,3,4,5,6};
    char name[]={"Gaya"};
    printf("%s",name);
    for(i=0;i<5;i++)
    {
        printf(" %d",no[i]);
    }
}



#include <stdio.h>
#include <conio.h>
struct Employee
{
    char name[50];
    int emp_id;
    long phone_no;
};

void main()
{
    struct Employee e;
    printf("Enter name:");
    scanf(" %s",&e.name);
    printf("Enter emp_id: ");
    scanf(" %d",&e.emp_id);
    printf("Enter your phone no.");
    scanf(" %ld",&e.phone_no);

    printf("\n\nEnter name    :%s",e.name);
    printf("\n\nEnter Emp id  :%d",e.emp_id);
    printf("\n\nEnter Phone no:%ld",e.phone_no);
    getch();
}


#include <stdio.h>
#include <conio.h>
int main()
{
    printf("BOMAS check on c program");
    int a,b,c;
    printf("Enter the number");
    scanf(" %d%d%d",&a,&b,&c);
    printf("Result of %d+%d*%d=%d",a,b,c,a+b*c);
    getch();
}
//turbo c ,first compile the code then link the code on complier option ,run the code every time
main()
{
int x,y,z;
float k;
double dl;
char ch;
clrscr();
/*
x=sizeof(34);
y=sizeof(3.56);
z=sizeof('a');
printf("%d %d %d",x,y,z);
*/
x=sizeof(ch);
printf("%d",x);

getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check the input value is divisible or not\n");
    int a,b,c;
    printf("Enter the number:");
    scanf(" %d%d",&a,&b);
    c=a%b;
    if(c==0)
    {
        printf("Input value is divisible");
    }
    else
    {
        printf("Input value is not divisble");
    }
}
//from Turbo C, with link the code with .o (object file)
/*#include <stdio.h>
#include <conio.h>
void main() */
main()
{/*
int y='a',m,o;
char x=97;
float n=97.0;
clrscr();

printf("%d\n",y);
printf("%c\n",x);
printf("%.2f\n",n);
m=sizeof(n);
printf("m=%d\n",m);
o=sizeof(97.00);
printf("o=%d",o);

int x;
float y;
clrscr();
x=3.0/4;
y=3.0/4;
printf("x=%d",x);
printf("y=%.4f",y);

int x,y,z;
clrscr();
x=345;
y=x%10;
z=x/10;
printf("In 10,\nx=%d\ny(module)=%d\nz(divide)=%d",x,y,z);
*/
int x=~1;
clrscr();
printf("%d",x);

getch();

}


//Program to covert decimal number to binary number;
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[10],i,n;
    printf("Enter the decimal number to convert: ");
    scanf(" %d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("The converted binary number=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}


//Program to covert decimal number to binary number;
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[10],i,n;
    printf("Enter the decimal number to convert: ");
    scanf(" %d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("The converted binary number=");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}
//09-12-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,x,ch;
    printf("Input the value of a and b:");
    scanf(" %d %d",&a,&b);
    printf("Choose the option\n");
    puts("#1 x=a>b");
    puts("#2 x=a<b");
    printf("where 1 is true and 0 is false: ");
    scanf(" %d",&ch);
    switch(ch)
    {
    case 1:
        x=a>b;
        printf("x=a>b,Is input is 1 or 0: %d",x);
        break;
    case 2:
        x=a<b;
        printf("x=a<b,Is input is 1 or 0: %d",x);
        break;
    default:
        printf("Invalid Input");
        break;

    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    //1 true and 0 false
    int y,x=5;
    //y=x>4;
    //y=!x>4;
    //y=x>4&&x<10;
    /* In AND && logical operator
    if statement 1 is 0 =0
    if statement 1 is 1 && statement 2 is 0= 0
    if statement 1 is 1 && statement 2 is also 1= 1
    */
    /* In OR || logical operator
    if statement 1 is 0 || statement 2 is also 0= 0
    if statement 1 is 0 || statement 2 is 1= 1
    if statement 1 is 1 =1
    In simply way

    */
    y=x<4||x<10;
    printf(" %d",y);

}

#include <stdio.h>
#include <conio.h>
int ifelse(int x,int y)
{
    int m;
    if(x>y)
    {
        m=x;
    }
    else
    {
        m=y;
    }
    return m;

}
int con1(int x,int y)
{
    int n;
    n=x>y?x:y; //In some condition a>b?x=a:(x=b);
    return n;

}


void main()
{
    printf("Write a program to compare two input number by using if/else or conditional operator\n");
    int a,b,ch;
    printf("Enter the number of a and b: ");
    scanf(" %d %d",&a,&b);
    printf("Choose the option\n");
    puts("#1 if or else method");
    puts("#2 conditional operator exepresion1?exepression2:expression2");
    scanf(" %d",&ch);
    switch(ch)
    {
        case 1:
        ifelse(a,b);
        printf("Result in if else: %d",ifelse(a,b));
        break;

        case 2:
           con1(a,b);
           printf("Result in conditional operator: %d",con1(a,b));
        break;

        default:
            printf("Invalid Input");
        break;
    }
}
// 01-02-2021
#include <stdio.h>
#include <conio.h>
void main()
{
    int x,a,b,c,op,ch,dow;
    //ch= choose , op = operation, dow = do-while loop
    do{
    printf("Bitwise Operators\n");
    puts("#1- Bitwise AND & operator");
    puts("    Bitwise OR  | operator");
    puts("#2- Bitwise NOR ~ operator");
    puts("    Bitwise XOR ^ operator");
    puts("#3- Bitwise Right Shift >>");
    puts("    Bitwise Left  Shift <<");
    printf("Choose the option");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("Enter the number");
        scanf(" %d %d",&a,&b);
        puts("#1- Bitwise AND & operator");
        puts("#2- Bitwise OR  | operator");
        printf("choose the another option showing above");
        scanf(" %d",&ch);
        if(ch==1)
        {
            printf("AND & Operation: \nx=a&b: %d",x=a&b);
        }
        else if(ch==2)
        {
            printf("OR | Operation: \nx=a&b: %d",x=a|b);
        }
        else
        {
            printf("Invalid Option");
        }

    }
    else if(ch==2)
    {
        printf("404 no found");
    }
    else if(ch==3)
    {
        printf("Enter the number,where second input is lowest number");
        scanf(" %d %d",&a,&b);
        puts("#1- Bitwise Right Shift >>");
        puts("#2- Bitwise Left  Shift <<");
        printf("choose the another option showing above");
        scanf(" %d",&ch);
        if(ch==1)
        {
            printf("Right Shift >>: \nx=a>>b: %d",x=a>>b);
        }
        else if(ch==2)
        {
            printf("Left  Shift <<: \nx=a<<b: %d",x=a<<b);
        }
        else
        {
            printf("Invalid Option");
        }

    }
    else
    {
        printf("Invalid Option");
    }
    printf("\nDo you want to continue this\nPress 1");
    scanf(" %d",&dow);
    if(dow==1)
    {
        system("cls");
    }
    else
    {
        printf("Process has been terminated");
    }    }while(dow==1);
    getch();
}
/*For bitwise operator which only work in binary 0 and 1 format
    AND & bitwise operator
    0&0=0
    0&1=0
    1&0=0
    1&1=1

    OR | bitwise operator
    0 | 0=0
    0 | 1=1
    1 | 0=1
    1 | 1=1

    XOR ^ bitwise Operator
    0 ^ 0=0
    0 ^ 1=1
    1 ^ 0=1
    1 ^ 1=1

    NOR ~ bitwise Operator, it is also unary operator as well
    which covert 0 binary number into 1 like (in 16bit architecture)
    5=0000000000000101, where MSB 1 is +ve aka positive
   ~5=1111111111111010, where MSB 1 is -ve aka negative
      ^MSB[(Most significant Bit) like first bit number]
       512,256,128,64,32,16,8,4,2,1
    5=   0  0   0   0  0  0 0 1 0 1

*/

-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Example taken from Saurabh shukla video\n");
    int x,i=1;
    printf("Enter the number:");
    scanf(" %d",&x);
    while(i<=5)
    {
        printf("%d\n",i);
        if(x>0)
            break;
        i++;
    }
    //i==6?printf("End normally"):printf("applied break");
    if(i==6)
    {
        printf("End normally");
    }
    else
    {
        printf("applied break");
    }
    getch();
}

-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program which apply switch case loop\n");
    int a,b,ch;
    do{
    // while(1){
    printf("\nChoose the option\n");
    puts("#1 Addition");
    puts("#2 Odd-even");
    puts("#3 first natural number");
    puts("#4 Exit");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Input two numbers");
        scanf(" %d %d",&a,&b);
        printf("Addition of two number:\n%d+%d=%d",a,b,a+b);
        break;
    case 3:
        printf("Input the value");
        scanf(" %d",&a);
        for(b=1;b<=a;b++)
         printf(" %d",b);
        break;
    case 2:
        printf("Input the value");
        scanf(" %d",&a);
        if(a%2==0)
        {
            printf("Input value is even number");
        }
        else
        {
            printf("Input value is odd number");
        }
        break;
    case 4: exit(0);
        default:
            printf("Invalid Input");
    }
    /*printf("\nDo you want to continue this process? \npress 1:");
    scanf(" %d",&a);
    if(a==1)
    {
        system("cls");
    }
    else
    {
        printf("process has been terminated");
    }
    }while(a==1);*/
    }while(1);

}
-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void print1(void)
{
    printf("Hello World\n");
}
void print2(void)
{
    print1();
}
void print3()
{
    printf("Function Another World\n");
    //print1(); you can call function whenever you want, but there must be one function form main()
}
void main()
{
    print1(); //p1
    print2(); //p2
    print3(); //p3
}
/*
let's explain what's going on memory whenever function calls
  CODE                       RAM                                       OUTPUT screen
  void main()---------------main();
{
    p1();----called---------p1(); ------> printf("Hello World");           Hello world
    p1();x x x tasked ennded, only main(); remain and                Hello World
    print1(); has been vanished or left the memory,

    then p2();---called---->which called p1(); and perform same task as above
    after that p1(); got left and after p2(); left the memory

    then p3(); got called ----------p3();-----printf();--------------Function Another World
                          only main(); remain on RAM
    getch();---------------getch();----------------------------------(one character input)
} //done

*/
---------------------------------------------------------------------
//Takes nothing, Return nothing (way to define function)
#include <stdio.h> //stdio.h means standard input output
#include <conio.h> //console which is used for dos or turbo C and some complier in windows based GCC
void add(void); //function prototype
void main() //void means empty or no return
{
    add();     //------|
    getch();  //       |
}            //        |
void add()  //<--------|
{
    int a,b,c;
    printf("Enter two numbers");
    scanf(" %d%d",&a,&b);
    c=a+b;
    printf("Addition: %d",c);

} //after done function task ,it return back to main() where add(); calls done

-------------------------------------------------------------
//Takes Something, Return nothing (way to define function)
#include <stdio.h>
#include <conio.h>
//void add(int,int); //This declaration is global declaration which apply on whole code/program
void main()
{
    int x,y;
    void add(int,int);//which is only apply under main();
    printf("Enter two numbers");
    scanf(" %d%d",&x,&y);
    add(x,y); //Actual argument which calling function by value input by user ,not by variable x and y
    getch();
}

void add(int a,int b) //formal argument which copied values from x & y to a & b
{ // you can also write same variable like add(int x,int y) which won't be affect on compiling
    int c;
    c=a+b;
    printf("Addition: %d",c);

} //after done function task ,it get back to main() after add(); called

-------------------------------------------------------------
//Takes nothing, Return something (way to define function)
#include <stdio.h>
#include <conio.h>
int add(void);
void main()
{
    int x;
    x=add();
    printf("Return of Sum: %d",x);
    getch();
}

int add()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf(" %d%d",&a,&b);
    c=a+b;
    return (c); //you can type return (a+b);,return c; but return only can return only one variable, not more than one
    //printf("like"); this code won't work after declare return c;
}
/*
case #1: return a,b,c; only c will be return
case #2: use bracket if you want return something more than one variable like
return (a+b);
*/

-------------------------------------------------------------
//Takes something, Return something (way to define function)
#include <stdio.h>
#include <conio.h>
int add(int ,int);
void main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf(" %d%d",&x,&y);
    printf("Return of Sum: %d",add(x,y)); //yes , you can also do that
    getch();
}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

//Recursion function example
#include <stdio.h>
#include <conio.h>
int fun(int a)
{
    int s;
    if(a==1)
        return a;
    s=a+fun(a-1);
    return s;
}

void main()
{
    int k;
    k=fun(3);
    printf("%d",k);
    getch();
}

-------------------------------------------------------------
//Example of array by myself
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10],a,b,i;
    printf("Enter the number");
    scanf(" %d",&a);
    for(i=0;i<a;i++)
    {
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<a;i=i+1)
    {
        printf(" #%d-%d\n",i+1,arr[i]);
    }
}

-------------------------------------------------------------
//Test the program to run the while loop until i==0
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    while(1)
    {
    printf("Enter the number:");
    scanf(" %d",&i);
    if(i==0)
       break;
    }

}

-------------------------------------------------------------
#include <stdio.h>
void main()
{
    int i,n,a[10]={1,3,4,5,6};
    scanf(" %d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }

}

-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,a[10];
    printf("Enter the limit less than 9: ");
    scanf(" %d",&n);
    printf("Enter the array element\n");
    for(i=0;i<=n;i++)
        scanf(" %d",&a[i]);

    for(i=0;i<=n;i++)
    printf("%d\t",a[i]);

    getch();
}

-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to find out avg of input\n");
    int i,sum=0,n,arr[100];
    float avg;
    printf("Enter the limit avg:");
    scanf(" %d",&n);
    printf("Enter the number\n");
    for(i=0;i<n;i++)
       scanf(" %d",&arr[i]);

    for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    avg=sum/n;
    printf("Avg:%.2f",avg);

    getch();
}
-------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to find out avg of input\n");
    int i,j,n,ar[3][2]={1,2,3,4,5,6};//which ar[3x2] to ar[6]
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",ar[i][j]);
        printf("\n");
    }
    getch();
}
-----------------------------------------------------
//A very simple program to understand two dimensional array
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,m,n,ar[20][10];
    printf("Set limit for Row   (vertical down)     less than 20:");
    scanf("%d",&m);
    printf("Set limit for Column (Horizontal right) less than 10:");
    scanf("%d",&n);
    printf("Rows are:%d,\nColumn are: %d,\nRequire to input:%d\n",m,n,m*n);
    printf("Enter the array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elements %d%d:",i+1,j+1);
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Array matrix form\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",ar[i][j]);
        printf("\n");
    }
    getch();
}

---------------------------------------------------------------
//Write a program to check if you are able to pass out array through the function
#include <stdio.h>
#include <conio.h>
//by using take nothing and nothing return (way to define function)
void array1()
{
    printf("Write a program to find out avg of input\n");
    int i,sum=0,n,arr[100];
    float avg;
    printf("Enter the limit avg:");
    scanf(" %d",&n);
    printf("Enter the number\n");
    for(i=0;i<n;i++)
       scanf(" %d",&arr[i]);

    for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    avg=sum/n;
    printf("Avg:%.2f",avg);

}
void main()
{
    array1();

    getch();
}

------------------------------------------------------------
//string example in many nothing take and nothing return array
#include <stdio.h>
#include <conio.h>
void string1()
{
    printf("Example #1: ");
    char s[10]={'R','O','H','A','N','\0'};
    int i;
    for(i=0;i<5;i++)// || for(i=0;i<=4;i++)
        printf("%c",s[i]);
    //string2();//one function call from this side
}
void string2()
{
    char s[10]={'R','O','H','A','N','\0'};
    int i;
    printf("\nExample #2: ");
    for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]);
    //string1(); if u call same function in both side it'll go to recursion loop in both function
}
void string3()
{
   // char s[10]={'R','O','H','A','N','\0'};
    char s[10]="ROHAN";
    int i,ch;
    printf("\nExample #3:\n");
 // puts("#1 printf:%s");
 // puts("#2 puts( s )");
 // scanf(" %d",&ch);
   // if(ch==1)
    printf("%s\n",s);// %s = sequence of char or string
   //else if(ch==2)
    puts(s);

}
void string4()
{
    char s[10];
    printf("Enter the character less than 10:\n");
    //scanf(" %s",s); //scanf("%s",&s[0]);
    gets(s);
    printf("%s",s);
}
void main()
{
    string1();
    string2();
    string3();
    string4();

    getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
    char s[3][10];
    int i;
    printf("Enter the names:\n");
    for(i=0;i<=2;i++)
        gets(&s[i][0]);// gets(s[i]);
    printf("Print:\n");
    for(i=0;i<=2;i++)
        puts(s[i]);//printf("%s\n",s[i]);
}
----------------------------------------
//find out address of input Numbers
#include <stdio.h>

int main()
{
    int i=5;
   printf("%d\n",i);
   printf("%u\n",&i);
   printf("%d\n",*&i);
    return 0;
}
/*
Variable is :5
Address  is :6422296
*/
--------------------------------------------
//find out address of input Numbers
#include <stdio.h>
#include <conio.h>

int main()
{
int x=5,*j;
j=&x;
//clrscr();
printf("x=%d\n",x);
printf("j=%d\n",j);
printf("*j=%d\n",*j);
printf("x=%d,j=%u\n",x,j);
printf("*j=%d,&x=%u\n",*j,&x);
printf("*&j=%u",*&j);
getch();
return 0;
}
/*
Output
x=5
j=6422300
*j=5
x=5,j=6422300
*j=5,&x=6422300
*&j=6422300

*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int x=5, *p,**q,***r;
    //Extended concept of the pointers
    p=&x;
    q=&p;
    r=&q;
    printf("x=%d\n",x);
    printf("p=%d\n",p);
    printf("q=%d\n",q);
    printf("r=%d\n",r);
    printf("*p=%d\n",*p);
    printf("*q=%d\n",*q);
    printf("**q=%d\n",**q);
    printf("*r=%d\n",*r);
    printf("**r=%d\n",**r);
    printf("***r=%d\n",***r);
    getch();
}
/*
x=5
p=6422296
q=6422292
r=6422288
*p=5
*q=6422296
**q=5
*r=6422292
**r=6422296
***r=5
*/
---------------------------------------------------------------
//In Turbo c
main()
{
int x=5, *p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
clrscr();
    printf("x=%d\n",x);
    printf("p=%u\n",p);
    printf("q=%u\n",q);
    printf("r=%u\n",r);
    printf("*p=%u\n",*p);
    printf("*q=%u\n",*q);
    printf("**q=%u\n",**q);
    printf("*r=%u\n",*r);
    printf("**r=%u\n",**r);
    printf("***r=%u\n",***r);
getch();
}
---------------------------------------------------------------------
//find out address of input Numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int x=5, *p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
/*
pointer's Arithmetic
* we cannot add, multiply or divide two addresses (Subtraction is Possible)
* we cannot multiply an integer to an address and similarly we cannot divide an address with an integer value
* we can add or subtract integer to/from an address
* Pointer+n= pointer+ sizeof(type of pointer)*n
* We can subtract two addresses of same type.
* Pointer1-pointer2=Literal subtraction/sizeof(type of pointer)
p+1 1002
p+4 1000+2*4=1008
p-1 998
*/
printf("  p=%d (p)\n",p);
printf("p+1=%d (p+2*n)\n",p+1);//int takes 2 bit in 16 bit Architecture,int takes 4 bit in 32 bit Architecture
printf("p-1=%d (p-2*n)\n",p-1);
    getch();
}
----------------------------------------------------------------------------
//Application of pointer where, its call by reference.
#include <stdio.h>
#include <conio.h>
//void swap(int *,int *); function prototype
void swap(int *x,int *y)
{
   int t;
   t=*x;
   *x=*y;
   *y=t;
}

void main()
{
   int a,b;
   printf("Enter two numbers: ");
   scanf(" %d %d",&a,&b);
   printf("Input of a=%d and b=%d\n",a,b);
   swap(&a,&b);
   printf("Swap a=%d & b=%d",a,b);
   getch();
}
-----------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
void arr()
{
    int i,a[5],*p;
    p=&a[0];
    printf("take input array through pointer: ");
    for(i=0;i<=4;i++)
        scanf(" %d",p+i);
    printf("Printed array through array");
    for(i=0;i<=4;i++)
        printf(" %d",*(p+i));
}

void point()
{
    int i,a[50],n;
    printf("Enter the limit of array input:");
    scanf(" %d",&n);
    puts("take input array normally way: ");
    for(i=0;i<n;i++)
        scanf(" %d",&a[i]);
    printf("Printed array normally way");
    for(i=0;i<n;i++)
        printf(" %d",*&a[i]);
}
void main()
{
    arr();
    printf("\n");
    point();

   getch();
}
---------------------------------------------------------
//last update was 20-02-2021
//use pointer && array, make bubble sort code
#include <stdio.h>
#include <conio.h>

void input(int *p)//where *p is decoding address
{
   int i;
   for(i=0;i<=4;i++)
      scanf(" %d",p+i);//where p is &a[i]
}
void display(int *p)
{
   int i;
   for(i=0;i<=4;i++)
      printf(" %d",*(p+i));//where p is &a[i],but *p is a[i]
}

void bubblesort(int *p)
{
	int round,t,i;
	for(round=1;round<=4;round++)
	{
		for(i=0;i<=4-round;i++)
		{
		  if(*(p+i) >*(p+i+1))
		  {
			 t=*(p+i); //a[i] is *(p+i) because we take taking address we cant allow a[i] here
             *(p+i)=*(p+i+1);
             *(p+i+1)=t;
		  }
		}
	}
}
void main()
{
  int a[5];
  puts("taking five inputs:");
  input(a);//passing array through pointer
  printf("\nshowing input:");
  display(a);//display input through pointer
  printf("\nAfter apply bubble sort:");
  bubblesort(a);
  display(a);
  getch();
}
------------------------------------------------------------------
//02-03-2021
//write a program to use pointer function to test yourself
#include <stdio.h>
#include <conio.h>
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void main()
{
    int a,b,ch;
    printf("Enter the two numbers :");
    scanf(" %d %d",&a,&b);
    printf("\nChoose your option");
    puts(" #1 swapping");
    scanf(" %d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nbefore swapping number of a: %d and b: %d",a,b);
        swap(&a,&b);
        printf("\nThe swapped number of a: %d and b: %d",a,b);
        break;
    default:
        printf("404");
        break;
    }
}
------------------------------------------------------
//11-03-2021
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[10]="Computer";
    printf(s);
    printf("\n%d\n",strlen(s));
    printf("%d\n",strlen(&s[0]));
    printf("%d",strlen("Computer"));

}
------------------------------------------------------
#include <stdio.h>
#include <conio.h>
char* reverse(char *p) //char* means returning the address
{
 int l,i;
 char t;
 for(l=0;*(p+l)!='\0';l++);
 for(i=0;i<l/2;i++)
 {
    t=*(p+i); //*(p+i) means s[i] but we are taking address to function
    *(p+i)=*(p+l-1-i);
    *(p+l-1-i)=t;
 }
 return(p); //p=&s[0]
}
int length(char *p)
{
 int i;
 for(i=0;*(p+i)!='\0';i++); //because for loop has none statement
 return(i);
}
void main()
{
 char m[50];
 //clrscr();
 printf("Enter the character :");
 //gets(m);
 //scanf(" %s",&m[0]);//this line only work in wsl (windows sub system Linux)
 scanf(" %s",&m);
 printf("%d\n",length(m));
 printf("%s\n",reverse(m));
// printf("%s",reverse("Computer")); this line only work in turbo , but it does not work in gcc complier
 getch();
}
------------------------------------------------------------------
//13-03-2021
//Experiment of string character input test
#include <stdio.h>
#include <string.h>//to use strlen data type
#include <conio.h>
void main()
{
    char s1[10],s2[10],s3[10],c,i,kl;
    printf("A single character:");
    scanf(" %c",&c);
    printf("Output single character:%c\n",c);

    printf("\nFirst string input method:");
    scanf(" %s",s1);//without using & address
    printf("Method output 1:%s\n",s1);//No affect and error

    printf("\nSecond string input method:");
    scanf(" %s",&s2);// with using address
    printf("Method output 2:%s\n",s2);//No affect and error

    printf("\nThird string input method:");
    scanf(" %s",&s3[0]);//address to first character string address
    printf("Method output 3:%s\n",s3);//No affect and error

    kl=strlen(s1);
    printf("length of string (s1): %d",kl);
    for(i=0;i<=kl;i++)//we using i<=kl for detect input other character
        printf("\nA word of s1[%d]:%c",i+1,s1[i]);
    getch();

}
/*
A single character:B
Output single character:B

First string input method:Sohan
Method output 1:Sohan

Second string input method:MOHAN
Method output 2:MOHAN

Third string input method:GoHaN
Method output 3:GoHaN
length of string (s1): 5
A word of s1[1]:S
A word of s1[2]:o
A word of s1[3]:h
A word of s1[4]:a
A word of s1[5]:n
A word of s1[6]:  //where this one is '\0' aka null character
*/
-------------------------------------------------------
//14-03-2021
//Today date program
#include <stdio.h>
#include <conio.h>
void main()
{
    char day[20];
    int date,month,year;
    printf("Input the today day and date (dd-mm--yyyy)\n");
    scanf(" %s %d-%d-%d",day,&date,&month,&year);
    printf("Day:  %s\n",day);
    printf("Date: %d\n",date);
    printf("Month:%d\n",month);
    printf("Year: %d\n",year);

}
-------------------------------------------------------------
//14-03-2021
//Today date program
#include <stdio.h>
#include <conio.h>
struct date
{
    int d,m,y;
};

void main()
{
    struct date today,d1;
    today.d=14;
    today.m=3;
    today.y=2021;

    d1=today; // ||d1.d=today.d;
    printf("Date you have valued: %d/%d/%d\n",d1.d,d1.m,d1.y);
    printf("Enter today's date");
    scanf(" %d/%d/%d",&d1.d,&d1.m,&d1.y); // to update d1 value data
    printf("Date you have input: %d/%d/%d",d1.d,d1.m,d1.y);

}
-----------------------------------------------------------------------
//example of structure in function
#include <stdio.h>
#include <conio.h>
struct book
{
    int bookid;
    char title[30];
    float price;
};
struct book input()
{
    struct book b;
    printf("Enter the Book id,Title and price\n");
    //scanf(" %d %s %f",&b.bookid,b.title,&b.price);
    scanf("%d",&b.bookid);// Note: after taking input from scanf,
    fflush(stdin);//to solve this problem we are taking fflush(stdin) to empty buffer from input
    gets(b.title); // gets could find empty buffer on program
    scanf(" %f",&b.price);// so, it wont try to take input from this scanf
    return(b);

}
void display(struct book b)
{
  //printf("\n %d %s %f",b.bookid,b.title,b.price);
  printf("Book ID:%d Title:%s and Price:%.2f",b.bookid,b.title,b.price);
}
void main()
{
    struct book b1;
    b1=input();//take nothing and returb
    display(b1);

}
-----------------------------------------------------------------------------------
//Union: Union members are accessed in the same manner as
//we access structure member and Union is able to print one data in one time
#include <stdio.h>
union item
{
    int x; float y; char z;
};

void main()
{
    union item i1;
    i1.x=5;
    printf("\nx=%d",i1.x);
    i1.y=3.4;
   // printf("\n%f",i1.y);
    printf("\nx=%d",i1.x);
    i1.z='d';
    printf("\nz=%c",i1.z);

}
---------------------------------------------------------------------------------
//same example apply on structure
#include <stdio.h>
struct item1
{
    int x; float y; char z;
};
union item2
{
    int x; float y; char z;
};


void main()
{
    int ch,re;
    puts("#1-structure");
    puts("#2-union");
    do{
    printf("choose the option:");
    scanf(" %d",&ch);
    if(ch==1)
    {
    struct item1 i1;
    printf("Structure example");
    i1.x=5;
    printf("\nx=%d",i1.x);
    i1.y=3.4;
    printf("\ny=%.2f",i1.y);
    printf("\nx=%d",i1.x);
    i1.z='d';
    printf("\nz=%c",i1.z);
    }
    else if(ch==2)
    {
    union item2 i1;
    printf("Union example");
    i1.x=5;
    printf("\nx=%d",i1.x);
    i1.y=3.4;
    printf("\ny=%.2f",i1.y);
    printf("\nx=%d",i1.x);
    i1.z='d';
    printf("\nz=%c",i1.z);
    }
    else
        printf("invalid input");
    printf("\nPress 1 to repeat the process: ");
    scanf(" %d",&re);
    }while(re==1);

}
/*
#1-structure
#2-union
choose the option:1
Structure example
x=5
y=3.40
x=5
z=d
Press 1 to repeat the process: 1
choose the option:2
Union example
x=5
y=3.40
x=1079613850
z=d
Press 1 to repeat the process: 2

*/
---------------------------------------------------------------------------------
//23-03-2021
#include <stdio.h>
#include <conio.h>
/*
Enumerator: it gives an opportunity to invent own data type and
define what values the variable of this data type can take.
* Internally, compiler treats the enumerators as integers
* Each value on this list of permissible values corresponds
to an integer, starting with 0.

*/

enum boolean
{
    false, true//0,1
};

enum boolean isEven(int x)
{
    if(x%2==0)
        return(true);// return 1;
    else
        return(false);// return 0;
}

void main()
{
    int n;
    enum boolean result;
    printf("Enter a number");
    scanf(" %d",&n);
    result=isEven(n);
    if(result==true)
        printf("Even");
    else
        printf("odd");
}
-------------------------------------------------------
//24-03-2021
#include <stdio.h>
#include <string.h>
#include <conio.h>
/*
* typedef is a keyword, where we can use typedef to give new name to a type
  typedef int LENGTH;     // you can also write in small letter,
but CAPTITAL is better for define typedef keyword
* Now you can use LENGTH as a data type which is just same as int
LENGTH x,y;
* By convention, uppercase letters are used for these definitions to remind
the user that the type name is really a symbolic abbreviation
but you cab use lowercase

typedef int length;
*/
typedef struct
{
    int rollno;
    char name[20];
    int age;
}STUDENT;
void main()
{
    STUDENT s1;
    s1.rollno=34;
    strcpy(s1.name,"RoyalDemon");
    s1.age=20;
    printf("Roll_no: %d,Name: %s,age: %d",s1.rollno,s1.name,s1.age);

}
--------------------------------------------------------------------
// use #define preprocessor to make program
//example 1
#include <stdio.h>
#define pi 3.14
#include <conio.h>
/*
* The #define directive defines an identifier and character sequences (a set of character)
that will be substituted for the identifier each time it is encountered in the source files
* The identifier is referred to as a macro name and the replacement process as macro replacement
#define macro-name char-sequence
*/
void main()
{
    int r; float a;
    printf("Enter value of radius");
    scanf(" %d",&r);
    a=pi*r*r;
    printf("Area of circle : %.2f",a);

}
-------------------------------------------------------------------------
//example 2
//#include <stdio.h>//  you can skip this preprocessor if you want but this thing is still require if you are gonna use printf or scanf function
#define SUM(a,b) a+b

void main()
{
    printf("sum of 5 and 6: %d",SUM(5,6));
    //sum of 5 and 6: 11

}

-------------------------------------------------------------------------
//example 3
#include <stdio.h>
#define SUM(a,b) a+b
#define PRODUCT(a,b) a*b
#define PRODUCT2(a,b) (a)*(b)

void main()
{
    printf("sum of 5 and 6: %d",SUM(5,6));
    //sum of 5 and 6: 11
    printf("\nProduct of 5 and 6:%d",PRODUCT(5,6));
    //Product of 5 and 6:30
    printf("\nProduct :%d",PRODUCT(3+2,4-6));//3+2*4-6
    //Product :5
    //because multiply problem solve first then addition and subtraction
    printf("\nProduct2 :%d",PRODUCT2(3+2,4-6));//(3+2)*(4-6)
    //Product2 :-10

}

/*
#undef
* it is used to undefined Macros aka disable #define preprocessor after #undef
for example
#define CLOSE 0
.....
.....
.....
.....
#undef CLOSE
.....
.....
*/-----------------------------------------------------------------------
//29-03-2021
#include <stdio.h>
/* programming trivia
* FILE is a structure (non primitive data type)
typedef struct
{
  short level;
  unsigned flags;
  char fd;
  unsigned char hold;
  short bsize;
  unsigned char *buffer;
  unsigned char *curp;
  unsigned istemp;
  short token;
}FILE;
Note: this FILE datatype is already declared on stdio.h preprocessor
so, you don't need to make struct separately
*/
int main()
{
    int i;
FILE *fp; //file pointer
char s[]="Hello Students of india";
fp=fopen("f1.txt","w");
if(fp==NULL)
{
  printf("File cannot open");
   exit(1);
}
else
    printf("File created and written sucessfully");
for(i=0;i<strlen(s);i++)
   fputc(s[i],fp);
fclose(fp);
//after build and run it will create a file on you drive
}
-----------------------------------------------------------------
#include <stdio.h>
//taking input by user to write something on file
int main()
{
    int i;
    FILE *fp; //file pointer
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL)
{
    printf("File cannot open");
    exit(1);
}
    printf("Enter the string Message :");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
       printf("message is on buffer, please open the file to check the info\n");
    getch();//open the file , you can see there is not info here,
           //because file on buffer, it has not written anything yet
    fclose(fp);
    getch();
    printf("File has been written successfully");
}
-----------------------------------------------------------------------------------
//31-03-2021
#include <stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("myfile.dat","r");
  if(fp==NULL)//if mode is r or r+
     printf("File not FOUND");

}
/*
fopen() //syntax
fp=fopen("filename","mode);//where fp is file pointer

Mode-meaning   - Description
r   - Read     -Only reading possible. Not create file if not exist
w   - Write    -Only writing possible. Create file if not exist otherwise
                erase the old content of file and open as a blank file
a   - Append   -Only writing possible. Create file if not exist, otherwise
                open file and write from the end of file (do not erase the old content)
r+  - Reading+ - R & W possible. Create file if not exist. Overwriting
      Writing    exiting data. Used for modifying content
w+  - Reading+ - R & W possible. Create file if not exist. Erase old content.
      Writing
a+  - Reading+ - R & W possible. Create file if not exist. Append content at
     Appending   the end of file
*/
//------------------------------------------------------
//31-03-2021
#include <stdio.h>
/*
Reading from a file means
* Extracting data from a file to our program variables
* This will not remove data from the file
*/
int main()
{
   char ch;
   FILE *fp;
   fp=fopen("f1.txt","r");
   if(fp==NULL)
   { printf("404 FILE Not Found");
     exit(1);
   }
   ch=fgetc(fp);//this function return first character from file
   while(!feof(fp))//end of file function
   {
     printf("%c",ch);
     ch=fgetc(fp);
   }
   fclose(fp);
}
------------------------------------------------------------------------------
//04-04-2021
#include <stdio.h>
/*
* fgets() is a function to read string from a file
* fgets(str,n,fp);
* fgets returns a NULL value when it reads EOF
*/
int main()
{
   char str[10];
   FILE *fp;
   fp=fopen("f1.txt","r");
   if(fp==NULL)
   { printf("404 FILE Not Found");
     exit(1);
   }
   while(fgets(str,9,fp)!=NULL)//string "char str[10]", no. of characters,file pointer
   { printf("%s",str);}

   fclose(fp);
}

------------------------------------------------------------------------------
//04-04-2021
#include <stdio.h>
//taking input by user to write something on file
int main()
{
    int i;
    FILE *fp; //file pointer
    char s[100],ch;
    fp=fopen("f1.txt","w");
    printf("Enter the string Message :");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
       printf("message is on buffer, please open the file to check the info\n");
    getch();
    printf("take another character\n");
    getc(ch);
    fclose(fp);
    getch();
    printf("File has been written successfully");
}
------------------------------------------------------------------------------
//29-04-2021
//because of practical  exam
#include <stdio.h>
/*
fputs()
* fputs() is a function declared in stdio.h header file
* fputs(str,fp); //string , file pointer
*/
int main()
{
  char str[20];
  FILE *fp;
  fp=fopen("f1.txt","a");
  printf("Enter your name: ");
  gets(str);
  fputs(str,fp);
  fclose(fp);
  printf("File has been written successfully");

}
---------------------------------------------------------------
//Experiment to write ,read and ascend
#include <stdio.h>

void fileappend()
{
    int i;
    char s[100];
    FILE *fp;
    fp=fopen("f1.txt","a");
    printf("Enter the string Message :");
    //scanf(" %s",&s);
    gets(s); // it does not work if buffer is not empty
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
       printf("message is on buffer(RAM), please open the file to check the info\n");
    //getch();
    fclose(fp);
    getch();
    printf("File has been written successfully");
}
void filewrite()
{
   char str[20];
   FILE *fp;
   fp=fopen("f1.txt","w");
   printf("Enter your name: ");
   //scanf(" %s",&str);
   gets(str);
   fputs(str,fp);
   fclose(fp);
   printf("File has been written successfully");

}
void fileread()
{
   char ch;
   FILE *fp;
   fp=fopen("f1.txt","r");
   if(fp==NULL)
   { printf("404 FILE Not Found");
     exit(1);
   }
   ch=fgetc(fp);
   while(!feof(fp))
   {
     printf("%c",ch);
     ch=fgetc(fp);
   }
   fclose(fp);
}

int main()
{
   int ch,opt;
   do{
   puts("#1 Write a file");
   puts("#2 Read a file");
   puts("#3 Append a file");
   printf("Choose the option");
   scanf(" %d",&ch);
   fflush(stdin);// to clean buffer from memory, use this when other scanf or gets doesn't take input ,skipped the line
   switch(ch)
   {
   case 1:
    filewrite();
    break;
   case 2:
    fileread();
    break;
   case 3:
    fileappend();
    break;
   default:
       printf("Invalid input");
    break;
   }

    printf("\nDo you want to continue this process,\nPress 1:");
    scanf(" %d",&opt);
    if(opt==1)
    {
        system("cls");
    }
    else
        printf("Process has been terminated");
    }while(opt==1);
}
-------------------------------------------------------------
//29-04-2021
#include <stdio.h>
/*
fwrite()
* fwrite() function is used to write content to the file in binary mode.
* Syntax:
  int fwrite(void *Buffer,int Size,int Count,FILE *ptr);
*/
struct book
{
  int bookid;
  char title[20];
  float price;
};

void main()
{
   struct book b1;
   FILE *fp;
   fp=fopen("myfile.dat","ab");//ab = ascend binary mode
   printf("Enter bookid,Title and price:\n");
   scanf(" %d",&b1.bookid);
   fflush(stdin); //to clean buffer from memory
   gets(b1.title);
   scanf(" %f",&b1.price);//it will get skipped if buffer was empty
   fwrite(&b1,sizeof(b1),1,fp);
   fclose(fp);
   printf("File has been written successfully");

}
--------------------------------------------------------
#include <stdio.h>
/*
fread()
* fread() function is used to read content from file in binary mode.
* int fread(void *Buffer,int Size,int Count,FILE *ptr);
*/
struct book
{
  int bookid;
  char title[20];
  float price;
};

void main()
{
   struct book b1;
   int a;
   FILE *fp;

   fp=fopen("myfile.dat","rb");//read binary mode
   if(fp==NULL)
   { printf("File 404 not found");
      exit(1); }
    printf("BookId Title Price\n");

   while(fread(&b1,sizeof(b1),1,fp)>0) //skip them
   {   printf("%d. %s %.2f\n",b1.bookid,b1.title,b1.price); } //skip them

   /*
   printf("reason to use while .. >0\n");
   a=fread(&b1,sizeof(b1),1,fp);
   printf("a=%d\n",a);

   a=fread(&b1,sizeof(b1),1,fp);
   printf("a=%d\n",a);

   a=fread(&b1,sizeof(b1),1,fp);
   printf("a=%d",a);
   */

   fclose(fp);

}
---------------------------------------------------
//01-05-2021 added some option
//Experiment to use fwrite and fread
#include <stdio.h>
struct book
{
  int bookid;
  char title[20];
  float price;
};

void fred(struct book b1)
{
   FILE *fp;
   fp=fopen("myfile.dat","rb");//read binary mode
   if(fp==NULL)
   { printf("File 404 not found");
      exit(1); }
    printf("BookId Title Price\n");

   while(fread(&b1,sizeof(b1),1,fp)>0)
   {   printf("%d. %s $%.2f/-\n",b1.bookid,b1.title,b1.price); }

   fclose(fp);
}

void fapd(struct book b1)
{
   FILE *fp;
   fp=fopen("myfile.dat","ab");//ab = ascend binary mode
   printf("Enter bookid,Title and price:\n");
   printf("Bookid:");
   scanf(" %d",&b1.bookid);
   fflush(stdin); //to clean buffer from memory
   printf("Book Title:");
   gets(b1.title);
   printf("Book Price:");
   scanf(" %f",&b1.price);//it will get skipped if buffer was full
   fwrite(&b1,sizeof(b1),1,fp);
   fclose(fp);
   printf("File has been written successfully");

}

void fwrt(struct book b1)
{
   FILE *fp;
   fp=fopen("myfile.dat","wb");//wb = write binary mode
   printf("Enter bookid,Title and price:\n");
   scanf(" %d",&b1.bookid);
   fflush(stdin); //to clean buffer from memory
   gets(b1.title);
   scanf(" %f",&b1.price);//it will get skipped if buffer was full
   fwrite(&b1,sizeof(b1),1,fp);
   fclose(fp);
   printf("File has been written successfully");

}
void main()
{
   struct book b1;
   int ch,opt;
   do{
   puts("#1 fWrite a file");
   printf("Note: Old information will get erased\n");
   puts("#2 fRead a file");
   puts("#3 fAppend a file");
   printf("Choose the option: ");
   scanf(" %d",&ch);
   fflush(stdin);
   switch(ch)
   {
   case 1:
    fwrt(b1);
    break;
   case 2:
    fred(b1);
    break;
   case 3:
    fapd(b1);
    break;
   default:
       printf("Invalid input");
    break;
   }

    printf("\nDo you want to continue this process,\nPress 1:");
    scanf(" %d",&opt);
    if(opt==1)
    {
        system("cls");
    }
    else
        printf("Process has been terminated");
    }while(opt==1);
}

---------------------------------------------------
//using fprintf to write info on file and read it
#include <stdio.h>
/*
fprintf()
* fprintf() function is used to write formatted output to the specified stream
  Syntax:
* int fprintf(FILE *stream,const char *format [argument,...]);
* fprintf(fp,"nSum of %d and %d is %d",a,b,c);
*/
int main()
{
   FILE *fp;
   char str[10];
   int a,b,op,opt;
   do{
   printf("Do you want to 1. write or 2.Read the file : ");
   scanf(" %d",&op);
   fflush(stdin);
   switch(op)
   {
   case 1:
   printf("Write the info in the file\n");
   fp=fopen("f1.txt","w");
   printf("Enter two numbers");
   scanf(" %d %d",&a,&b);
   fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
   fflush(stdin);
   fclose(fp);
   break;
   case 2:
   fp=fopen("f1.txt","r");
   printf("Read the result from file\n");
   if(fp==NULL)
   { printf("404 FILE Not Found");
     exit(1);
   }
   while(fgets(str,9,fp)!=NULL)
   {
       printf("%s",str);
   }
   fclose(fp);
   break;
   }
    printf("\nDo you want to continue this process,\nPress 1:");
    scanf(" %d",&opt);
    if(opt==1)
    {
        system("cls");
    }
    else
        printf("Process has been terminated");
    }while(opt==1);
}
--------------------------------------------------------------------
//Experiment using fprintf for write and append
#include <stdio.h>
int main()
{
   FILE *fp;
   char ch;
   int a,b,op;
   printf("Do you want to 1. write ,2. append or 3.Read the file : ");
   scanf(" %d",&op);
   fflush(stdin);//to clean buffer from memory to get the result
   switch(op)
   {
   case 1:
    fp=fopen("f1.txt","w");
   printf("Enter two numbers");
   scanf(" %d %d",&a,&b);
   fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
   fclose(fp);
   break;
   case 2:
       fp=fopen("f1.txt","a");
   printf("Enter two numbers");
   scanf(" %d %d",&a,&b);
   fprintf(fp,"\nSum of %d and %d is %d",a,b,a+b);
   fclose(fp);

   break;

   case 3:
      fp=fopen("f1.txt","r");
   printf("Read the result from file\n");
   if(fp==NULL)
   { printf("404 FILE Not Found");
     exit(1);
   }
   ch=fgetc(fp);
   while(!feof(fp))
   {
     printf("%c",ch);
     ch=fgetc(fp);
   }
   fclose(fp);
   break;


   default:
     printf("Invalid Input");
    break;
   }
}
-----------------------------------------------------------
//02-05-2021
//using fscanf to read the in default order
#include <stdio.h>
int main()
{

/* fscanf()
*fscanf() function is used to read formatted content from file
SYNTAX
* int fscanf(FILE * stream,const char *format,..);
* Read data from the stream and store them according to the
  parameter format into the locations pointed by the additonal arguements.
*/
FILE *fp;
int a,b,c;
fp=fopen("f1.txt","r");
//fscanf(fp,"%d%d%d",&a,&b,&c);
/* Inside the file,if values are
20
30
50
*/
fscanf(fp,"%d,%d,%d",&a,&b,&c);
/* Inside the file,if values are
20,30,50 */
printf("a=%d b=%d c=%d",a,b,c);
fclose(fp);
}
----------------------------------------------------------------------
//03-05-2021
//Storage class (categories)
/* Characteristic  of a variable
int x=5;
*Three properties of variables
-Name of variable
-Size of memory block
-Type of content

Other properties of variable
* Default Value
* Storage //
* Scope //{ scope }
* Life //bulid to destory

Type of Storage classes
* Automatic //it is by default by program
* Register
* Static
* External

CHART
Storage  | Keyword | Default | Storage | Scope                 | Life
class    |         | Value   |         |                       |
Automatic| auto    | Garbage | RAM     |Limited to the block   |Till the execution of the block
         |         |         |         |in which it is declared|in which it is declared
Register | register| Garbage | register|Same                   |Same
Static   | static  | 0 (zero | RAM     |Same                   |Till the end of program
External | extern  | 0 (zero | RAM     |Global                 |Same
*/
------------------------++++++++++++++++---------------------
//Storage class Example codes
// #1 automatic storage classes example
#include <stdio.h>
int main()
{
    int x=2;
    printf("x=%d\n",x);
    {
        int x=5;
        printf("x=%d\n",x);
    }
    printf("x=%d",x);

}
/*Register storage classes can give you good performance in execution
because it sends value to memory(RAM) to register (CPU) time to time
whenever "register int x=4;" calls
but there is no guarantee of outcome result*/
--------------+++++++++++----------------------
//Static Storage class Example codes
//#include <stdio.h> you could do that program will run without "#include <stdio.h>"
void f1();//function prototype
//int main()
main()
{
    f1();
    f1();
}
void f1() //function declaration
{
    //int i=0;//just for not to get garbage random value
    static int i;//because default value is 0 aka zero
    i++;//i=i+1 incremented
    printf("i=%d\n",i);
}
/*Output without using static
  i=1
  i=1
  Output with using static
  i=1
  i=2
  because value did not destroyed or erase after function ended at one scope
  it applied in whole program until program fully ended
*/

------------+++++++++++------------
//03-05-2021
//Storage class Example codes
//External Storage classes
//#include <stdio.h>
//int x;
//Global variable, which apply on whole program if new x value is not present on another scope {...}
//it is default of External storage classes when value on Global
main()
{
 extern int x;/*it is not work like main variable,
 //the main purpose of "extern" to inform the complier that
 //there is variable exist outside of main() function
 if variable exist bellow the scope*/
 printf("x=%d\n",x);
 f1();
 printf("x=%d\n",x);
}
int x;// it wont work unless we use "extern int x;" in main()
void f1()
{
 x++;
 printf("x=%d\n",x);
}
--------------------------------------------------------------
//testgraph.cpp
#include <graphics.h>
int main()
{
   int gd=0,gm;
   initgraph(&gd,&gm,"");
   setcolor(14);
   circle(200,200,50);
   rectangle(200,100,400,400);
   ellipse(250,240,0,360,40,100);
   getch();
   closegraph();
   return 0;


}
-----------------------------------------------------------
//07-05-2021
//beep sound
#include <stdio.h>
#include <windows.h>
#include <dos.h>
int cube(int);
void beep()
{
    printf("\a");

}
void main()
{
    int n;
    printf("The cube of 10 is %d\n",cube(10));
    printf("Enter the integer: ");
    scanf(" %d",&n);
    if (n<1)
    {
        Beep(750, 300);//printf("\a"); is also use for beep sound but it does not work in gcc-compiler
        printf("Invalid Input");
    }
    else
      printf("The cube of %d is %d",n,cube(n));
}
int cube(int i)
{
    int retval;
    retval= i*i*i;
    return retval;
}







