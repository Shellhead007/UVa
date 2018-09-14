#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n,position,b[110],j; string s;
	while(t--)
	{
		position = 0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
		cin>>s;
	    
	    if(s=="LEFT")
	    {
	    	position = position-1;
	    	b[i]=-1;
		}
		else if(s=="RIGHT")
		{
			position = position+1;
			b[i]=1;
		}
		else
		{
			cin>>s;
			cin>>j;
			if(b[j]==-1)
			{
					position = position-1;
			}
			else
			{
					position = position+1;
						
			}
			b[i]=b[j];
		
		}
		
	}
	cout<<position<<endl;
	}
	return 0;
	
}
