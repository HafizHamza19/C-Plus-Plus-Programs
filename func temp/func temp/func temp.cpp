#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int opt;
	printf("What do you want \n (1)Feh To Cel (2)Cel To Feh : ");
	scanf("%d",&opt);
	switch(opt)
	{
	case(1):
	int feh;
	int cel;
	printf("-----Temperature Converter------");
	printf("\nEnter The Temprature In Fahrenheit : ");
	scanf("%d",&feh);
	cel=(feh-32)*5/9;
	printf("The Temperature In Celcius Is = %d",cel);
	printf("\n(Y)------Thanks For Use-------(Y)");
	break;
	case (2):
		int fehh;
	int cell;
	printf("-----Temperature Converter------");
	printf("\nEnter The Temprature In Celcius : ");
	scanf("%d",&cell);
	fehh=9*(cell/5)+32;
	printf("The Temperature In Fehrenheit Is = %d",fehh);
	printf("\n(Y)------Thanks For Use-------(Y)");
	break;
	default:
		{
		printf("Code Is Out Of Range");
		}
	}
	getch();
}