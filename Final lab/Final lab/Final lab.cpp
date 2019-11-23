#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void earth(void);
void mars (void);
void jupiter(void);
void venus(void);
void mercury(void);
void sattern(void);
void nepune(void);
void uranius(void);

struct earth
{
	double timea[3];
	double distance[3];

}e;
struct mars
{
	double timea[3];
	double distance[3];

}m;
struct jupiter
{
	float timea[3];
	float distance[3];

}j;
struct venus
{
	float timea[3];
	float distance[3];

}v;
struct murcury
{
	float timea[3];
	float distance[3];

}mu;
struct saturn
{
	float timea[3];
	float distance[3];

}s;
struct neptune
{
	float timea[3];
	float distance[3];

}n;
struct uranus
{
	float timea[3];
	float distance[3];

}u;
void main()
{
	
	string planet[9]={"Mercury","Venus", "Earth","Mars","Jupiter","saturn","Uranus","naptune","pluto"};
	for(int a=1;a<10;a++)
	{
    cout<<a<<planet[a];
	
	}
startover:
	int h;
	cout<<"Which Planet Do Want to observe?";
	cin>>h;
	switch(h)
	{
	case(1):
 earth ();
 char opt;
 cout<<"Do Want To Continue With Othe Planet (Y) Or (N)";
 if(opt=='Y')
 {
	 goto startover;
 }
 break;
	case 2:
 mars();
 break;
	}


	getch();
}
void earth(void)
{
	
	cout<<":There Are Three Satellite In Earth:\n\n1.ERS 1\n2.ERS 2\n3.ERS 3";
	cout<<"\nEnter Time Of 1st Satellite : ";
	cin>>e.timea[1];
	e.distance[1]=800.0*e.timea[1];
	cout<<"\nThe Distance B/w ERS 1 And Earth ="<<e.distance[1];
	cout<<"\nEnter Time Of 1st Satellite : ";
	cin>>e.timea[2];
	e.distance[2]=800.0*e.timea[2];
	cout<<"The Distance B/w ERS 2 And Earth ="<<e.distance[2];
	cout<<"Enter Time Of 1st Satellite : ";
	cin>>e.timea[1];
	e.distance[3]=800.0*e.timea[3];
	cout<<"The Distance B/w ERS 3 And Earth ="<<e.distance[3];
	if(e.distance[1]<e.distance[2] && e.distance[1]<e.distance[3])
	{
		cout<<"Satellite ERS-1 is Nearest to the planet Earth Distane ="<<e.distance[1];
	}
	if(e.distance[1]<e.distance[2] && e.distance[1]<e.distance[3])
	{
		cout<<"Satellite ERS-2 is Nearest to the planet Earth Distane ="<<e.distance[2];
	}
	if(e.distance[1]<e.distance[2] && e.distance[1]<e.distance[3])
	{
		cout<<"Satellite ERS-3 is Nearest to the planet Earth Distane ="<<e.distance[3];
	}

}
void mars (void)
{
	cout<<":There Are Three Satellite In Mars:\n\n1.ERS 1\n2.ERS 2\n3.ERS 3";
	cout<<"\nEnter Time Of 1st Satellite : ";
	cin>>m.timea[1];
	m.distance[1]=800.0*m.timea[1];
	cout<<"\nThe Distance B/w ERS 1 And Mars ="<<m.distance[1];
	cout<<"\nEnter Time Of 1st Satellite : ";
	cin>>m.timea[2];
	m.distance[2]=800.0*m.timea[2];
	cout<<"The Distance B/w ERS 2 And Mars ="<<m.distance[2];
	cout<<"Enter Time Of 1st Satellite : ";
	cin>>e.timea[1];
	m.distance[3]=800.0*m.timea[3];
	cout<<"The Distance B/w ERS 3 And Mars ="<<m.distance[3];
	if(m.distance[1]<m.distance[2] && m.distance[1]<m.distance[3])
	{
		cout<<"Satellite ERS-1 is Nearest to the planet Mars Distane ="<<m.distance[1];
	}
	if(m.distance[1]<m.distance[2] && m.distance[1]<m.distance[3])
	{
		cout<<"Satellite ERS-2 is Nearest to the planet Mars Distane ="<<m.distance[2];
	}
	if(m.distance[1]<m.distance[2] && m.distance[1]<m.distance[3])
	{
		cout<<"Satellite ERS-3 is Nearest to the planet Mercury Distane ="<<m.distance[3];
	}


}
void jupiter(float j[9])
{


}
void venus(float v[9])
{


}
void mercury(float me[9])
{

}
void sattern(float s[9])
{


}
void nepune(float n[9])
{

}
void uranius(float u[9])
{


}


