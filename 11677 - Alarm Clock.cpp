#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int h1,m1,h2,m2;
	while(cin>>h1>>m1>>h2>>m2)
	{
		int rem1=0,rem2=0,ans,ans1;
		if(h1==0 &&m1==0 &&h2==0&& m2==0)
		{
			break;
		}
		else
		{
			h1 = h1*60;
			rem1 = h1+m1;
			
			h2 = h2*60;
			rem2 = h2+m2;
			 if(rem1>rem2)
			 {
			 	rem2 = rem2+(60*24);
			 }
			
					}
	cout<<rem2-rem1<<endl;

	}
	return 0;
}
