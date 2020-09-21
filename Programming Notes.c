#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c, sucess;
    char ch='y';
    printf("Write a program to check the input value is integer or not");
    printf(" Value of a is : ");
    sucess= scanf(" %d",&a);
    if(sucess==0)
    {
        printf("Input is not integers");
    }
    else
    {
    do{
         printf("\n Value of b is:  ");
         scanf(" %d",&b);
         c=a+b;
         printf("\n Addition value of a and b: %d \n do you want to continue(Y)",c);
         scanf(" %c",&ch);
       }while(ch=='y');
     }
}


/*
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Testing of my program\n");
    int a=10,b,c;
    float d;
    printf("the value of a %d\n",a);
    printf("Input the value of b\n");
    scanf("%d",&b);
    c=a+b;
    printf("The addition of a and b : %d\n",c);
    d=(float)c;
    printf("the float of addition c: %f",d);

}
1
*/




#include <stdio.h>
#include <conio.h>
void main()
{
    int a, sucess;
printf("Input value of a:");
sucess = scanf(" %d",&a);
if (sucess ==0)
{
    printf("Input value is not integer");
}
else
{
    printf("the input value is integer \nand the value is : %d",a);

}
}





#include <stdio.h>
#include <conio.h>
void main()
{
printf("---Write a program which show integer and float\n");

int a,b,c;
float f;
char ch='y';
do
{
    printf("Input value of a: \n");
    scanf(" %d",&a);
    printf("Input value of  b: \n");
    scanf(" %d,&a");
    c= a+b;
    printf("The value of C in integer is: \n",c);
    f=(float)c;
    printf("The value of c in float is : \n",f);

printf("Do you want to continue this process");
scanf(" %c",&ch);

}while(ch=='y');
printf("Program has been terminated");
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to test the output by input user");
    int i; //input would 1 , 2 or 3
    printf("Input the integer: ");
    scanf(" %d", &i);



}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program, where we can input add, subtraction , multiplication and division/reminder\n");
    int a,b,c;
    char symbol;
    printf("Input value of a and b\n");
    scanf(" %d %d",&a,&b);
    printf("Input the symbol of calculation: %d and %d",a ,b);
    scanf(" %c",&symbol);
    if(symbol=='+')
    {
        c=a+b;
        printf(" The addition of a+b : %d",c);
    }
    else if(symbol=='-')
    {
        c=b-a;
        printf(" The subtraction of b-a: %d",c);
    }
    else if(symbol=='*')
    {
        c=a*b;
        printf(" The multiplication of a x b: %d",c);
    }
    else if(symbol=='/')
    {
        c=a/b;
        printf(" The division of a/b: %d",c);
    }
    else if(symbol=='%')
    {
        c=a%b;
        printf(" The division reminder of a%b: %d",c);
    }
    else
    {
        printf("Invalid Input");
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{

    int a,b,c;
    float d;
    char choice,ch;
    do{
    system("cls");
    /*
    clrscr(); //for turbo c on dos emulator
    system("cls"); //for windows system
    system("clear");//for gcc linux compiler
    */
    printf("\tWrite a program to calculate the value by choosing option\n");
    printf("\tInput value of a and b\n");
    scanf(" %d %i",&a,&b);
    puts("\t add - (+)\n");
    puts("\t sub - (-)\n");
    puts("\t mul - (*)\n");
    puts("\t div - (\)\n");
    puts("\t rem - (%)\n");
    printf("choice the calculation");
    scanf(" %c",&choice);
    switch(choice)
    {
        case'+':
        c=a+b;
        printf(" Addition of %d-%d=%d",a,b,c);
        break;

        case'-':
        puts("Note:- its b-a");
        c=b-a;
        printf(" Subtraction of %d-%d=%d",a,b,c);
        break;

        case'*':
        c=a*b;
        printf(" Multiplication of %d*%d=%d",a,b,c);
        break;

        case'/':
        d=a/b;
        printf(" Divide of %d/%d=%f",a,b,d);
        break;

        case'%':
        d=a%b;
        printf(" Reminder of %d(%)%d=%f",a,b,d);
        break;

        default:
        puts("Invalid choice");
        break;

    }
    puts("\nDo you want to continue this calculation(y/n): ");
    scanf(" %c",&ch);
    }while(ch=='y');
    if(ch=='n')
    {
        puts("Sorry, The program has been terminated");
    }

}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write of program to measure the sizeof");
    printf(" Storage size for int: %d\n",sizeof(int));
}



#include <stdio.h>
#include <conio.h>
void main()
{
   puts("taken from tutorial point example\n");
   int a=20,b=10,c;
   printf("The value of a & b(%d & %d)\n",a,b);
   c=a+b;
   printf("Line 1 - Value of c=a+b is %d\n", c ); //Line 1 - Value of c is 30

   c=a-b;
   printf("Line 2 - Value of c=a-b is %d\n", c ); //Line 2 - Value of c is 10

   c=a*b;
   printf("Line 3 - Value of c=a*b is %d\n", c ); //Line 3 - Value of c is 200

   c=a/b;
   printf("Line 4 - Value of c=a/b is %d\n", c ); //Line 4 - Value of c is 2

   c=a%b;
   printf("Line 5 - Value of c=a(rem)b is %d\n", c ); //Line 5 - Value of c is 0

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=a++;  //a=a+1
   printf("Line 6 - Value of c=a++ is %d\n", c ); //Line 6 - Value of c is 20

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=a--;
   printf("Line 7 - Value of c=a-- is %d\n", c ); //Line 7 - Value of c is 21

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=++a;
   printf("Line 8 - Value of c=++a is %d\n", c ); //Line 8 - Value of c is 21

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=--a;
   printf("Line 9 - Value of c=--a is %d\n", c ); //Line 9 - Value of c is 20

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=a+1;
   printf("Line 10 - Value of c=a+1 is %d\n", c ); //Line 10 - Value of c is 21

   printf("\n\tLine 0 - value of a is %d\n",a);
   c=a-1;
   printf("Line 11 - Value of c=a-1 is %d\n", c ); //Line 11 - Value of c is 19

   printf("\n\tLine 0 - value of a is %d\n",a);

}
/*
The value of a & b(20 & 10)
Line 1 - Value of c=a+b is 30
Line 2 - Value of c=a-b is 10
Line 3 - Value of c=a*b is 200
Line 4 - Value of c=a/b is 2
Line 5 - Value of c=a(rem)b is 0

        Line 0 - value of a is 20
Line 6 - Value of c=a++ is 20

        Line 0 - value of a is 21
Line 7 - Value of c=a-- is 21

        Line 0 - value of a is 20
Line 8 - Value of c=++a is 21

        Line 0 - value of a is 21
Line 9 - Value of c=--a is 20

        Line 0 - value of a is 20
Line 10 - Value of c=a+1 is 21

        Line 0 - value of a is 20
Line 11 - Value of c=a-1 is 19

        Line 0 - value of a is 20
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    printf("Test: ");
    scanf("%d",&i);
    printf("\n\ttest O: %d\n",i);  //test O: 2
    printf("test 1:(++i) %d\n",++i); //test 1: 3

    printf("\n\ttest O: %d\n",i); //test O: 3
    printf("test 2:(i++) %d\n",i++); //test 2: 3

    printf("\n\ttest O: %d\n",i); //test O: 4
    printf("test 3:(i--) %d\n",i--); //test 3: 4

    printf("\n\ttest O: %d\n",i); //test O: 3
    printf("test 4:(--i) %d\n",--i); //test 4: 2

    printf("\n\ttest O: %d\n",i); //test O: 2
    printf("test 5:(i*i) %d\n",i*i); //test 5: 4

    printf("\n\ttest O: %d\n",i); //test O: 2
    printf("test 6:(i/i) %d\n",i/i); //test 6: 1

    printf("\n\ttest O: %d\n",i); //test O: 2

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to find out value of x by putting values\n");
    int a,x,y;
    printf("\ta:");
    scanf(" %d",&a);
    printf("Line 1: x= %d\n",x);
    x=a;
    printf("Line 2: x= %d\n",x);
    printf("y:");
    scanf(" %d",&y);

    x=a+y;
    printf("Line 3: x= %d",x);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to show to char in by input number or symbol\n");
    char i;
    printf("Input number and symbol in char value\n");
    scanf(" %c",&i);
    if(i=='1')
    {
        printf("input char is integer\n");
    }
    else if(i=='&')
    {
        printf("Input char is symbol\n");
    }
    else
    {
        printf("Invalid char Input\n");
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program swap between input variable like a and b\n");
    int a,b,third;
    printf("Enter the value of a and b \n");
    scanf(" %d %d",&a,&b);
    printf("Before swapping variable of a:%d and b:%d\n",a,b);
    third=a;
    a=b;
    b=third;
    printf("After swapping variable of a:%d and b:%d\n",a,b);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write the to draw a picture by using slash // through escape sequence\n");
    puts(" slash 1- /\\ (1slash*2) \n");
    puts(" slash 2- //\\\\(4) \n");
    puts(" slash 3- ///\\\\\\ (6)  \n");
    puts(" slash 4- ////\\\\\\\\ (8)\n");
    puts(" slash 5- /////\\\\\\\\(10)\n");
    puts(" slash 6- //////\\\\\\\\\\\\(12) \n");
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check largest between a and b\n");
    int a,b;
    printf("Input value of a and b\n");
    scanf(" %d %d",&a,&b);
    if(a>b)
    printf("Largest value is....%d\n",a);
    else
    printf("Largest value is.....%d\n",b);
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check input integer are positive or negative or zero\n");
    int m;
    printf("Input integer: \n");
    scanf(" %d",&m);
    if(m>0)
    printf("Input value is positive:%d",m);
    else if(m<0)
    printf("Input value is negative:%d",m);
    else
    printf("Input value is zero:%d");

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf(" Write a program to draw pyramid without using loop process\n");
    puts("        *          \n");
    puts("       **          \n");
    puts("      ***          \n");
    puts("     ****          \n");
    puts("    *****          \n");
    puts("   ******          \n");

    printf("Pyramid 2             \n");
    puts("        *          \n");
    puts("       ***         \n");
    puts("      *****        \n");
    puts("     *******       \n");
    puts("    *********      \n");
    puts("   ***********     a\n");
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to define if/else into greater or less then zero by addition or subtract between number\n");
    int a,b,c;;
    char symbol;
    printf(" Input value of two number\n");
    scanf(" %d %d",&a,&b);
    puts("\t To choose addition    - (+)\n");
    puts("\t To choose subtraction - (-)\n");
    printf("Choose your add/sub\n");
    scanf(" %c",&symbol);
    switch(symbol)
    {
        case'+':
        printf("value of a:%d and b:%d \n",a,b);
        c=a+b;
        printf("Addition of a and b\n %d + %d = %d\n",a,b,c);
        break;

        case'-':
        printf("value of a:%d and b:%d \n",a,b);
        c=a-b;
        printf("Subtraction of a and b\n %d - %d = %d\n",a,b,c);
        break;

        default:
        printf("Invalid Input\n");
        break;
    }
    if(c>0)
    {
        printf("Result are positive\n");
    }

    else if(c<0)
    {
        printf("Results are negative\n");
    }

    else
    {
        printf("Result are zero\n");
    }



}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check whether input value is greater/less than 5 or not\n");
    int n;
    printf("Input the number");
    scanf(" %d",&n);
    if(5<n)
    printf("Input value is greater than 5: %d\n",n);
    else if(5>n)
    printf("Input value is less than 5: %d\n",n);
    else
    printf("Input value is 5\n");
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check if or else condition \n");
    int n;
    printf("Input the value:\n");
    scanf(" %d",&n);
    if(30<n)
    printf("Input value is greater than 30");
    else if(n>20) /* (20<n) || (n<20)*/
    printf("Input is greater than 20");
    else if(n>10)
    printf("Input is greater than 10");
    else if(n>5)
    printf("Input is greater than 5");
    else
    printf("Input is less than 5");
    //if statement where value start from , after match the condition skipped all statement on below

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check whether input value is odd or even\n");
    int n;
    printf("Input the number: \n");
    scanf(" %d",&n);
    if(n%2==0)
    printf("Input value is even");
    else
    printf("Input value is odd");
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check whether input value is divided by 5 or not\nor divisible by 5  or not \n");
    int n;
    printf("Input the value: \n");
    scanf(" %d",&n);
    if(n%5==0)
    printf("Input value is divisible by 5");
    else if(n%7==0)
    printf("Input value is multiple of 7");
    else
    printf("Input value is not divisible by 5 and 7");

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to compare between two input numbers\n");
    int a,b;
    printf("Input the value\n");
    scanf(" %d %d",&a,&b);
    if(a>b)
    printf("Input a is greater than b");
    else if(b>a)
    printf("Input b is greater than a");
    else
    printf("Input value are equal\n");
}

