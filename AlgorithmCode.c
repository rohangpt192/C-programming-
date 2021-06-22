//Algorithm programming
//10-06-2021
#include <stdio.h>
//Algorithm to add first n natural numbers. Assume s is a variable initialized to 0
void main()
{
    int n,s=0;
    printf("Enter the value of n: ");
    scanf(" %d",&n);
    if(n<=0)
    {
        printf("No task further");
        return -1;
    }
    while(n!=0)
    {
    s=s+n;
    //printf("n=%d\t",n);
    //printf("%d ",n);
    printf("s=%d\n",s);
    n--;
    }
}
//Algorithm programming
//16-06-2021
#include <stdio.h>
void main()
{
    int a[5];
    a[0]=8;
    a[1]=18;
    a[2]=20;
    printf("Value of a[0]:%d\n",a[0]);
    printf("Address of a[0]:%d\n",&a[0]);
    printf("Size of a[0]:%d\n",sizeof(a[0]));
    printf("\n");
    printf("Value of a[1]:%d\n",a[1]);
    printf("Address of a[1]:%d\n",&a[1]);
    printf("Size of a[1]:%d\n",sizeof(a[1]));
    printf("\n");
    printf("Value of a[2]:%d\n",a[2]);
    printf("Address of a[2]:%d\n",&a[2]);
    printf("Size of a[2]:%d\n",sizeof(a[2]));
    printf("\n");
    printf("Value of a[3]:%d\n",a[3]);
    printf("Address of a[3]:%d\n",&a[3]);
    printf("Size of a[3]:%d\n",sizeof(a[3]));
    printf("\n");
    printf("Value of a[10]:%d\n",a[10]);
    printf("Address of a[10]:%d\n",&a[10]);
    printf("Size of a[10]:%d\n",sizeof(a[10]));
}
/*
Value of a[0]:8
Address of a[0]:6422284
Size of a[0]:4

Value of a[1]:18
Address of a[1]:6422288
Size of a[1]:4

Value of a[2]:20
Address of a[2]:6422292
Size of a[2]:4

Value of a[3]:2134016
Address of a[3]:6422296
Size of a[3]:4

Value of a[10]:12522752
Address of a[10]:6422324
Size of a[10]:4
*/
//16-06-2021
#include <stdio.h>
int sum(int a)
{
int s;
if(a==1)
  return(a);
s=a+sum(a-1);
return(s);
}

void main()
{
int k;
k=sum(10);
printf(" %d",k);

}
//17-06-2021
//math.h Library pow(base,power);
#include <stdio.h>
#include <math.h>
int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}
//17-06-2021
//math.h Library pow(base,power); like 2 power 2 = 2x2 =4
#include <stdio.h>
#include <math.h>
int main()
{
   int num=0,digit[10],numofinput,i;
   printf("Input the number: ");
   scanf("%d",&numofinput);
   for(i=0;i<numofinput;i++)
   {
       printf("Input the digit at position %d: ",i+1);
       scanf(" %d",&digit[i]);
   }
   i=0;
   while(i<numofinput)
   {
   printf("digit[%d]:%d\n",i,digit[i]);
   printf("before num:%d\n",num);
   num=num+digit[i]*pow(10,i);
   printf("after num:%d\n",num);
   i++;
   }
   printf("\nThe number is:%d",num);
   return 1;

}
/*Output:
Input the number: 4
Input the digit at position 1: 2
Input the digit at position 2: 3
Input the digit at position 3: 0
Input the digit at position 4: 9
digit[0]:2
before num:0
after num:2

digit[1]:3
before num:2
after num:32

digit[2]:0
before num:32
after num:32

digit[3]:9
before num:32
after num:9032

*/

//19-06-2021
/*
Backtracking
* It is the method of exhausted search using divide and conquuer.
* Sometimes the best algorithm for a problem is to try all possibilities.
* This is always slow.
very confusing to understand
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void swap(char *x,char *y)
{
  //printf("\nIn swap function\nWhere *x=(s+i) and *y=(s+j)\n");
  char ch;
  ch=*x;
  //printf("after ch:ch=%c,x=%s,y=%s\n",ch,x,y);
  *x=*y;
  //printf("after(*x=*y): ch=%c,x=%s,y=%s\n",ch,x,y);
  *y=ch;
  //printf("after (*y=ch):ch=%c,x=%s,y=%s\n\n",ch,x,y);
  //printf("ch=%c\n",ch);

}

void perm(char *s,int i,int n)
{
   static int count;
   int j;
   //printf("if(i==n);n=%d it will print result\n",n);
   //printf("before if: s=%s,i=%d,j=%d,n=%d\n",s,i,j,n);
   if(i==n)
   {
    count++;
    printf("(%d)%s\n\n",count,s);
    //printf("----------------------------\n");
   }
   else
   //printf("perm calls,where for(j=i;j<=n;j++)\n");
   for(j=i;j<=n;j++)
   {
   //printf("Before swap1: s=%s,i=%d,j=%d,n=%d\n",s,i,j,n);
   swap((s+i),(s+j));
   //printf("After swap1/before Recursion function which have [perm(s,i+1,n);]: s=%s,i=%d,j=%d,n=%d\n\n",s,i,j,n);
   //after swap 1 completed it will do recursion then run swap 1 two times until i=3 will cancel every condition
   perm(s,i+1,n);
   //after swap 1 work completed after recursion task then run swap 2 two times until i reverse back to 1 then 0
   //printf("\nbefore swap2/after Recursion function: s=%s,i=%d,j=%d,n=%d\n",s,i,j,n);
   swap((s+i),(s+j));//backtracking
   //printf("after swap2: s=%s,i=%d,j=%d,n=%d\n",s,i,j,n);
   }
}

void main()
{
  char str[10];
  printf("Enter a string: ");
  gets(str);
  perm(str,0,strlen(str)-1);
  getch();
}
//21-06-2021
#include <stdio.h>
long factorial(int);
void main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    k=factorial(n);
    printf("Factorial of input: %d",k);

}
long factorial(int n)
{
  if(n>0)
    return(n*factorial(n-1));
  else
     return(1);
}
/*
factorial calculation
5=5x4x3x2x1
fact(5) //functionn
  5*fact(4)
   4*fact(3)
    3*fact(2)
     2*fact(1)
      1*fact(0)
        1//return 1, if n>0
*/
#include <stdio.h>
//Tower of haino
int main()
{
    int n = 3; // Number of disks
    TOH(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}
void TOH(int n,char BEG,char AUX,char END)
{
if(n>=1)
{
  TOH(n-1,BEG,END,AUX);
  printf("%c to %c\n",BEG,END);
  TOH(n-1,AUX,BEG,END);
}

}