//#include <iostream>
//#include <conio.h>
//#include <string>
//using namespace std;
//struct mercury1
//{
//	int choice;
//	float time1;
//	float time2;
//	float time3;
//	float distance1;
//	float distance2;
//	float distance3;
//};
//struct venus1{
//	int choice;
//	float time4;
//	float time5;
//	float time6;
//	float distance4;
//	float distance5;
//	float distance6;
//};
//
//
//void mercury(void)
//{
//	mercury1 c;
//	cout << "There are there for Mercury " << endl << endl;
//cout << "1. ERS-1A " << endl;
//cout << "2. ERS-1B " << endl;
//cout << "3. ERS-1C " << endl;
//
//	cout<< "Enter time for ERS-1A : ";
//	cin >> c.time1;	
//	c.distance1 = 800.0*c.time1;
//	cout <<"The Distance betweem ERS-1A and Mercury is : " << c.distance1 << endl;
//	cout<< "Enter time for ERS-1B : ";
//	cin >> c.time2;
//	c.distance2 = 800.0*c.time2;
//	cout <<"The Distance betweem ERS-1B and Mercury is : " << c.distance2 << endl;
//	cout<< "Enter time for ERS-1C : ";
//	cin >> c.time3;
//	c.distance3 = 800.0*c.time3;
//	cout <<"The Distance betweem ERS-1C and Mercury is : " << c.distance3 << endl;
//	if(c.distance1 < c.distance2 && c.distance1 <c.distance3){
//	cout << "Satellite ERS-1A is Nearest to the planet Mercury " << endl;
//	} else if(c.distance2 <c.distance1 && c.distance2 < c.distance3){
//	cout << "Satellite ERS-1B is Nearest to the planet Mercury " << endl;
//	
//	}else if(c.distance3 < c.distance1 && c.distance3 < c.distance2 ){
//	cout << "Satellite ERS-1C is Nearest to the planet Mercury " << endl;
//	} 
//
//}
//void Venus(void){
//	venus1 v;
//	cout << "There are there for Venus " << endl << endl;
//cout << "1. ERS-2A " << endl;
//cout << "2. ERS-2B " << endl;
//cout << "3. ERS-2C " << endl;
//
//	cout<< "Enter time for ERS-2A : ";
//	cin >> v.time4;	
//	v.distance4 = 800.0*v.time4;
//	cout <<"The Distance betweem ERS-2A and venus is : " << v.distance4 << endl;
//	cout<< "Enter time for ERS-2B : ";
//	cin >> v.time5;
//	v.distance5 = 800.0*v.time5;
//	cout <<"The Distance betweem ERS-2B and venus is : " << v.distance5 << endl;
//	cout<< "Enter time for ERS-2C : ";
//	cin >> v.time6;
//	v.distance6 = 800.0*v.time6;
//	cout <<"The Distance betweem ERS-2C and venus is : " << v.distance6 << endl;
//	if(v.distance4 < v.distance5 && v.distance4 <v.distance6){
//	cout << "Satellite ERS-2A is Nearest to the planet venus " << endl;
//	} else if(v.distance5 <v.distance4 && v.distance5 < v.distance6){
//	cout << "Satellite ERS-2B is Nearest to the planet venus " << endl;
//	
//	}else if(v.distance6 < v.distance4 && v.distance6 < v.distance5 ){
//	cout << "Satellite ERS-2C is Nearest to the planet venus " << endl;
//	} 
//}
//void main()
//{
//int i;
//string yesno;
//	
//	cout << "\t\t\t\t\tNASA Satellite Monitoring System" << endl << endl;
//	cout << "\t\t\t\t\t\tMAIN MENU " << endl <<endl;
//	cout << "1. Satellite Orbit" << endl;
//	cout << "2. Satellite Types " << endl;
//	cout << "3. Satellite Timings " << endl;
//	cout << "4. satellite Range " << endl;
//	cout << "5. Satellite Frequency " << endl;
//	
//	string planets[10] = {"Mercury","Venus", "Earth","Mars","Jupiter","saturn","Uranus","naptune","pluto"};
//	cout << "Planets "  << endl <<endl;
//	for(i = 0;i <9; i++){
//	cout << i+1 << "  "<< planets[i] << endl; 
//	
//	}
//	startover:
//	cout << "Which planet you are willing to observer : ";
//	cin >> i;	
//	switch(i){
//	case 1:
//		{
//	cout << "You are willing to observe " << planets[i-1] << endl;
//	    mercury();
//		cout << "Do you want to continue with the next planet : ";
//		cin >> yesno;
//		if(yesno == "yes"){
//		goto startover;
//		
//		}
//	
//		}break;
//	case 2: {		
//		cout << "You are willing to observe " << planets[i-1] << endl;	
//			Venus();
//			}break;
//	case 3: {
//			cout << "You are willing to observe " << planets[i-1] << endl;
//			}break;
//	case 4:{
//		   cout << "You are willing to observe " << planets[i-1] << endl;
//		   }break;
//	case 5:{
//		   cout << "You are willing to observe " << planets[i-1] << endl;
//		   }break;
//	case 6: {
//			cout << "You are willing to observe " << planets[i-1] << endl;
//			
//			}break;
//	case 7 :{
//			cout << "You are willing to observe " << planets[i-1] << endl;
//			}break;
//	case 8: {
//			cout << "You are willing to observe " << planets[i-1] << endl;
//			}break;
//	case 9 :{
//			cout << "You are willing to observe " << planets[i-1] << endl;
//			
//			}break;
//		}
//getch();
//}