//from Tutorial point


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Program Difficulty level 10 \n");
    printf("Write a program print three numbers in ascending and descending order\n");
    puts("By use of Local operators %% AND , || OR , ! NOT\n");
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf(" %d %d %d",&a,&b,&c);
    printf("Input values are a:%d ,b:%d and c:%d",a,b,c);
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("\ndescending order:%d %d %d ",a,b,c);
            printf("\nAscending order:%d %d %d ",c,b,a);
        }
        else
        {
            printf("\ndescending order:%d %d %d",a,c,b);
            printf("\nAscending order:%d %d %d ",b,c,a);
        }

    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
             printf("\ndescending order:%d %d %d ",b,a,c);
             printf("\nAscending order:%d %d %d ",c,a,b);
        }
        else
        {
             printf("\ndescending order:%d %d %d ",b,c,a);
             printf("\nAscending order:%d %d %d",a,c,b);
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("\ndescending order:%d %d %d ",c,a,b);
            printf("\nAscending order:%d %d %d ",b,a,c);
        }
        else
        {
            printf("\ndescending order:%d %d %d ",c,b,a);
            printf("\nAscending order:%d %d %d  ",a,b,c);
        }

    }



}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate quadratic equation\n");
    float x,r1,r2,a,b,c;
    printf("Enter the value of a,b,c..");
    scanf("%f%f%f",&a,&b,&c);
    x=b*b-4*a*c;
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if(x>0)
        printf("\nRoots are equal...\n");
    else if(x<0)
        printf("\nRoots are imaginary..\n");
    else
        printf("\nRoots are same");
    printf("R1=%f",r1);
    printf("R2=%f",r2);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program on student grave with average: \n");
    int total,m1,m2,m3,Rollnumber;
    float avg;
    printf("\nInput your Roll Number\n");
    scanf(" %d",&Rollnumber);
    printf("\nInput your marks on three subjects\n");
    scanf(" %d %d %d",&m1,&m2,&m3);
    total=m1+m2+m3;
    avg=total/3.0;
    printf("\nTotal marks: %d",total);
    printf("\nAverage marks: %5.2f",avg);
    if(avg>80)
        printf("\nGrade : A");
    else if(avg>60)
        printf("\nGrade : B");
    else if (avg>40)
        printf("\nGrade : C");
    else
        printf("\nGrade : F \n(it means, go f**k yourself)");


}
 56:43

#include <stdio.h>
#include <conio.h>
void main()
{
   // printf("Write a program to check status male or female eligible to marry or not\n");
    int age;
    char Martialstatus,Gender,ch;
    do{
    system("cls");
    printf("Write a program to check status male or female eligible to marry or not\n");
    printf("Input the MartialStatus , Gender and age: \n(For Eg: M/U,M/F/21)\n");
    printf("Input your MartialStatus in M/U:\n");
    scanf(" %c",&Martialstatus);
    /*printf("Enter your Gender in M/F\n");
    scanf(" %c",&Gender);
    printf("Enter your age\n");
    scanf(" %d",&age);*/
    //scanf(" %c %c %d",&Martialstatus,&Gender,&age);
    if(Martialstatus=='m')
    {
        printf("You are already married,\n so Don't ask for Another Marriage\n");
    }
    else if(Martialstatus=='u')
    {
    printf("Enter your Gender in M/F\n");
    scanf(" %c",&Gender);
    printf("Enter your age\n");
    scanf(" %d",&age);
        if(Gender=='m')
        {
            if(age>=21)
            {
                printf("You are eligible for get marry,\nAnd you can also do vote on Election\n");
            }
            else
            {
                printf("You are not eligible for get marry\nBut,Child Marriage is still illegal\n");

            }
        }
        else if(Gender=='f')
        {
            if(age>=18)
                printf("You are legal for get married");
            else
                printf("You are not legal for get married,\n So protect your virginity ,Call 911 FBI for Helpline");

        }
        else
        {
            printf("ERROR......\n     Invalid Gender Input\n");
        }

    }
    else
        printf("ERROR.....\n____Invalid MartialStatus______  \n");

    printf("\nDo you can try again this process\n Type in y/n\n");
    scanf(" %c",&ch);
}while(ch=='y');
if(ch='n')
    printf("-----:Thank your for using service:-----");
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to based on conditional operators\n");
    int a,b;
    printf("Input value of a and b: \n");
    scanf(" %d %d",&a,&b);
    (a>b)?printf("Largest value is .....%d\n",a):printf("Largest value is .....%d\n",b);
    /*y=(x==1)?2:0;
    Note: this is operator is not recommended to use
    it's make hard to read if or else condition in condition operator */

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to check students grades\n");
    char grade;
    printf("Input your grade in (e.g: A/B/C/F)\n");
    scanf(" %c",&grade);
    switch(grade)
    {
    case'A':
        printf("Excellent");
        break;
    case'B':
    case'C':
        printf("Well Done");
        break;
    case'D':
    printf(" You passed");
    break;
    case'F':
        printf("you failed,try again next time");
        break;

    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to use nested switch\n");
    int a,b;
    printf("Input values of a and b: \n");
    scanf(" %d %d",&a,&b);
    switch(a)
    {
    case(100):
        printf("Case value of a is 100\n");
        switch(b)
        {
        case(200):
            printf("Case value of b is 200\n");
            break;

        }
    }
}




//Loop Process
//Programming Level 15
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print number 1 to 10\n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");

    printf("\n1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");
    printf("\n1\t2\t3\t4\t5\t6\t7\t8\t9\t10");


}


#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("Write a program to check increment and decrement operators\n with pre- &post\n");
    printf("Input i= ");
    scanf(" %d",&i);

    printf("\nInput i= %d in pre-increment(++i) ",++i);
    printf("\nAfter pre-increment: %d",i);

    printf("\nInput i= %d in post-increment(i++||i=i+1) ",i++);
    printf("\nAfter post-increment: %d",i);

    printf("\nInput i= %d in pre-increment(--i) ",--i);
    printf("\nAfter pre-decrement: %d",i);

    printf("\nInput i= %d in pre-increment(i--||i=i-1) ",i--);
    printf("\nAfter pre-decrement: %d",i);

}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program print number 1 to 10 by using while loop \n");
    int a;
    printf("Input the number\n");
    scanf(" %d",&a);
    while(a<=10)
    {
        printf("printed number : %i\n",a);
        a++;
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\nWrite a program to print number 1 to 10 by using do while loop\n");
    int a;
    printf("\nInput i :");
    scanf(" %d",&a);
    do
    {
        printf("\nPrinted i: %d",a);
        a++;

    }while(a<=10);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print 1 to n by using while loop\n");
    int a,n;
    printf("Input i: \n");
    scanf(" %d",&a);
    printf("Input the maximum input: \n");
    scanf(" %d",&n);
    while(a<=n)
    {
        printf("Printed Input: %d\n",a);
        a++;
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program print two value 1 to 10 by while loop in nested way");
    int i,j,n;
    printf("\nInput i: ");
    scanf(" %d",&i);
    printf("\nInput j: ");
    scanf(" %d",&j);
    printf("\nHow long,your want to print the number :");
    scanf(" %d",&n);
    while(i<=n)
    {
        printf("\ni: %d",i);
        i++;
        while(j<=n)
        {
            printf("\n\tj: %d",j);
            j++;
        }
    }



}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print 1 to n by using do while loop");
    int a,n;
    printf("\nInput i: ");
    scanf(" %d",&a);
    printf("\nHow long you want to print the loop: ");
    scanf(" %d",&n);
    do
    {
        printf("\nI: %d",a);
        a++;

    }while(a<=n);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print in reverse order \nby using do while and while loop \n");
    int i;//i=1,n;
    printf("Enter the n: \n");
    scanf(" %d",&i);
    //i=n;
    do
    {
        printf("%d\n",i);
        i--;
    }while(i>=1);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Write a program to print reverse order by using while loop\n");
    scanf(" %d",&a);
    while(a>=1)
    {
        printf("%d\n",a);
        a--;

    }

}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print even number by using while loop\n");
    int a=2,n;
    printf("Enter the n value: \n");
    scanf(" %d",&n);
    while(a<=n)
    {
        printf("Even : %d\n",a);
        a=a+2;

    }

do
    {
        printf("\nIn do-while loop: %d",a);
        a=a+2;
    }while(a<=n);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print odd and even number by choosing option");
    int a,n;
    printf("\nhow long you want to print the number\t");
    scanf(" %d",&n);
    printf("\nDo you want odd or even (1 || 2) ");
    printf("\nchoose even : 2");
    printf("\nchoose odd  : 1\n\t");
    scanf(" %d",&a);
    /*if(a==2)
    {
        while(a<=n)
        {
            printf("\nEven:%d",a);
            a=a+2;
        }
    }
    else if(a==1)
    {
        while(a<=n)
        {
            printf("Odd:%d\n",a);
            a=a+2;
        }
    }
    else
    {
        printf("\nInvalid Input");
    }*/

    if(a==2)
    {
        do
        {
            printf("\nEven:%d",a);
            a=a+2;
        }while(a<=n);
    }
    else if(a==1)
    {
        do
        {
            printf("Odd:%d\n",a);
            a=a+2;
        }while(a<=n);
    }
    else
    {
        printf("\nInvalid Input");
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to ask user do your want print hello world or not");
    char ch;
    do
    {
        printf("\nHello world");

        printf("\nDo you want to print this message again");
        scanf(" %c",&ch);
    }while(ch=='y');
    if(ch=='n' || ch=='N')
    {
        printf("Program has been terminated");
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to ask to reprint hello world by using world\n");
    char ch;
    printf("Do you want to print hello world\n");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        printf("Hello world\n");
        printf("Do you want to reprint again hello world\n");
        scanf(" %c",&ch);
    }
    if(ch=='n' || ch=='N')
    {
        printf("Program has been terminated\n");
    }
    else
    {
        printf("Invalid Input");
    }

    /*do
    {
        printf("Hello world\n");
        printf("Do you want to reprint hello world\n");
        scanf(" %c",&ch);
    }while(ch=='y');*/
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print hello world\n you want to print\n by using while or do-while loop\n");
    int a=1,n,p;
    printf("How long you want to print: ");
    scanf(" %d",&n);
    printf("\nChoose the option");
    puts("\nOption 1 - while loop");
    puts("\nOption 2 - do-while loop");
    scanf(" %d",&p);
    if(p==1)
    {
    printf("By Using While Loop");
    while(a<=n)
    {
        printf("\nHello world");
        a++;
    }
    }
    else if(p==2)
    {
        printf("By Using do-While Loop");
    do
    {
        //printf("\nHello world \nNo of Lines: %d",a);
        printf("\nHello World");
        printf("\nNo of Lines: %d",a);
        a++;
    }while(a<=n);
    }
    else
    {
        printf("\nInvalid Input");
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print loop in reverse order by using while loop\n");
    int a;
    printf("Enter the number\n");
    scanf(" %d",&a);
    while(a>=1)
    {
        printf("Reverse: %d\n",a);
        a--;
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print Hello world in reverse order\n");
    int a;
    printf("Enter a: \n");
    scanf("%d",&a);
    while(a>=1)
    {
        printf("Hello world\n");
        printf("Reverse: %d\n",a);
        a--;
    }

}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print in reverse order by using while loop\n");
    int a,n;
    printf("Largest Number :");
    scanf(" %d",&a);
    printf("\nInput the lowest number: ");
    scanf(" %d",&n);
    while(a>=n)
    {
        printf("Reverse : %d\n",a);
        a--;
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to print number ascending and descending order by choosing option\n");
    int a,n,c;
    puts("Option 1: Ascending order\n");
    puts("Option 2: Descending order\n");
    printf("choose the option\n");
    scanf(" %d",&c);
    if(c==1)
    {
        printf("Input the lowest value: \n");
        scanf(" %d",&a);
        printf("Input the Highest value: \n");
        scanf(" %d",&n);
        while(a<=n)
        {
            printf("Ascending Order: %d\n",a);
            a++;
        }

    }
    else if(c==2)
    {
        printf("Input the highest value: \n");
        scanf(" %d",&a);
        printf("Input the lowest value: \n");
        scanf(" %d",&n);
        do
        {
            printf("Descending value :%d\n",a);
            a--;
        }while(a>=n);


    }
    else
    {
        printf("Invalid Input");
    }


}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print reserve in given number\n");
    int rem,n;
    printf("Enter n: ");
    scanf(" %d",&n);
    while(n>0)
    {
        rem=n%10;
        printf(" %d",rem);
        n=n/10;
    }

}

//from video
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print reserve in given number\n");
    int rem,n;
    printf("Enter n: ");
    scanf(" %d",&n);
    while(n>0)
    {
        rem=n%10;
        /*printf("N: %d\n",n);
        printf("Rem: %d\n",rem);*/
        printf(" %d",rem);
        n=n/10;
    }

}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate some of input number \nand programming situation \n");
    int rem,sum=0,n; //because sum contain garbage value with define value
    printf("Input the number: ");
    scanf(" %d",&n);
    while(n>0)
    {
        printf("Before rem: %d\n",rem);
        rem=n%10;
        printf("Before n: %d\n",n);
        printf("After rem: %d\n",rem);

        sum=sum+rem;
        n=n/10;
        printf("After n: %d\n\n",n);

    }

    printf("\nsum of given number:...%d",sum);

}

