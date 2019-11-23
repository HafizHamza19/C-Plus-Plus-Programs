#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;
void main(void)
{
	int v_code;
	printf( "\n === Motor Code to Type Converter  === " );
	printf("\n Enter Vehicle code :" );
	scanf("%d",&v_code);
	switch(v_code)
	{
	case (123):
		printf("\n Type a simple Car ");
		int price;
		printf("\n Enter Total Cost is US $:" );
	    scanf("%d",&price);
		if(price>=3000 && price<=5000)
		{
		printf("\nYou have Bolan Option:" );
		}
		if(price>=6000 && price<=8000)
		{
		printf("\nYou have Mazda  RX8 Option:" );
		}
		break;
	case (345):
		printf("\n Type a simple Truck ");
		break;
	case (678):
	    printf("\n Type a simple Jeep ");
		break;
	default :
		printf("\n Code is out of range: ");	
	}


getch();
}2