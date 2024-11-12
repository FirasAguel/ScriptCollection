#include <bits/stdc++.h>
#include <windows.h> 
#include <math.h> 
using namespace std; 

int main()
{
	float w,t,RR,r,x,X,cwr;
	while (true)
	{
		cout<<"Enter number of wins : ";
		cin>>w;
		cout<<"Enter total number of games : ";
		cin>>t;
		cout<<"Enter target win rate : ";
		cin>>RR;
		r= RR/100;
		x = (r*t-w)/(1-r);
		cwr = w/t;
		if ( cwr  >= r )
		{
			cout<<"You already achieved that win rate."<<'\n';
			cout<<"current win rate : "<<cwr *100<<"% \n";
		}
		else if ( x <= 1.01 ) 
			cout<<"You need to win 1 game."<<'\n';
		else if ( int(x) == x ) 
			cout<<"You need to win "<<x<<" games."<<'\n';
		else
		{
			X = ceil(x);
			cout<<"current win rate : "<<cwr *100<<"% \n";
			cout<<"Win "<<X<<" games and you'll get "<<(X+w)/(X+t)*100<<"% win rate."<<'\n';
		}
		Sleep(1000);
		cout<<"."<<'\n';
		Sleep(1000);
		cout<<"."<<'\n';
		Sleep(1000);
		cout<<"."<<'\n';
		Sleep(1000);
		cout<<"."<<'\n';
		Sleep(1000);
		cout<<"."<<'\n';
		Sleep(1000);
		system("CLS");
	}
}