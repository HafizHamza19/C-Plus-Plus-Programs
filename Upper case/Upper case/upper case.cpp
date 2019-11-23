#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	cout<<"                       Conveter Small To Capital";
	char word[20];
	cout <<"\nEnter Words To Convert : ";
	cin >>word;
	cout<<"\nThe Word Is Converted "<<strupr(word);

	getch();
}