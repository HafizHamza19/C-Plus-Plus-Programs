#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	cout<<"                    Converter Capital To Small Alphbets";
	char word[50];
	cout<<"\nEnter Word : ";
	cin.getline(word,50);
	strlwr(word);
	cout<<"\nThe Converted  "<<strlwr(word);;

	getch();
}