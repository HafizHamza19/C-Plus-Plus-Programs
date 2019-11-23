#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;
int num1;
int num2;
int r;
float circle(int);
float c;
int add(int,int);
int z;
int multi(int,int);
int x;
int sub(int,int);
int y;
float divi(int,int);
float w;
float radius(int);
float i;
int s;
void main()
	{ int opt;
		printf("What Do You Want To Do?\n-----------Press Code----------\n(1)Area Of Circle (2)Add (3)Substract (4)Multiply (5)Divide (6)Radius : ");
		scanf ("%d",&opt);
		switch (opt)

		printf("\n======Area Of Circle========\n\n");
	printf("Enter The Value Of Radius : ");
	scanf("%d",&r);
	//call function circle
	float c= circle(r);
	printf("\nThe Area Of Circle Is :%f",c);

	//call function add
	printf ("\n\n=======Add Value========");
	printf("\nEnter 1st Value : ");
	scanf ("%d",&num1);
	printf ("\nEnter 2nd Value : ");
	scanf ("%d",&num2);
	int z =add(num1,num2);
	printf ("\nThe Sum Of Value is:%d",z);

	// function call multiply
	
printf ("\n\n=======Multiply Value========");
	printf("\nEnter 1st Value : ");
	scanf ("%d",&num1);
	printf ("\nEnter 2nd Value : ");
	scanf ("%d",&num2);
	int x=multi(num1,num2);
	printf ("\nThe Multiply Of Value is:%d",x);
	
	//call function sub
	
	printf ("\n\n=======Substraction Value========");
	printf("\nEnter 1st Value : ");
	scanf ("%d",&num1);
	printf ("\nEnter 2nd Value : ");
	scanf ("%d",&num2);
	int y=sub(num1,num2);
	printf ("\nThe Multiply Of Value is:%d",y);
	
	//call Function Divide
	
	printf("\n========Divide Value========");
	printf("\nEnter 1st Value : ");
	scanf("%d",&num1);
	printf("\nEnter 2nd Value : ");
	scanf ("%d",&num2);
	float w= divi(num1,num2);
	printf("\nThe Division Of Value Is:%f",w);
	
	//radius
	
	printf("\n=======Radius=======");
	printf("\nEnter The Value");
	scanf ("%d",s);
	float i=radius(s);
	printf ("\nThe Radius is :%f",i);

getch();

}
float circle (int a)
{
	c=3.14*(r^2);
	return c;
}
int add(int b,int d)
{
z=num1+num2;
return z;
}
int multi(int a,int b)
{
x=num1*num2;
return x;
}
int sub(int a,int b)
{
y=num1-num2;
return y;

}
float divi(int a,int b)
{
w=num1/num2;
return w;

}
float radius(int a)
{
	
	i=6.28/(s^2);
	return i;
}