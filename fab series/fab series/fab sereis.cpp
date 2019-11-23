#include <iostream>
#include <conio.h>
using namespace std;

int fabio(int);
void main()
{
	int x ;
	int range;
	cout << "Enter Range  : ";
	cin >> range;
	cout<<"                --------------fibonacci series-----------------\n\n\n";
	for 
		(x=5; x<=range+5;x++)
	{
			
			cout << "\t" << fabio(x);		
	}
	cout<<"\n\n\n                --------------------Postion-------------------\n\n";cout << endl << endl; 
	int i =-1;
	while(i<range)
	{
	i++;

	 cout << "\t" << i;
	
	}
	
	
getch();
}

int fabio(int h)
{
	
	if(h == 4 )
	{
		return 4;

	}
	else if(h == 5)
	{
	
	return 5;
	
	}
	else
	{
	return fabio(h-1)+fabio(h-2);
	
	}

}