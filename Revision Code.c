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














