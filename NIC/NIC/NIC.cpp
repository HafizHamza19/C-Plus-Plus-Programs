# include <iostream>
using namespace std;
int main (void)
{
	cout  << "-----------Nadra------------"<<endl;
int age;
cout << "Enter Your Age: ";
cin >>  age;
if (age>=18)
{ cout << " You Are Eligible To CNIC"<<endl;
char name[20];
cout <<"Enter Your Name: ";
cin >>name;
char fathername[20];
cout <<"Enter Your Father Name: ";
cin >>name;

int address;
cout <<"Enter Your Address: ";
cin >>address;
cout <<"Congratulation your Process Has Done"<<endl<<"You Can Recive Your CNIC After 15 Days"<<endl;
}
if (age<17)
	{cout <<"You Are Not Eligible To CNIC"<<endl;
}

	system ("pause");
	return 0;
}