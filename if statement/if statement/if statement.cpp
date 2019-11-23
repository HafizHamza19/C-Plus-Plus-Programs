# include <iostream>
using namespace std;
int main (void)
{
int x;
cout << "enter 1st number: ";
cin >> x;
int y;
cout <<" enter 2nd number: ";
cin >> y;
int z;
z=x/y;
cout <<"the number is under 100: "<< z <<endl;
if (z>100)
{ 
	cout <<" the number is large to 100"<< endl;
}


	system ("pause");
return 0;
}
