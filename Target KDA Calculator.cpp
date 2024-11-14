//Target KDA calculator 19 Aug 2018
#include <bits/stdc++.h>
#include <windows.h> 
#include <math.h> 
using namespace std; 

int main()
{
	float k,t,r,x,X;
	while (true)
	{
		cout<<"Enter total number of games : ";
		cin>>t;		
		cout<<"Enter average KDA : ";
		cin>>k;
		cout<<"Enter target KDA : ";
		cin>>r;
		
		x = r * (t+1) - k * t;	
		
		if ( int(x) == x ) 
			cout<<"You need to achieve a KDA of "<<x<<" on your next game to get a KDA of "<<r<<"."<<'\n';
		else
		{
			X = ceil(x);
			cout<<"Get "<<X<<" KDA on your next game and you'll get "<<(X+k*t)/(1+t)<<" average KDA."<<'\n';
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