/*
Write a program to calculate some of input number
Input the number: 123456
Before rem: XXXX41---- Garbage value
Before n: 123456
After rem: 6
After n: 12345

Before rem: 6
Before n: 12345
After rem: 5
After n: 1234

Before rem: 5
Before n: 1234
After rem: 4
After n: 123

Before rem: 4
Before n: 123
After rem: 3
After n: 12

Before rem: 3
Before n: 12
After rem: 2
After n: 1

Before rem: 2
Before n: 1
After rem: 1
After n: 0


sum of given number:...21

*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate some of input number\n");
    int rem,sum=0,n; //because sum contain garbage value with define value
    printf("Input the number: ");
    scanf(" %d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        printf("%d+",rem);


    }

    printf("\nsum of given number:...=%d",sum);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    int temp,rem,sum=0,n;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp==sum)
        printf("Armstrong Number ");
    else
        printf("Not an Armstrong Number");

}

//For loop
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print basic for loop by using example");
    int a;
    for(a=1;a<=10;a++); //for[initialization];[condition];[increment/decrement])
    {
        printf("%d",a);//perform this;
                       //and this;
                       //and so on;
                       //....
                       //....

    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print 1 to 8 number by using for loop\n");
    int a,n;
    printf("input the number : \n");
    scanf(" %d",&n);
    for(a=n;a<=8;a++)
    {
        printf("%d\n",a);
    }


}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print number ascending and descending order by using for loop\n");
    int a,n,ch;
    printf("Choose the option\n");
    printf("Option -1 Ascending Order\n");
    printf("Option -2 Descending Order\n");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("Ascending Order in For Loop\n");
        printf("Enter lowest n less than 10: ");
        scanf(" %d",&n);
        for(a=n;a<=10;a++)
        {
            printf("%d\n",a);
        }

    }
    else if(ch==2)
    {
        printf("Descending Order in For Loop\n");
        printf("Enter largest n larger than 1: ");
        scanf(" %d",&n);
        for(a=n;a>=1;a--)
        {
            printf("%d\t",a);
        }
    }
    else
    {
        printf("Invalid Input");
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print table by using for loop\n");
    int a,n;
    printf("Enter the n: ");
    scanf(" %d",&n);
    for(a=1;a<=10;a++)
    {
        printf("%d X %d = %d\n",n,a,a*n);
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate sum of given number n\n");
    int a,newn,n,sum=0;
    printf("Enter the n: ");
    scanf(" %d",&n);
    printf("Number has enter.....\n");
    for(a=1;a<=n;a++)
    {
        scanf("%d",&newn);
        sum=sum+newn;

    }
    printf("Sum of given number is...: %d",sum);

}



#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to multiply eash number input by user\n");
    int a,n,newn,mul=1;
    printf("Enter the n: ");
    scanf(" %d",&n);
    printf("User can input : %d\n",n);
    for(a=1;a<=n;a++)
    {
        scanf("%d",&newn);
        mul=mul*newn;
    }
    printf("Multiplication of given number: %d",mul);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to try to print for loop into for loop\n");
    int i,j,n;
    printf("Input of I>1:");
    scanf(" %d",&i);
    printf("\nInput of J>11:");
    scanf(" %d",&j);
    printf("How long you want to print number :\n");
    scanf(" %d",&n);
    for(i=i;i<=n;i++)
    {
        printf("I: %d\n",i);
        for(j=j;j<=n;j++)
       // printf("I: %d\n",i);
        printf("J: %d\n",j);
    }
}

/* Output:
Write a program to try to print for loop into for loop
Input of I>1:5

Input of J>11:5
How long you want to print number :
10
I: 5
J: 5
J: 6
J: 7
J: 8
J: 9
J: 10
I: 6
I: 7
I: 8
I: 9
I: 10

*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to make pyramid by using for loop\n");
    int a,b,rows;
    printf("Enter rows :");
    scanf(" %d",&rows);
    for(a=1;a<=rows;++a)
    {
        for(b=1;b<=a;++b)
        {
            printf("       %d",b);

        }
           printf("\n");
    }


}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to print m to n number by using while and for loop by choosing option\n");
    int a,ch;
    printf("choose the option\n");
    puts("Option 1 -for loop");
    puts("Option 2 -while loop");
    puts("Option 3 -do while loop");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("By using For Loop\n");
        for(a=1;a<=10;a++)
        {
            printf("%d\n",a);
        }
    }
    else if(ch==2)
    {
        printf("By using while loop\n");
        a=1;
        while(a<=20)
        {
            printf("%d\n",a);
            a++;
        }
    }
    else if(ch==3)
    {
        printf("By using do while loop\n");
        a=1;
        do
        {
            printf("%d\n",a);
            a++;
        }while(a<=40);
    }
    else
    {
        printf("Invalid Input");
    }

}

//Screen Pattern by using for loop
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print star* by using for loop to learn pattern program\n");
    int a,j,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(a=1;a<=n;a++)
    {
        printf("%d\t",a);
        for(j=1;j<=n;j++)
        {
            //printf("*");
            printf("%d",j);
        }
        printf("\n");
    }

}

/*
Write a program to print star* by using for loop to learn pattern program
Enter the n:5
a(row)   j(column)->
1       12345
2       12345
3       12345
4       12345
5       12345
*/

//Experiment #1
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to draw star to learn pattern programming by using for loop\n");
    int i,j,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=n;i<=5;i++)
    {
        printf("%d\t",i);
        for(j=n;j<=8;j++)
        {
            //printf("*");
            printf("%d",j);
        }
        printf("\n");
    }
}
/* Output:
Write a program to draw star to learn pattern programming by using for loop
Enter the n:3
3       345678
4       345678
5       345678

*/

//Experiment #2
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to draw star to learn pattern programming by using for loop\n");
    int i,j,m,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Enter the m:");
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        printf("%d\t",i);
        for(j=n;j<=m;j++)
        {
            //printf("*");
            printf("%d",j);
        }
        printf("\n");
    }
}

/*
Write a program to draw star to learn pattern programming by using for loop
Enter the n:4
Enter the m:10
4       45678910
5       45678910
6       45678910
7       45678910
8       45678910
9       45678910
10      45678910
*/

//Experiment #3
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Experiment #3\n");
    int i,j,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
       //printf("\t");
        printf("%d\t",i);
        for(j=1;j<=i;j++)
        {
            //printf("*");
            printf("%d",j);
        }
        printf("\n");
    }
}

/*OUTPUT:
Experiment #3
Enter the n:5
        *
        **
        ***
        ****
        *****
//Note: Because we print * on j for loop, not in i for loop.

Experiment #3
Enter the n:5
1       1
2       12
3       123
4       1234
5       12345
*/

//Experiment #4
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to try to input * by using while and for loop\nBy choosing options\n");
    int i,j,n,ch;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Choose the option\n");
    puts("#1: for loop stars");
    puts("#2: while loop stars");
    scanf(" %d",&ch);
    if(ch==1)
    {
    printf("By Using For loop\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    else if(ch==2)
    {
        printf("By using while loop\n");
        i=1;
        while(i<=n)
        {

            j=1;
            while(j<=i)
            {
               printf("*");
               j++;
            }
            i++;
            printf("\n");

        }
    }
    else
    {
        printf("Invalid Input");
    }
}
/*
write a program to try to input * by using while and for loop
By choosing options
Enter the n:5
Choose the option
#1: for loop stars
#2: while loop stars

By Using For loop
*
**
***
****
*****

By using while loop
*
**
***
****
*****

*/

//Experiment #4-5
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program to try to input Reverse * by using while and for loop\nBy choosing options\n");
    int i,j,n,ch;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Choose the option\n");
    puts("#1: for loop stars");
    puts("#2: while loop stars");
    scanf(" %d",&ch);
    if(ch==1)
    {
    printf("By Using For loop\n");
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    else if(ch==2)
    {
        printf("By using while loop\n");
        i=n;
        while(i>=1)
        {

            j=1;
            while(j<=i)
            {
               printf("*");
               j++;
            }
            i--;
            printf("\n");

        }
    }
    else
    {
        printf("Invalid Input");
    }
}

/*
write a program to try to input Reverse * by using while and for loop
By choosing options
Enter the n:5
Choose the option
#1: for loop stars
#2: while loop stars

By Using For loop
*****
****
***
**
*

By using while loop
*****
****
***
**
*
*/


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print star to test yourself\n");
    int a,b,n;
    printf("Enter the n:\n");
    scanf(" %d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print and space by using for loop\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print and space by using for loop\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*OUTPUT
Write a program to print and space by using for loop
Enter the n:5
*****
 ****
  ***
   **
    *
*/




#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print and space by using for loop\ncheck the program\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
       // printf("i");
        for(k=1;k<i;k++)
        {
            printf("a");
            //printf("k");
        }
        for(j=i;j<=n;j++)
        {

            printf("%d",j);
          // printf("j");
        }
        printf("\n");
    }
}
/*OUTPUT:
Write a program to print and space by using for loop
check the program
Enter the n:5
112345
2a2345
3aa345
4aaa45
5aaaa5


Write a program to print and space by using for loop
check the program
Enter the n:5
ijjjjj
ikjjjj
ikkjjj
ikkkjj
ikkkkj



*/


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print stars(*) #2 by using for loop\n");
    int i,j,k,n,ch;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Choose the option\n");
    puts("#1- Method 1");
    puts("#2- Method 2");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("By use of First Method\n");
        for(i=n;i>=1;i--)
        {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        }


    }
    else if(ch==2)
    {
        printf("By the using Method 2\n");
        for(i=1;i<=n;i++)
        {
            for(k=1;k<=(n-i);k++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }

    }
    else
    {
        printf("Invalid Input");
    }
}
/*
Output #1
Write a program to print stars(*) #2 by using for loop
Enter the n:5
Choose the option
#1- Method 1
#2- Method 2
1
By use of First Method
    *
   **
  ***
 ****
*****

By the using Method 2
    *
   **
  ***
 ****
*****

*/


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print full pyramid by for loop in explain form\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf("%d",&n);
    //for(i=1;i<=n;i++)
    for(i=n;i>=1;i--)
    {
        //printf("%d\t",i);
        printf("\t");
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
            //printf("a");

        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            //printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            //printf("%d",j);
            printf("*");
        }
        printf("\n");
    }
}
/* Experiment #1
Write a program to print full pyramid by for loop in explain form
Enter the n:5 In normal
    *
   ***
  *****
 *******
*********

Experiment #2
Write a program to print full pyramid by for loop in explain form
Enter the n:5 by adding \t on i print
            *
           ***
          *****
         *******
        *********

Experiment #3
Write a program to print full pyramid by for loop in explain form
Enter the n:5 n:5 print value of i
1           *
2          ***
3         *****
4        *******
5       *********

Experiment #4
Write a program to print full pyramid by for loop in explain form
Enter the n:5 i=%d,j=%d,k=a
1       aaaa1
2       aaa122
3       aa12323
4       a1234234
5       123452345

Experiment #5
Write a program to print full pyramid by for loop in explain form
Enter the n:5
        *********
         *******
          *****
           ***
            *
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print kite star by using for loop in explain form\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        //printf("\t");
        printf("%d\t",i);
        for(k=1;k<=(n-i);k++)
            //printf(" ");
            printf("a");
        for(j=1;j<=i;j++)
            //printf("*");
            printf("%d",j);
        for(j=2;j<=i;j++)
            //printf("*");
            printf("%d",j);
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        //printf("\t");
        printf("%d\t",i);
        for(k=1;k<=(n-i);k++)
           // printf(" ");
           printf("b");
        for(j=1;j<=i;j++)
           // printf("*");
           printf("%d",j);
        for(j=2;j<=i;j++)
           // printf("*");
           printf("%d",j);
        printf("\n");
    }
}

/*
Experiment #1
Write a program to print kite star by using for loop in explain form
Enter the n:5
            *
           ***
          *****
         *******
        *********
         *******
          *****
           ***
            *

Experiment #2
Write a program to print kite star by using for loop in explain form
Enter the n:5
1       aaaa1
2       aaa122
3       aa12323
4       a1234234
5       123452345
4       b1234234
3       bb12323
2       bbb122
1       bbbb1

*/


