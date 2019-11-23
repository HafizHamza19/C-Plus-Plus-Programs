#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
using namespace std;
struct ct
{
	int opt;
	char o;
	char won;
	int eng;
	int pak;
	int aus;
	int ind;
	int ban;
	int sa;
	int nz;
	int sl;
}c;
void main()
{
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<"Time="<<dt;
	string teams[13]={"1st Match:England vs Bangladesh","2nd Match:Australia vs New Zealand","3rd Match:Sri Lanka vs South Africa","4th Match:India vs Pakistan","5th Match:Australia vs Bangladesh","6th Match:England vs New Zealand","7th Match:Pakistan vs South Africa ","8th Match:India vs Sri Lanka","9th Match:New Zealand vs Bangladesh","10th Match:England vs Australia","11th Match:India vs South Africa","12th Match:Sri Lanka vs Pakistan"};

	cout<<"\n\n==============ICC Champion Trophy 2017 Schedule=============\n\n";
	cout<<"\n1.Pakistan\n2.India\n3.Australia\n4.England\n5.Newzealand\n6.Srilanka\n7.South Africa\n8.Bangladesh";
	cout<<"\n\nWhich Team Do You Want To See Schedule : ";
	cin>>c.opt;
	switch(c.opt)
	{
	case 1:
      cout<<"\n\n     ********PAKISTAN Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   4-6-17    2:30PM    Pak Vs Ind     Birmingham";
	  cout<<"\n   7-6-17    5:30PM    Pak Vs S.A     Birmingham";
	  cout<<"\n   12-6-17   2:30Pm    Pak Vs S.L       Cardiff";
	  break;
	case 2:
      cout<<"\n\n     ********INDIA Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   4-6-17    2:30PM    Ind Vs Pak     Birmingham";
	  cout<<"\n   8-6-17    2:30PM    Ind Vs S.L       London";
	  cout<<"\n   11-6-17   2:30Pm    Ind Vs S.A       London";
	break;
	  case 3:
      cout<<"\n\n    ********AUSTRALIA Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   2-6-17    2:30PM    Aus Vs N.Z     Birmingham";
	  cout<<"\n   5-6-17    5:30PM    Aus Vs Ban       London";
	  cout<<"\n   10-6-17   2:30Pm    Aus Vs Eng     Birmingham";
	  break;
	  case 4:
      cout<<"\n\n    ********ENGLAND Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   1-6-17    2:30PM     Eng Vs Ban      London";
	  cout<<"\n   6-6-17    2:30PM     Eng Vs N.Z      Cardiff";
	  cout<<"\n   10-6-17   2:30Pm     Eng Vs Aus    Birmingham";
	  break;
	  case 5:
      cout<<"\n\n    ********NEWZEALAND Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   2-6-17    2:30PM    N.Z Vs Aus     Birmingham";
	  cout<<"\n   6-6-17    2:30PM    N.Z Vs Eng      Cardiff";
	  cout<<"\n   9-6-17    2:30Pm    N.Z Vs Ban       Cardiff";
	  break;
	  case 6:
      cout<<"\n\n    ********SRILANK Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   3-6-17    2:30PM    S.L Vs S.A       London";
	  cout<<"\n   8-6-17    2:30PM    S.L Vs Ind       London";
	  cout<<"\n   12-6-17   2:30PM    S.l Vs Pak       Cardiff";
	  break;
	  case 7:
      cout<<"\n\n    ********SOUTH AFRICA Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   3-6-17    2:30PM    S.A Vs S.L       London";
	  cout<<"\n   7-6-17    5:30PM    S.A Vs Pak     Birmingham";
	  cout<<"\n   11-6-17   2:30PM    S.A Vs Ind       London";
	  break;
	  case 8:
      cout<<"\n\n    ********BANGLADESH Schedule**********\n\n";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n    Date      Time        Match        Location";
	  cout<<"\n|----------|---------|-------------|-----------|";
	  cout<<"\n   1-6-17    2:30PM    Ban Vs Eng       London";
	  cout<<"\n   5-6-17    5:30PM    Ban Vs Aus       London";
	  cout<<"\n   9-6-17    2:30PM    Ban Vs N.Z       Cardiff";
	  break;
	  default:
		  {
			  cout<<"\n\nCode Is Out Of Range";
		  }
	}
	cout<<"\n\nDo Want To Generate Point Table Y/N : ";
	cin>>c.o;
	if(c.o=='y' || c.o=='Y')
	{
		cout<<"\n\n####  >>  CODE  <<  ####\n\nPak=p  Ind=i  S.L=l  S.A=s\nAus=a  N.Z=n  Eng=e  Ban=b";
		for(int b=0;b<12;b++)
		{
			cout<<"\n\n"<<teams[b];
		cout<<"\n\nWho Won This Match ?";
		cin>>c.won;
		if (c.won=='e')
		{
			c.eng++;
		}
		if (c.won=='p')
		{
			c.pak++;
		}
		if (c.won=='i')
		{
			c.ind++;
		}
		if (c.won=='a')
		{
			c.aus++;
		}
		if (c.won=='l')
		{
			c.sl++;
		}
		if (c.won=='b')
		{
			c.ban++;
		}
		if (c.won=='n')
		{
			c.nz++;
		}
		if (c.won=='s')
		{
			c.sa++;
		}
		}

		cout<<"\n\n\n      ***********Point Table Of Group A**************";      
		cout<<"\n\n|-----------|------------|";
		cout<<"\n\n| Team Name |   Points   |";
		cout<<"\n\n|-----------|------------|";
		cout<<"\n\nAustralia       "<<c.aus++*2;
		cout<<"\n\nNewzealand      "<<c.nz++*2;
		cout<<"\n\nEngland         "<<c.eng++*2;
		cout<<"\n\nBangladesh      "<<c.ban++*2;

		cout<<"\n\n      ***********Point Table Of Group B**************";      
		cout<<"\n\n|-----------|------------|";
		cout<<"\n\n| Team Name |   Points   |";
		cout<<"\n\n|-----------|------------|";
		cout<<"\n\nPakistan        "<<c.pak++*2;
		cout<<"\n\nSouth Africa    "<<c.sa++*2;
		cout<<"\n\nIndia           "<<c.ind++*2;
		cout<<"\n\nSrilanka        "<<c.sl++*2;
	}
	else
	{
		cout<<"\n\n$ Thank You $";
		
	}
	getch();
}
