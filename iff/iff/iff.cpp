#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;
void bio (void);
void main (void)
{

	bio();


	getch();
	system("pause");
}
void bio(void)
{
string name;
	printf("\nEnter Your Name : ");
	scanf("%s",&name);
string father;
	printf("\nEnter Your Father Name : ");
	scanf("%s",&father);
string adress;
	printf("\nEnter Your Adress : ");
	scanf("%s",&adress);
string age;
	printf("\nEnter Your Age : ");
	scanf("%s",&age);
	
	
	string nicc;
	printf("\nEnter Your NIC : ");
	scanf("%s",&nicc);

		string hobb;
	printf("\nEnter Your Hobby : ");
	scanf("%s",&hobb);
	string sports;
	printf("\nWhich Sports Do Like? : ");
	scanf("%s",&sports);
	string movie;
	printf("\nDo You Watch Movie? : ");
	scanf("%s",&movie);
	return ;
	}