//BIG STAR** Program
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print stars Pattern in different shapes by using for loop\n and it must have repeat segment\n");
    int i,j,k,n,ch;
    char symbol;

    printf("Enter the n:");
    scanf(" %d",&n);
    puts("#1- Square stars");
    puts("#2- Reverse Right triangle stars");
    puts("#3- Right triangle stars");
    puts("#4- make triangle stars");
    puts("#5- make reverse triangle stars");
    puts("#6-make kite star*");
    do
    {
    printf("Choose the option:\n");
    scanf(" %d",&ch);
       if(ch==1)
       {
           printf("#1- Square stars\n");
           for(i=1;i<=n;i++)
           {
               for(j=1;j<=n;j++)
               {
                   printf("*");
               }
               printf("\n");
           }

       }


       else if(ch==2)
        {
            printf("#2- stars\n");
            for(i=1;i<=n;i++)
            {
                for(j=i;j<=n;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
        else if(ch==3)
        {

            printf("#3- stars\n");
            for(i=n;i>=1;i--)
            {
                for(j=i;j<=n;j++)
                {
                    printf("*");
                }
                printf("\n");
            }

        }
        else if(ch==4)
        {
            printf("#4- make triangle stars\n");
        for(i=1;i<=n;i++)
        {
            printf("\t");
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        }

        }
        else if(ch==5)
        {
            printf("#5- make reverse triangle stars\n");
        for(i=n;i>=1;i--)
        {
            printf("\t");
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        }


        }
        else if(ch==6)
        {
            printf("#6-make kite star\n");
            for(i=1;i<=n;i++)
            {
                printf("\t");
                for(k=1;k<=(n-i);k++)
                    printf(" ");
                for(j=1;j<=i;j++)
                    printf("*");
                for(j=2;j<=i;j++)
                    printf("*");
                printf("\n");
            }
            for(i=n-1;i>=1;i--)
            {
                printf("\t");
                for(k=1;k<=(n-i);k++)
                    printf(" ");
                for(j=1;j<=i;j++)
                    printf("*");
                for(j=2;j<=i;j++)
                    printf("*");
                printf("\n");

            }

        }
        else
        {
            printf("Invalid Input");
        }

        printf("\nDo you want to continue this process(y/n) or clean(c): ");
        scanf(" %c",&symbol);
        if(symbol=='c')
            system("cls");

    }while(symbol=='y'|| symbol=='c');
    if(symbol=='n')
        printf("----Program has been terminated----");
    else
        printf("ERROR -- Invalid Input");

}
/* OUTPUT----
Write a program to print stars Pattern in different shapes by using for loop
 and it must have repeat segment
Enter the n:5
#1- Square stars
#2- Reverse Right triangle stars
#3- Right triangle stars
#4- make triangle stars
#5- make reverse triangle stars
#6-make kite star*
Choose the option:
1
#1- Square stars
*****
*****
*****
*****
*****

Do you want to continue this process(y/n) or clean(c): y
Choose the option:
2
#2- stars
*****
****
***
**
*

Do you want to continue this process(y/n) or clean(c): y
Choose the option:
3
#3- stars
*
**
***
****
*****

Do you want to continue this process(y/n) or clean(c): y
Choose the option:
4
#4- make triangle stars
            *
           ***
          *****
         *******
        *********

Do you want to continue this process(y/n) or clean(c): y
Choose the option:
5
#5- make reverse triangle stars
        *********
         *******
          *****
           ***
            *

Do you want to continue this process(y/n) or clean(c): y
Choose the option:
6
#6-make kite star
            *
           ***
          *****
         *******
        *********
         *******
          *****
           ***
            *

Do you want to continue this process(y/n) or clean(c): n
----Program has been terminated----

*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print series number by using for loop\n");
    int i,j,k,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print series number into series and Same number by using for loop\n");
    int i,j,k,n,ch;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Choose the option");
    puts("Option #1: Series Number");
    puts("Option #2: Reverse Series");
    scanf(" %d",&ch);
    if(ch==1)
    {
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }

    }
    else if(ch==2)
    {
        printf("Option #2: Same Series\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf(" %d",i);

         printf("\n");
        }
    }
    else
        printf("Invalid Input");

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print triangle alphabet character by using for loop:\n");
    int i,j,k,n,ch;
    printf("Enter the n:");
    scanf(" %d",&n);
    printf("Where ASCII code of A is 64\n");
    printf("Choose the option for Experiment:\n");
    puts("Number #1 Triangle ABC..");
    puts("Number #2 RA-Triangle ABC...");
    scanf(" %d",&ch);
    if(ch==1)
    {
        for(i=1;i<=n;i++)
    {
        printf("\t");
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        for(j=2;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }

    }
    else if(ch==2)
    {
        for(i=1;i<=n;i++)
    {
       /* for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }*/
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }

    }
    else
        printf("Invalid Input");

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Test\n");
    int i,j,k,n;
    printf("Enter the Number:");
    scanf(" %d",&n);
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<=i;j++)
        {
            //printf(" %c",65+j);
            printf("*");
           // printf("%d",j);
        }
        for(k=1;k<(n-i);k++)
        {
            //printf("A");
            printf(" ");
        }
        for(k=2;k<=(n-i);k++)
        {
            //printf("B");
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
          //printf(" %c",65+j);
          printf("*");
          //printf("%d",j);
        }
        printf("\n");
    }
}
/*
Test
Enter the Number:10
*******************
*********  ********
********    *******
*******      ******
******        *****
*****          ****
****            ***
***              **
**                *
Note: there was mistake on 02:05:48 mirroring alphabets, Program print the Blank RightAngle triangle...

*/

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print Blank kite by using For Loop\n");
    int i,j,k,n;
    printf("Enter the Number:");
    scanf(" %d",&n);
    for(i=n-1;i>0;i--)  //Reverse triangle i for loop
    {
        printf("["); ////Extra add to block boundary [
        for(j=0;j<=i;j++)
            printf("*");
        for(k=1;k<(n-i);k++)
            printf(" ");
        for(k=2;k<=(n-i);k++)
            printf(" ");
        for(j=i;j>0;j--)
            printf("*");
        printf("]\n"); //Extra add to block boundary ]
    }
    for(i=1;i<n;i++) //triangle i for loop
    {
        printf("["); //Extra add to block boundary [
        for(j=0;j<=i;j++)
            printf("*");
        for(k=1;k<(n-i);k++)
            printf(" ");
        for(k=2;k<=(n-i);k++)
            printf(" ");
        for(j=i;j>0;j--)
            printf("*");
       // printf("\n");
        printf("]\n"); //Extra add to block boundary ]
    }
}

/*
Write a program to print Blank kite by using For Loop
Enter the Number:10
[*******************]
[*********  ********]
[********    *******]
[*******      ******]
[******        *****]
[*****          ****]
[****            ***]
[***              **]
[**                *]
[**                *]
[***              **]
[****            ***]
[*****          ****]
[******        *****]
[*******      ******]
[********    *******]
[*********  ********]
[*******************]
Note: It work accidently by guessing code from Kite pattern

*/

//Advance FOR Loop programs 2'11"44

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate factorial number by using for loop\n");
    int i,fact=1,n;
    float d;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("The factorial of given number is :%d\n",fact);
    d=(float)fact;
    printf("Factorial in float : %5.2f",d);
}


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    printf("Write a program to identify the input value is prime number or not by using for loop\n");
    puts("Prime Number means number by 1 or itself not by other number:");
    int i,n;
    printf("Enter the number:");
    scanf(" %d",&n);
    for(i=2;i<=n/2;i++) //usually mistake i=1;
    {
        if(n%i==0)
        {
            printf("It's not Prime Number");
            //getch();  for using turbo c dos emulator
            exit(0);
        }
    }
    printf("It's prime number");
    //getch();  for using turbo c dos emulator
}



#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to identify input number is prime or not ,by using for loop in different method\n");
    int i,n,flag=0;
    printf("Enter the number:");
    scanf(" %d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Input value %d is prime number",n);
    else
        printf("Input value %d is not prime number",n);
}




#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print prime number within given range by using for loop\n");
    int i,newn,n,flag=1;
    printf("Enter the n:");
    scanf(" %d",&n);
    for(newn=2;newn<=n;newn++)
    {
        flag=1; //Prime Number
        for(i=2;i<=newn/2;i++)
        {
            if(newn%i==0)
            {
                flag=0; //not Prime Number
                break;
            }
        }
        if(flag==1)
        printf(" %d",newn);
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate the fibonacci Series by using for loop\n");
    int i,n,temp,cur=1,pre=0;
    puts("pre=previous,cur= current and temp = temporary to take value temporary ");
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("%d\t%d",pre,cur);
    for(i=3;i<=n;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("\t%d",cur);
    }
}
//Very confusing  fibonacci Series


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print Digits,Alphabet using for loop\n");
    int i;

    for(i=65;i<=90;i++)
        printf("%c ",i);
    printf("\n\n\n\n");
    for(i=97;i<=122;i++)
        printf("%c ",i);
    printf("\n\n\n\n");
    for(i=48;i<=57;i++)
        printf("%c\t",i);
}
/*
ASCII value of A,B...Z
65,66,....90
ASCII value of a,b...z
97,98,...122
ASCII value of 0,1...9
48,49,...57
*/

