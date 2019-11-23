#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int opt;

	cout<<"(1)Zinger (2)Tikka (3)Broast"<<"\nEnter Item Code : ";
	cin>>opt;
	switch(opt)
	{	
case (1):
			int x;
			cout<<"Enter Quantity : ";
			cin>>x;
			
				int zinger;
				zinger=x*170;
				cout<<"|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n    S.No"<<"         Item"<<"               Quantity"<<"         Price"<<"        Total Price";
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n     1  "<<"        Zinger                  "<<x<<"            170  "<<"           "<<zinger; 
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				
				cout<<"\n\n|-----------|-----------------------------------------------------------------|";
				cout<<"\n   Total                                                            ="<<zinger;
				cout<<"\n|-----------|-----------------------------------------------------------------|";
				char optt;
				cout<<"\n\n\nPress Yes 'Y' Or Not 'N'"<<"\n\nDo Want To Buy More : ";
				cin>>optt;
				if(optt=='Y' || optt=='y')
				{
					main();

				}
				else
				{
					cout<<"Thanks For Buy";

				}
				break;
				case (2):
			int y;
			cout<<"Enter Quantity : ";
			cin>>y;
			
				int tikka;
				tikka=y*150;
				cout<<"|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n    S.No"<<"         Item"<<"               Quantity"<<"         Price"<<"        Total Price";
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n     1  "<<"         Tikka                  "<<y<<"            150  "<<"           "<<tikka; 
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				
				cout<<"\n\n|-----------|-----------------------------------------------------------------|";
				cout<<"\n   Total                                                            ="<<tikka;
				cout<<"\n\n|-----------|-----------------------------------------------------------------|";
				char opttt;
				cout<<"\n\n\nPress Yes 'Y' Or Not 'N'"<<"\n\nDo Want To Buy More : ";
				cin>>opttt;
				if(opttt=='Y' || optt=='y')
				{
					main();

				}
				else
				{
					cout<<"Thanks For Buy";

				}
				break;
				case (3):
			int z;
			cout<<"Enter Quantity : ";
			cin>>z;
			
				int broast;
				broast=z*170;
				cout<<"|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n    S.No"<<"         Item"<<"               Quantity"<<"         Price"<<"        Total Price";
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				cout<<"\n     1  "<<"        Broast                  "<<z<<"            170  "<<"           "<<broast; 
				cout<<"\n|-----------|-----------------|-----------------|--------------|--------------|";
				
				cout<<"\n\n|-----------|-----------------------------------------------------------------|";
				cout<<"\n   Total                                                            ="<<broast;
				cout<<"\n|-----------|-----------------------------------------------------------------|";
				char opti;
				cout<<"\n\n\nPress Yes 'Y' Or Not 'N'"<<"\n\nDo Want To Buy More : ";
				cin>>opti;
				if(opti=='Y' || opti=='y')
				{
					main();

				}
				else
				{
					cout<<"Thanks For Buy";
				}
				break;
					default:
					cout<<"\nCode Is Out Of Range";
	}
	
	
			


	getch();
}