//Code for test yourself
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Test #2\n");
    int a,n,ch;
    printf("Input the lowest number:");
    scanf(" %d",&a);
    printf("Input the Highest number:");
    scanf(" %d",&n);
    printf("Choose the option\n");
    puts("#1- Use while loop");
    puts("#2- Use do while loop");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("By use of while loop");
        while(a<=n)
        {
            printf("%d\n",a);
            a++;
        }

    }
    else if(ch==2)
    {
        printf("By use of do while loop");
        do
        {
            printf(" %i\n",a);
            a++;

        }while(a<=n);

    }
    else
        printf("Invalid Input");
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Test #3 \nWrite a program to print hello pattern by using for loop\n");
    int i,j,k,n;
    char w;
    printf("Character you want to print: ");
    scanf(" %c",&w);
    printf("Enter the number: ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        //printf("/");
        for(k=1;k<=(n-i);k++)
            printf(" ");
            printf("/");
        for(j=1;j<=i;j++)
           printf("%c",w);
           //printf("*");
        for(j=2;j<=i;j++)
            printf("%c",w);
            //printf("*");

        printf("\\\n");
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate the following series by using for loop\n");
    int i,j,n;
    float sum=0,fact=1;
    printf("Enter the number");
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i+1;j++)
            fact=fact*j;
       sum=sum+i/fact;
    }
    printf("Sum of the series...%f",sum);

}
//I didn't understand calculation on program


#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate Square root of input number\n");
    double value;
    double result;
    printf("Input the value");
    scanf(" %lf",&value);
    //value =25;
    result=sqrt(value);
    printf("Square root of %.2lf + %.4lf",value,result);
    /* To apply mathematical formula into program you have to learn all program function like loops,
       function, pointer and array etc.

    */

}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate average given by user\n");
    int i, n,newn,sum_avg=0;
    float avg;
    printf("Enter the user Input limit ");
    scanf(" %d",&n);
    printf("Enter the number");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&newn);
        sum_avg=sum_avg+newn; //where sum_avg=0
    }
    avg=sum_avg/(float)n; //type casting

    printf("\n Average = %.2f",avg);

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to find out average by given by user\n");
    int i,n,newn,sum_avg=0;
    float avg;
    printf("Enter the user input:");
    scanf(" %d",&n);
    printf("Enter the max %d: ",n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&newn);
        sum_avg=sum_avg+newn;  //where sum_avg=0
    }
    avg=sum_avg/(float)n;  //type casting
    printf("The average of input value: %.2f",avg);
}


//from video tutorial
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print ASCII table by using for loop\n");
    int i;
    for(i=1;i<=255;i++)
    {
        printf(",%1d-%2c\n",i,i);
    }
}


#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print patten rectangle by using for loop \n");
    int i,j;
    for(i=1;i<=80;i++)
        printf("*");

    for(i=2;i<=23;i++)
    {
        printf("*");
        for(j=2;j<=79;j++)
            printf(" ");
        printf("*");
    }
    for(i=1;i<=80;i++)
        printf("*");

}
//Note:- It work fine on turbo c dos emulator ,it depend on your computer screen

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to use GOTO data type\n");
    int i,n,ch,ch2;
    begin2:
    printf("Enter the Number:");
    scanf(" %d",&n);
    printf("Choose the option\n");
    puts("#1-Use if-else");
    puts("#2-Use while loop");
    puts("#3-Do-While loop");
    puts("#4-For loop");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("By using if and else statement\n");
    i=1;
    begin:
    if(i<=n)
       {
        printf("%d\n",i);
        i++;
        goto begin;
       }
       goto begin2;

    }
    else if(ch==2)
    {
        printf("By using while loop\n");
        i=1;
        while(i<=n)
        {
            printf("%d\n",i);
            i++;
        }
        goto begin2;


    }
    else if(ch==3)
    {
        printf("By using do-while loop statement\n3");
        i=1;
        do{
            printf("%d\n",i);
            i++;
          }while(i<=n);
        goto begin2;

    }
    else if(ch==4)
    {
        printf("By using for loop statement\n");
        printf("Even number:\n");
        for(i=1;i<=n;i++)
        {
            if(i%2==0)// I had look into on Internet,because math basic logic issues
            {
             printf("%d\n",i);
            }

        }
        goto begin2;

    }
    else
    {
        printf("Invalid Input");
    }


}


//Continue Statement only used in loop, I skipped the program

//Switch case control structure

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to use switch case structure\n");
    int n;
    printf("Choose the option");
    scanf(" %d",&n);
    switch(n)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
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
    printf("write a program to print number in reverse order into alphabet by using switch case\n");
    int n,rem;
    printf("Enter the number");
    scanf(" %d",&n);
    while(n>0)
    {
        rem=n%10;
        switch(rem)
        {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Invalid Input");
        break;
        }
        n=n/10;
    }

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to do arithmetic operation by \nusing for switch case structure\nAnd if and else to make better Comparison between two methods\n");
    int a,b,c,ch;
    char symbol;
    printf("Input value of a:");
    scanf(" %d",&a);
    printf("Input value of b:");
    scanf(" %d",&b);
    printf("Choose the option\n");
    puts(" '+' for addition");
    puts(" '-' for subtraction");
    puts(" '*' for Multiplication");
    puts(" '/' for Division");
    puts(" '%' for reminder");
    printf("Put your choose : ");
    scanf(" %c",&symbol);
    printf("Do you want use:");
    puts(" #1- Switch case method");
    puts(" #2- if-else method");
    printf("Put your choose(1 or 2): ");
    scanf(" %d",&ch);
    if(ch==1)
    {
        printf("By using switch case control structure method\n");
        switch(symbol)
        {
        case'+':
            c=a+b;
            printf("c=a+b\nAddition of a and b\n %d+%d=%d",a,b,c);
            break;
        case'-':
            printf("The result of Subtraction:%d",b-a);
            break;
        case'*':
            printf("The result of Multiplication: %d",a*b);
            break;
        case'/':
            printf("The result of Division: %d",a/b);
            break;
        case'%':
            printf("The result of Reminder: %d",a%b);
            break;
        default:
            printf("Invalid Symbol Input");
            break;

        }
    }
    if(ch==2)
    {
        printf("By using if-else method\n");
        if(symbol=='+')
            printf("The result of Addition of a and b:%d",a+b);

        else if(symbol=='-')
        {
            printf("The result of Subtraction:%d",b-a);

        }
        else if(symbol=='*')
             printf("The result of Multiplication: %d",a*b);
        else if(symbol=='/')
        {
            printf("The result between a and b:%d",a/b);
        }
        else if(symbol=='%')
            printf("The result of reminder of division between a and b:%d",a%b);

        /*else
        {
            printf("Out of symbol");
        }*/
    }
    else
        printf("Out of the option");

}
-------------------------------------
//Function programming
#include <stdio.h>
#include <conio.h>
//if function is above;
    int add(int a,int b)
    {
        int c;
        c=a+b;
        return c;
    }

    void main()
    {
        printf("Write a program adding two number by using function\n");
        int a,b,result;
        printf("Enter the value of two number:");
        scanf(" %d %d",&a,&b);
        result=add(a,b);
        printf(" Result of two number: %d",result);
    }


------------------------------------------------------
#include <stdio.h>
#include <conio.h>
//if function is on bottom;
//int add(int,int)
//Look like it doesn't much affect on gcc-compiler
    void main()
    {
        printf("Write a program adding two number by using function\n");
        int a,b,result;
        printf("Enter the value of two number:");
        scanf(" %d %d",&a,&b);
        result=add(a,b);
        printf(" Result of two number: %d",result);
    }
    int add(int a,int b)
    {
        int c;
        c=a+b;
        return c;
    }

------------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
int add(int,int);//function prototype
int sub(int,int);
int mul(int,int);
int div(int,int);
int rem(int,int);

void main()
{
    printf("Write a program to use function on all arithmetic operation\n");
    int a,b,c,d,e,f,g,h;
    printf("Input value of a and b:");
    scanf(" %d %d",&a,&b);
    c=add(a,b);
    d=sub(b,a);
    e=mul(a,b);
    f=div(a,b);
    g=div(a,b);
    printf("The addition of function a and b: %d+%d=%d\n",a,b,c);
    printf("the Subtraction of function b and a %d-%d=%d\n",b,a,d);
    printf("the Multiplication of function a and b %d*%d=%d\n",a,b,e);
    printf("the Division of function a and b %d/%d=%d\n",a,b,f);
    printf("the Reminder of function a and b %d%%%d=%d\n",a,b,g);

}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int sub(int b,int a)
{
    int c=b-a;
    return c;
}
int mul(int a, int b)
{
    int c;
    c=a*b;
    return c;
}
int rem(int a,int b)
{
    int d;
    d=a%b;
    return d;

}
int div(int a,int b)
{
    int e=a/b;
    return e;
}

--------------------------------------------------------------
#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Write a program to use function on all arithmetic operation\n");
    int a,b,ans,symbol;
   // char symbol;
    printf("Enter the value of a:");
    scanf(" %d",&a);
    printf("Enter the value of b:");
    scanf(" %d",&b);
    printf("Choose the option\n");
    puts(" #1 for addition");
    puts(" #2 for subtraction");
    puts(" #3 for Multiplication");
    puts(" #4 for Division");
    puts(" #5 for reminder");
    printf("Put your choose : ");
    scanf(" %d",&symbol);
    switch(symbol)
        {
        case 1:
            ans=add(a,b);
            printf("the function Addition of a and b\n %d+%d=%d",a,b,ans);
            break;
        case 2:
            ans=sub(b,a);
            printf("the function Subtraction of b and a\n %d-%d=%d",b,a,ans);
            break;
        case 3:
            ans=mul(a,b);
            printf("the function Multiplication of a and b\n %d*%d=%d",a,b,ans);
            break;
        case 4:
            ans=div(a,b);
            printf("the function Division of a and b\n %d/%d=%d",a,b,ans);
            break;
        case 5:
            ans=rem(a,b);
            printf("the function Reminder of a and b\n %d%%d=%d",a,b,ans);
            break;
        default:
            printf("Invalid Symbol Input");
            break;
        }


}
int add(int a,int b)
{
    int c;
    //c=a+b;
    return c=a+b;
}
int sub(int b,int a)
{
    int c=b-a;
    return c;
}
int mul(int a, int b)
{
    int c;
    c=a*b;
    return c;
}
int rem(int a,int b)
{
    int d;
    d=a%b;
    return d;

}
int div(int a,int b)
{
    int e=a/b;
    return e;
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to calculate area of rectangle and square by using function\n");
    int area,l,b,a,ch;
    printf("Enter the value of length:");
    scanf(" %d",&l);
    printf("Enter the value of breath:");
    scanf(" %d",&b);
    printf("Enter value of side for Square:");
    scanf(" %d",&a);
    printf("Choose the option\n");
    puts("#1 - for area of rectangle");
    puts("#2 - for area of square");
    scanf(" %d",&ch);
    switch(ch)
    {
    case 1:
    area=rectangle(l,b);
    printf("The area of rectangle is : %d meter square",area);
        break;
    case 2:
        area=square(a);
        printf("The area of square is : %d meter square",area);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}

int rectangle(int a,int b)
{
    return a*b;
}
int square(int x)
{
    return x*x;
}
-----------------------------------------------------------
#include <stdio.h>
#include <conio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int b,int a)
{
    return (b-a);
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return (a/b);
}

void main()
{
    printf("Write a program to accept two variable from user to calculate \naddition,subtraction,multiplication and division by using function method\n");
    int x,y,ans;
    printf("Enter the two value for calculation:");
    scanf(" %d %d",&x,&y);
    printf("The addition of (if you use x+y on argument):%d\n",x+y);
    printf("The addition of %d+%d=%d\n",x,y,add(x,y));
    printf("The subtraction of %d-%d=%d\n",y,x,sub(y,x));
    printf("The multiplication of %d*%d=%d\n",x,y,mul(x,y));
    printf("The division of %d/%d=%d\n",y,x,div(y,x));
}
//last update was 28-07-2020
//new update now 06-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("check the input value is integer or not\n");
    int n,ch;
    printf("Enter the number: ");
    ch=scanf(" %d",&n);
    if(ch!=0)
    {
         printf("Input value is Interger");
    }
    else
    {
        printf("Input value is not integer");

    }
    getch();

}

#include <stdio.h>
#include <conio.h>
int add(int a,int b)
{
    int c=a+b;
    printf("Addition of a and b: %d",c);
    return c;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int j,int k)
{
    printf("\nThe value of a and b",j,k);
    return(j*k);
}
int div(int i,int p)
{
    return (i/p);
}
void main()
{
    printf("Write a program to calculate the number by using function\n");
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    add(a,b);
    printf("\nThe subtraction of a and b: %d",sub(a,b));
    printf("\nThe multiplication of axb: %d",mul(a,b));
    printf("\nThe division of a and b: %d",div(a,b));

}



//Write a program use the function method to print factorial, check the prime number and print fibonacci
//07-08-2020
//Updated to fix repeat print not prime message
#include <stdio.h>
#include <conio.h>
int isPrime(int);
void main()
{
    int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    isPrime(n);
    getch();

}

int isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<=n-i;i++)
    {
        if(n%i==0)
        {
            //goto notprime;
            //printf("The input value is not prime number:");
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf(" 1 is not define as prime number");
    }
    else
    {
    if(flag==0)
    {
    printf("\nInput value is prime number");

    }
    else
    {
        printf("The input value is not prime number");

    }
    }



}

//By tutorial video
//printf("Write a program to check prime number,print the factorial and print the fibonacci\n");
//08-08-2020
//To test Codeblock gcc , because it got error on CDgcc by some triggered
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Print hello world many time you want\n");
    int x,n;
    printf("Enter the n:");
    scanf(" %d",&n);
    x=1;
    while(x<=n)
    {
        printf("%d .Hello world\n",x);
        x++;
    }
}
//09-08-2020
#include <stdio.h>
#include <conio.h>
//Function prototype
int isPrime(int);
int fibbo(int);
int fact(int);

void main()
{
    printf("Write a program to check the prime number, calculate the factorial and calculate the fibonacci series\n");
    int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    isPrime(n);
    fibbo(n);
    fact(n);
    getch();
}
int isPrime(int a)
{
    int i,flag=0;
    for(i=2;i<a-1;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(a==1)
        printf("1 don't count in prime number");
    else
    {
        if(flag==0)
            printf("The input value is prime number\n");
        else
            printf("The input value is not prime number\n");
    }
}

int fibbo(int b)
{
    int i,pre=0,cur=1,temp;
    printf(" %d %d",pre,cur);
    for(i=3;i<=b;i++)
    {
        temp=cur;
        cur=pre+cur;
        pre=temp;
        printf("%d",cur);
    }
}
int fact(int c)
{
    int i,fact=1;
    for(i=1;i<=c;i++)
    {
        fact=fact*i;
    }
    printf("\nFactorial is: %d",fact);
}

// 13-08-2020
#include <stdio.h>
#include <conio.h>
int squ(int n)
{
    return n*n;
}
int cube(int b)
{
    return b*b*b;
}
void main()
{
    printf("Write a program to calculate the area of square and cube by using function\n");
    int a;
    printf("Enter the number");
    scanf(" %d",&a);
    printf("The area of square is : %d",squ(a));
    printf("\nThe area of cube   is : %d",cube(a));
    cube(a);
    getch();
}
//Array on c tutorial
//17-08-2020

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Array program\n");
    int n,i,a[20];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("\nElement %d:%d",i+1,a[i]);
    getch();

}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Sum and multiply of all array elements\n");
    int n,i,a[100],sum=0,mul=1;
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("Enter the array Element:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the array %d: ",i+1);
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++)
        sum= sum+a[i];
    printf("the total sum of elements is %d\n",sum);

    for(i=0;i<n;i++)
        mul*=  a[i];
    printf("The total multiplication of element is %d",mul);
    getch();

}

//20-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to sum the element without taking input from user\n");
    int a[5]={20,21,25,26,24},sum,i,mul; //a[]={20,21,25,26,24}
    for(i=0;i<5;i++)
        printf("The value of elements %d: %d\n",i+1,a[i]);

    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    mul=a[0]*a[1]*a[2]*a[3]*a[4];
    printf("The sum of elements: %d",sum);
    printf("\nThe multiply of all elements: %d",mul);



}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to reprint element of array in reverse order\n");
    int a[20],n,i;
    printf("Enter the number less than 20 :");
    scanf("%d",&n);
    printf("Enter the all element\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the elements %d:",i+1);
        scanf(" %d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
        printf("\nThe element is %d: %d",i+1,a[i]);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print Fibonacci series using arrays\n");
    int a[20],n,i;
    printf("Enter the number");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
        a[i]=a[i-1]+a[i-2];

    for(i=0;i<n;i++)
        printf("%d",a[i]);

    getch();

}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to print maximum and minimum by using array element\n");
    int n,i,a[20],max,min;
    printf("Enter the number less than twenty");
    scanf(" %d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d:",i+1);
        scanf(" %d",&a[i]);

    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("\nMin: %d",min);
    printf("\nMax: %d",max);




}
//21-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program positive & negative elements of an array");
    int n,i,a[20];
    printf("\nEnter the number");
    scanf(" %d",&n);
    printf("Enter array elements.\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf(" %d",&a[i]);
    }
    printf("\n\nNegative(-ve) Element\n");
    for(i=0;i<n;i++)
        if(a[i]<0)
        printf("\n%d",a[i]);

    printf("\n\nPositive(+ve) element:");
    for(i=0;i<n;i++)
        if(a[i]>0)
        printf("\n%d",a[i]);
}
//done by myself
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,a[20];
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("Enter the element:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf(" %d",&a[i]);
    }
    printf("\n\nFor Positive(+ve) elements\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            printf("\n%d",a[i]);
    }

    printf("\n\nFor Negative(-ve) elements");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            printf("\n%d",a[i]);
    }

}

//22-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program array in ascending/descending order\n");
    int n,i,j,a[20],max,min,temp;
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the elements %d:",i+1);
        scanf(" %d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


            }
        }
    }
    printf("Ascending order..\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;


            }
        }
    }
    printf("\nDescending Order...\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    getch();

}
//Multidimensional arrays
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to accept MxN matrix & reprint by using two dimensional array\n");
    int i,j,m,n,a[5][5];
    printf("Enter order of matrix under 5x5:\n");
    scanf(" %d %d",&m,&n);
    printf("Enter the matrix element]\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
             scanf(" %d",&a[i][j]);

    printf("\nmatrix element you have printed\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
    getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to add two MxN array matrices\n");
    int i,j,m,n,a[5][5],b[5][5],c[5][5];
    printf("Enter the matrix order\n");
    scanf(" %d%d",&m,&n);
    printf("Enter matrix element of first matrix..\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
           scanf(" %d",&a[i][j]);
    }

    printf("Enter the matrix element second matrix..\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
           scanf(" %d",&b[i][j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
          c[i][j]=a[i][j]+b[i][j];
    }

    printf("Resultant Matrix...\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
/*
Write a program to add two MxN array matrices
Enter the matrix order
3 3
Enter matrix element of first matrix..
11 11 11
11 11 11
11 11 11
Enter the matrix element second matrix..
22 22 22
33 33 33
44 44 44
Resultant Matrix...
33 33 33
44 44 44
55 55 55
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to addition array elements of two-dimensional arrays\n");
    int i,j,m,n,a[5][5],sum=0;
    printf("Enter the order of matrix..\n");
    scanf(" %d%d",&m,&n);
    printf("Enter the matrix element..\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           scanf(" %d",&a[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        sum=sum+a[i][j];
    printf("Sum of matrix element...%d",sum);
    getch();
}
/*
Write a program to addition array elements of two-dimensional arrays
Enter the order of matrix..
3 3
Enter the matrix element..
1 1 1
1 1 1
1 1 1
Sum of matrix element...9
*/

//23-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,m,a[5][5],sum=0,ch;
do{
    printf("Write a program to diagonal elements of a matrix by two dimensional array\n");
    printf("test the program\n");
    printf("Enter the order matrix..\n");
    scanf(" %d",&m);
    printf("Enter matrix elements..\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
           scanf(" %d",&a[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
           if(i==j)
               sum=sum+a[i][j];

    printf("\nSum of diagonal elements...%d\n",sum);

    printf("\nDo you want to continue this process\nPress one:");
    scanf(" %d",&ch);
    printf("\n");
}while(ch==1);
     getch();
}
/*
test the program
Enter the order matrix..
2
Enter matrix elements..
1 1
1 1

Sum of diagonal elements...2

Do you want to continue this process
Press one:1

test the program
Enter the order matrix..
4
Enter matrix elements..
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1

Sum of diagonal elements...4

Sum of diagonal elements...7

Do you want to continue this process
Press one:2
*/
//24-08-2020
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to addition on upper and lower matrix element by choosing option\n");
    int i,j,n,a[5][5],sum=0,ch;
    printf("Enter the order of matrix:");
    scanf(" %d",&n);
    printf("Enter the matrix elments..\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf(" %d",&a[i][j]);

    printf("Choose the option\n");
    puts("#1- upper matrix");
    puts("#2- lower matrix");
    scanf(" %d",&ch);
    if(ch==1)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
                sum= sum+a[i][j];
        }
    }
    printf("\nSum of upper triangular element: %d",sum);
    }
    if(ch==2)
    {
         for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                sum= sum+a[i][j];
        }
    }
    printf("\nSum of lower triangular element: %d",sum);
    }
    else
    {
        printf("Invalid input");
    }
}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program Multiplication of matrices\n");
    int i,j,m,k,a[5][5],b[5][5],c[5][5];
    printf("Enter the order of matrix..");
    scanf(" %d",&m);
    printf("Enter matrix element of first matrix...\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf(" %d",&a[i][j]);

    printf("Enter matrix element of Second matrix...\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf(" %d",&b[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    printf("Resultant Matrix.....\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            printf(" %d",c[i][j]);
        printf("\n");
    }
}
/*
Matrix multiplication formula
[a b] x [e  f] = [ae+bg 'af+bh]
[c d]   [g  h]   [ce+dg 'cf+dh]
To column --> x to row (dowm)
*/
//25-08-2020
//printf("Write a program Transpose of the matrix\n");
//printf("it mean interchanger between row and column\nFor example 2x3 interchange into 3x2\n");
//after 2-3 hours finally solved the error
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program Transpose of the matrix\n");
    printf("it mean interchanger between row and column\nFor example 2x3 interchange into 3x2\n");
    int i,j,m,n,a[10][10],ch;
    printf("Choose the option\n");
    puts("#1- square matrix");
    puts("#2- non-square matrix");
    scanf(" %d",&ch);
    if(ch==1)
    {
    printf("Enter order of matrix:");
    scanf("%d",&m);
    printf("Enter matrix element....\n");
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
           scanf(" %d",&a[i][j]);
    printf("\nTranspose in square matrix..\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
             printf("%d ",a[j][i]);
        printf("\n");

    }
    }
    if(ch==2)
    {
    printf("Enter order of matrix:\n");
    scanf(" %d %d",&m,&n);
    printf("Enter matrix element....\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
           printf("Enter the element a%d%d :",i+1,j+1);
           scanf(" %d",&a[i][j]);

        }
    printf("Entered the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",a[i][j]);

        }
        printf("\n");

    }

    printf("\nTranspose in square matrix..\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
             printf("%d ",a[j][i]);
        printf("\n");

    }

    }
}

//Taken from Internet
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Program to find a transpose of matrix\n");
    int i,j,r,c,a[10][10],trans[10][10];
    printf("Enter the order of matrix in row and column\n");
    scanf(" %d %d",&r,&c);
    //Assigning element to the matrix
    printf("\nEnter the matrix element\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf(" %d",&a[i][j]);
        }
    }
    //Display the matrix a[][]
    printf("\nEntered Matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
            if(j == c-1)
                printf("\n");
        }
    //finding the transpose of matrix a
    for(i=0;i<r;++i)
        for(j=0;j<c;++j) //it was caused by j<r
        {
            trans[j][i]=a[i][j];
        }
    //Display the transpose of matrix
    printf("\nTranspose of the matrix:\n");
    for(i=0;i<c;++i)
        for(j=0;j<r;++j)
        {
            printf("%d ",trans[i][j]);
            if(j==r-1)
                printf("\n");
        }
}

//Next the pointer
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Pointer basics\n");
    int a= 10;
    int *ptr=&a;

    printf("Value of a is (a) %d\n\n",a);
    printf("The address of value (&a) a: %d\n\n",&a);
    printf("Pointer of a(value at address of a- *&a) :%d\n\n",*&a);
    printf("Or,\nPointer of [*(&a)]a :%d\n\n",*(&a));
    printf("Star pointer (*ptr==*&a):%d\n\n",*ptr);
    printf("Star of a: %d",*a); // it won't work on giving star on value

}
/*
Pointer basics
Value of a is (a) 10

The address of value (&a) a: 6356744

Pointer of a(value at address of a- *&a) :10

Or,
Pointer of [*(&a)]a :10

Star pointer (*ptr==*&a):10

*/
//26-08-2020
//call by value
#include <stdio.h>
#include <conio.h>

int add(int a,int b)
{
    int c= a+b;
    return c;
}
int main()
{
printf("Pointer chapter - Call by value\n");
    int a=10,b= 20,c;
    c= add(a,b);
    printf("value of a:%d\nValue of b:%d\n",a,b);
    printf("addition of both value is: %d",c);
}

//call by reference -Example #1
#include <stdio.h>
#include <conio.h>
int add(int *a,int *b)
{
    int c= *a+*b;
    return c;
}
int main()
{
    printf("Pointer chapter - Call by Reference\n Example #1\n");
    int a=10,b=20,c;
    c=add(&a,&b);
    printf("value of a:%d\nValue of b:%d\n",a,b);
    printf("addition of both value is: %d",c);
}

//call by reference -Example #2
#include <stdio.h>
#include <conio.h>
void add(int *a,int *b,int *c)
{
    *c=*a+*b;
}
int main()
{
    printf("Pointer chapter - Call by Reference\n Example #2\n");
    int a=10,b=20,c;
    add(&a,&b,&c);
    printf("value of a:%d\nValue of b:%d\n",a,b);
    printf("addition of both value is: %d",c);

}
#include <stdio.h>
#include <conio.h>

swap(int *x,int *y)
{
    int temp; //where temp means temporary
    temp= *x;
    *x=*y;
    *y=temp;
}

void main()
{
    printf("Write a program to Swap two numbers using parametrized functions\n");
    int a,b;
    printf("Enter the number:");
    scanf(" %d %d",&a,&b);
    printf("\nBefore Swapping a=%d, b=%d\n",a,b);
    swap(&a,&b);//------------------------------------->int *x=&a;=>*&a_
    printf("\nAfter Swapping a=%d, b=%d",a,b);//------->int *y=&b;=>*(&b)
    getch();
}

//Done by myself
#include <stdio.h>
#include <conio.h>
int add(int *x,int *y)
{
    int z=*x+*y;
    return z;
}
int sub(int *m,int *n)
{
    int o=*n-*m;
    return o;
}

void main()
{
    printf("Write a program to do some Arithmetic operation by using call by reference pointer method\n");
    int a,b;
    printf("Enter the value of a:");
    scanf(" %d",&a);
    printf("Enter the value of b:");
    scanf(" %d",&b);
    add(&a,&b);
    printf("Addition of a and b: %d",add(&a,&b));
    sub(&a,&b);
    printf("\nSubtraction of a and b: %d",sub(&a,&b));
}
//Scope of variable
//27-08-2020
//Global variable and local variable example -1
#include <stdio.h>
#include <conio.h>
int global_variable;

int main()
{
    int local_variable= 10;
    global_variable= 11;
    printf("\n\n%d",global_variable);
    printf("\n\n%d",add(&local_variable));

}

int add(int *local_variable)
{
    return(*local_variable+global_variable);
}
//Global variable and local variable example -2
#include <stdio.h>
#include <conio.h>
int a=20;//global variable
int sum(int a,int b)
{
    printf("a=%d in sum()\n",a);  //a=10 in sum(10)
    printf("b=%d in main()\n",b); //b=20 in main()
    return a+b;
}

int main()
{
    //local variable
    int a= 10;
    int b= 20;
    int c= 0;

    printf("a=%d in main()\n",a);
    c =sum(a,b);
    printf("c=%d in main()\n",c);
    return 0;
}
/*
Formal variable are treated as local variables with-in a function and
they take precedence over global variable.
*/
//Recursion in function
//Example #1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

fibbo(int pre,int cur,int x)
{
    int temp;
    if(x==2)
    {
        getch();
        exit(0);
    }
    temp = cur;
    cur =pre+cur;
    pre=temp;
    printf("%d",cur);
    fibbo(pre,cur,x-1);
    /*it's recursion which by calling same function
    to repeat same loop over and over again unless
    we add some certain condition to stopped them.*/
}

void main()
{
    printf("Write a program to Fibonacci series using recursion\n");
    int n,pre=0,cur=1;
    printf("Enter the number :");
    scanf(" %d",&n);
    printf("%d %d",pre,cur);
    fibbo(pre,cur,n);
    getch();
}
//Example  -2
#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
    return f;
}

void main()
{
    int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("\nFactorial is %d",fact(n));
    getch();

}
//Passing arrays to a function
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,a[5];
    printf("Enter the number");
    scanf(" %d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        printf("Enter array %d: ",i+1);
        scanf(" %d",&a[i]);
    }
    printf("Display the entered array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

#include <stdio.h>
#include <conio.h>

void dis1(int *param)
{
    printf("Passing array by using Pointer..\n");
    printf("a[2]: %d ",*param);
}

void main()
{
    int i,n,array[5];
    printf("Enter the number :");
    scanf(" %d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        printf("Enter array a[%d]: ",i+1);
        scanf(" %d",&array[i]);
    }
    printf("Display the entered array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n[Passing array to a function..]\n\n");
    dis1(&array[2]);
    getch();
}
/*
Enter the number :4
Enter the array element
Enter array a[1]: 0
Enter array a[2]: 1
Enter array a[3]: 2
Enter array a[4]: 3
Display the entered array
0 1 2 3
[Passing array to a function..]

Passing array by using Pointer..
a[2]: 2
Notes: Ask someone about this

*/

//Method by tutorial
#include <stdio.h>
#include <conio.h>
//on bottom ,you can see that where param[] is un-size array,because size wasn't declared,
//you can still declare size on array by adding more size like p[10] than actual size on main() function

void foo(int param[])
{
    for(int i=0;i<4;i++)
        printf("\n%d",param[i]++);
}



void main()
{
   // printf("Passing sized array to a function\n");
     int array[4]= {0,1,2,3};
    //because if denoted a[6]={x,x,x,x} it could be incorrect

    printf("Values before function call");
    foo(array);

    printf("\n");

    printf("Value after function call");
    for(int i=0;i<4;i++) //because you could int on for loop as for(int i=x;i<n;i++),but it might not apply on whole program
        printf("\n%d",array[i]);
}
//My experiment
//Method by myself
#include <stdio.h>
#include <conio.h>

void dispass1(int *param)
{
    printf("Passing array by using Pointer..\n");
    printf("a[1]: %d ",*param);
}
void dispass2(int *param)
{
    printf("a[2]: %d ",*param);
}
void dispass3(int *param)
{
    printf("a[3]: %d ",*param);
}
void dispass4(int *param)
{
    printf("a[4]: %d ",*param);
}
void dispass5(int *param)
{
    printf("a[5]: %d ",*param);
}



void dis2(int param[10],int n)
{
    for(int i=0;i<n;i++) //for(int i=0;i <n;i++)
        printf("\n%d",param[i]++);
}

void main()
{
    int n,array[5];
    printf("Enter the number:");
    scanf(" %d",&n);
    printf("Enter the element of array..\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the array a[%d]: ",i+1);
        scanf(" %d",&array[i]);
    }
    printf("\n\nThe element of array you have entered..");
    for(int i=0;i<n;i++)
        printf(" %d",array[i]);

    printf("\n[Passing array to a function..]\n\n");
    dispass1(&array[1]);
    dispass2(&array[2]);
    dispass3(&array[3]);
    dispass4(&array[4]);
    dispass5(&array[5]);


    printf("\n\nNow,Values before function call..");
    dis2(array,n);

    printf("\nThen,Values after function call..");
    for(int i=0;i<4;i++)
       printf("\n%d",array[i]);



}
/*
Enter the number:5
Enter the element of array..
Enter the array a[1]: 0
Enter the array a[2]: 1
Enter the array a[3]: 2
Enter the array a[4]: 3
Enter the array a[5]: 4


The element of array you have entered.. 0 1 2 3 4
[Passing array to a function..]

Passing array by using Pointer..
a[1]: 1 a[2]: 2 a[3]: 3 a[4]: 4 a[5]: 5

Now,Values before function call..
0
1
2
3
4
Then,Values after function call..
1
2
3
4
*/
//String
//28-08-2020 //fixed
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a print string ASCII value with numbers\n");
    int i;
    for(i=65;i<=90;i++)
        printf("%c--%d,\t",i,i);
    printf("\n\n\n\n");

    for(i=97;i<=122;i++)
        printf("%c--%d,\t",i,i);
    printf("\n\n\n\n");

    for(i=48;i<=57;i++)
        printf("%c--%d,\t",i,i);
    getch();
}

/*Write a print string ASCII value with numbers
A--65,  B--66,  C--67,  D--68,  E--69,  F--70,  G--71,  H--72,
I--73,  J--74,  K--75,  L--76,  M--77,  N--78,  O--79,  P--80,
Q--81,  R--82,  S--83,  T--84,  U--85,  V--86,  W--87,  X--88,
Y--89,  Z--90,

a--97,  b--98,  c--99,  d--100, e--101, f--102, g--103, h--104,
i--105, j--106, k--107, l--108, m--109, n--110, o--111, p--112,
q--113, r--114, s--115, t--116, u--117, v--118, w--119, x--120,
y--121, z--122,

0--48,  1--49,  2--50,  3--51,  4--52,  5--53,  6--54,  7--55,
8--56,  9--57,
*/
//29-08-2020
#include <stdio.h>
#include <conio.h>
#include <string.h>//String library to use inbuild datatype on c;
void main()
{
// char *s1,*s2; //those *s1 are string pointer,
//but this is only work on turbo c on DOS Emulator use String array like s1[10] on GCC complier
//clrscr();
char s1[10],s2[10];

printf("Enter the string :");
scanf(" %s",&s1); //||scanf(" %s",s1); doesn't do much affect on them
//In turbo c, like if we denoted *s1 on char , so *s1 is same as &s1 just like *(&s1)=*s1

strcpy(s2,s1);//it's copy s1 input to s2
//or ,|| we can do char s1[]="Abc",s2; or char s1[3]={A,b,c,'\0'};

printf("\nCopied string is...%s",s2);
printf("\nlength: %d",strlen(s1));
//Strlen(s1) is count how many string input here
//like if add string character "abced"- so strlen count by number of alphabet so ,"abced"- total 5 alphabets present here
//and,Strlen(s1) is return the length of string s1

printf("\nString in UPPER CASE: %s",strupr(s1));
//it convert them into CAPITAL LETTER a.k.a upper case of input string
//and %s on parameter is collection of character string , if we added one or more character
//we use %s to denoted ,but for we use %c to denoted them

printf("\nString in lowerr case: %s",strlwr(s1));
//it's also same apply on lower case as well which convert into small letter of alphabet

printf("\nReverse String :%s",strrev(s1));
// strsev() is part of inbuild #include string.h,it's print input character reverse order

getch();

}
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
    printf("Write a program to Count alphabets, digits & symbols by input by user\n");
    char s[20];
    int i,alphabets=0,digits=0,symbols=0;
    printf("Enter the string: ");
    scanf(" %s",s);
    for(i=0;s[i]!='\0';i++)
        if(isalpha(s[i]))
           alphabets++;
        else if(isdigit(s[i]))
            digits++;
        else
            symbols++;

    printf("\nAlphabets: %d",alphabets);
    printf("\nDigits: %d",digits);
    printf("\nSymbols: %d",symbols);
    getch();
}

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    printf("Write a program to Compare two strings\n");
    char s1[20],s2[20];
    printf("Enter the string 1:");
    scanf(" %s",s1);
    printf("Enter the string 2:");
    scanf(" %s",s2);

    if(strcmp(s1,s2)>0)
        printf("String 1 is greater..");
    else if(strcmp(s1,s2)<0)
        printf("\nString 2 is greater");
    else
        printf("\nString are equal..");

    getch();
}
//Notes: it doesn't explain much on video by taking example,feels like rushed mode
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    printf("Write a program Concatenate two strings\n");
    char s1[20],s2[20];
    printf("Enter the string 1:");
    scanf(" %s",s1);
    printf("Enter the string 2:");
    scanf(" %s",s2);
    printf("\nConcartenated string is..%s",strcat(s1,s2));//s=s1+s2

}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program calculate Length of string \nwithout using string.h library of strlen(s1[i)\n");
    int i,len=0;
    char s[20];
    printf("Enter the string: ");
    scanf(" %s",s);
    for(i=0;s[i]!='\0';i++)
        len++;
    printf("\nThe length of string is...%d",len);
}
//30-08-2020
//it was intensionally show to kids,
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to multiply between numbers\n");
    int a,b,i;
    printf("Enter the table number: ");
    scanf(" %d",&a);
    printf("How long you want to print: ");
    scanf(" %d",&b);
    i=1;
    while(i<=b)
    {
        printf("%dx%d=%d\n",a,i,i*a);
        i++;
    }

}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program Copy a string from another \nwithout using string.h library of strcpy(s2,s1) aka copy s1 to s2\n");
    int i;
   // char *s1,*s2;
    char s1[10],s2[10];
   // clrscr();
    printf("Enter the string 1...");
    scanf(" %s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("The copied string is...%s",s2);
    getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program convert String uppercase \nwithout using string.h library of strupr(s1) aka convert into CAPITAL ALPHABETS\n");
    int i;
    char s1[10];
    printf("Enter the string 1...\n");
    scanf(" %s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if((s1[i]>='a')&&(s1[i]<='z'))// because ASCII value of A=65 and a=97,
        //so difference between those two are 32
        //like A--65,  B--66,  C--67 and a--97,  b--98,  c--99,
            s1[i]=s1[i]-32;
    }
    printf("Resultant string is ....%s",s1);
    getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("write a program convert String lowercase \nwithout using string.h library of strlwr(s1) aka convert into small capital\n");
    int i;
    char s1[10];
    printf("Enter the string 1...\n");
    scanf(" %s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if((s1[i]>='A')&&(s1[i]<='Z'))
        //it apply on this as well just few changes by changing minus into plus
            s1[i]=s1[i]+32;
    }
    printf("Resultant string is ....%s",s1);
    getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to Join two strings\nwithout using string.h library of strcat(s1,s2) aka joining or concatenate between two string into one string (s1)\n");
    int i,len=0,j;
	//char *s1,*s2;
	//clrscr();
	char s1[10],s2[10];
	printf("Enter the string 1...");
	scanf(" %s",s1);
	printf("Enter the string 2....");
	scanf(" %s",s2);

	for(i=0;s1[i]!='\0';i++)
		len++;

	j=0;

	for(i=len;s2[j]!='\0';i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';

	printf("Resultant string is ...%s",s1);
	getch();

}
#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to Count alphabets digits & symbols without using inbuilt functions\nwithout using inbuilt function ctype.h library of \nisalpha(s[i]) for counting alphabets\nisdigits(s[i]) for counting digit etc.\n");
    printf("Test the program\n");
    int i,alphabets=0,digits=0,symbols=0;
    char s[10];
    printf("Enter the string..");
    scanf(" %s",s);

    for(i=0;s[i]!='\0';i++)
    {
        if(((s[i]>='A')&&(s[i]<='Z'))  || ((s[i]>='a')&&(s[i]<='z')))
              alphabets++;
        else if((s[i]>='0')&&(s[i]<='9'))
            digits++;
        else
            symbols++;
    }

    printf("\nAlphabets: %d",alphabets);
    printf("\nDigits: %d",digits);
    printf("\nSymbols: %d",symbols);
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // to use exit(0) inbuilt function to exit the loop
void main()
{
    printf("Write a program to Compare two strings without using inbuilt functions \nstring.h of strcom(s1,s2)>0 or strcom(s1,s2)<0\n");
    int i;
    char s1[10],s2[10];
    printf("Enter the string 1...");
    scanf(" %s",s1);
    printf("Enter the string 2...");
    scanf(" %s",s2);

    for(i=0;s1[i]!='\0';i++) //'\0' is null character
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]>s2[i])
                printf("\nString 1 is greater.. %s",s1);
            else
                printf("\nString 2 is greater...%s",s2);
            getch();
            exit(0);
        }
    }
    printf("Both String are equal....");
    getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to count vowels\n");
    int i,vowels=0;
    char s[20];
    printf("Enter the string...");
    scanf(" %s",s);

    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]=='A')||(s[i]=='E')||(s[i]=='O')||(s[i]=='U')||(s[i]=='I')||(s[i]=='a')||(s[i]=='e')||(s[i]=='o')||(s[i]=='u')||(s[i]=='i'))
        vowels++;

    }
    printf("\nVowels: %d",vowels);
}

#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Write a program to without using \nwithout using inbuilt function string.h library of strrev(s1) aka reverse the string \n");
    int i,j,len=0;
    char s1[20],s2[20];
    printf("Enter the string");
    scanf(" %s",s1);
    for(i=0;s1[i]!='\0';i++)
        len++;

    j=0;
    for(i=len-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]='\0';
    printf("\nReversed String : %s",s2);
    getch();
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    printf("Write a program to check this program is palindrome or not\nPalindrome means reverse string are same as before reverse string like abcba are palindrome\n");
    int i,j,len=0;
    char s1[20],s2[20];
    printf("Enter the string");
    scanf(" %s",s1);
    for(i=0;s1[i]!='\0';i++)
        len++;

    j=0;
    for(i=len-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    s2[j]='\0';
    for(i=0;s1[i]!='\0';i++)
        if(s1[i]!=s2[i])
    {
        printf("\nNot a palindrome");
        getch();
        exit(0);
    }
    printf("It is palindrome");

}
//Structure - database
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
    printf("Write a program to Create structure Employee, store values & reprint\n");
    struct Employee e;
    printf("Enter name:");
    scanf(" %s",&e.name);
    printf("Enter emp_id:");
    scanf(" %d",&e.emp_id);
    printf("Enter Phone Number:");
    scanf(" %ld",&e.phone_no);

    printf("\n\nEnter name: %s",e.name);
    printf("\n\nEnter Emp Id :%d",e.emp_id);
    printf("\n\nEnter Phone Number: %ld",e.phone_no);
    getch();
}
//examples ===

#include <stdio.h>
#include <conio.h>

struct Student
{
    char name[50];
    int roll_no;
    int m1,m2,m3;
};

void main()
{
    printf("Write a program to create structure of student having field.. roll number,name marks etc.\nAccept data for 5 student and re-print the data\n");
    int i,n;
    printf("No, of student is :");
    scanf(" %d",&n);
    struct Student s[5];
    for(i=0;i<n;i++) //n=5;
    {
        printf("\nEnter data for Student %d....\n",i+1);
        printf("Enter name     :");
        scanf(" %s",&s[i].name);
        printf("Enter Roll No.  :");
        scanf(" %d",&s[i].roll_no);
        printf("Enter marks for subject 1:");
        scanf(" %d",&s[i].m1);
        printf("Enter marks for subject 2:");
        scanf(" %d",&s[i].m2);
        printf("Enter marks for subject 3:");
        scanf(" %d",&s[i].m3);

    }
    //it wasn't part of tutorial video it was done by myself
    for(i=0;i<n;i++)
    {
    printf("\n\nPrinted data for Student %d....\n",i+1);
    printf("\nEntered Student name: %s",s[i].name);
    printf("\nEnter Roll No.  :%d",s[i].roll_no);
    printf("\nEnter marks for subject 1:%d",s[i].m1);
    printf("\nEnter marks for subject 2:%d",s[i].m2);
    printf("\nEnter marks for subject 3:%d",s[i].m3);
    printf("\n\n");
    }
    getch();
}

//Example--
#include <stdio.h>
#include <conio.h>

struct Date //like foreigner entity which connected to main date enity
{
    int mm,dd,yy;
};

struct Employee
{
    char name[50];
    int emp_id;
    struct Date DOB,DOJ;//it call to struct date
};

void main()
{
    printf("Write a program to create structure of student having another structure declared in it for accepting DOB and DOJ\n");
    int i;
    struct Employee e;
    printf("Enter name:");
    scanf(" %s",&e.name);
    printf("Enter emp_id:");
    scanf(" %d",&e.emp_id);
    printf("\nEnter Date of joining\n");
    printf("(dd-mm-yy):");
    scanf("%d-%d-%d",&e.DOJ.dd,&e.DOJ.mm,&e.DOJ.yy);
    printf("\nEnter Date of birth\n");
    printf("(dd-mm-yy):");
    scanf("%d-%d-%d",&e.DOJ.dd,&e.DOJ.mm,&e.DOJ.yy);

    printf("\nName  :%s",e.name);
    printf("\nEmployee :%d",e.emp_id);
    printf("\n    DOJ     :%d-%d-%d",e.DOJ.dd,e.DOJ.mm,e.DOJ.yy);
    printf("\n    DOB     :%d-%d-%d",e.DOJ.dd,e.DOJ.mm,e.DOJ.yy);

    getch();


}

//01-09-2020
//for revision ,because I skipped yesterday
#include <stdio.h>
#include <conio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks[10];
    //int marks;
    char subject_name[10];
    //int m1,m2,m3;
};

void main()
{
    printf("Write a program to create a structure on student \ntake subject name and marks from student and printed the result of all marks\n");
    int i,j,m,n;
    printf("Input the number of student:");
    scanf(" %d",&n);
    printf("Enter the no. of subject on student:");
    scanf(" %d",&m);
    struct Student s[5];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the data for Student %d....",i+1);
        printf("\nEnter the name of student :");
        scanf(" %s",&s[i].name);
        printf("Enter Roll No: ");
        scanf(" %d",&s[i].roll_no);
        for(j=0;j<m;j++)
        {
            printf("Enter the subject name:");
            scanf(" %s",&s[j].subject_name);
            printf("Enter the subject marks");
            scanf(" %d",&s[j].marks);
        }
    }
    for(i=0;i<n;i++)
    {
    printf("\n\nPrinted data for Student %d....\n",i+1);
    printf("\nEntered Student name: %s",s[i].name);
    printf("Enter Roll No.  :%d",s[i].roll_no);
    for(j=0;j<m;j++)
        {
            printf("\nPrinted the subject name: %s",s[j].subject_name);
            printf("\nPrinted the subject marks:%s",s[j].marks);
        }
    printf("\n\n");
    }
    getch();
}
//this program did kinda work except some bugs on marks side , but I'm pretty understood the structure
//Let's moved to File operations





















