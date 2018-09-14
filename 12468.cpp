#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

	
	
		int a,b,n;
		
	
		while(cin>>a>>b)
		{
			  if(a==-1 && b==-1)  break;
			n = abs(a-b);
			if(n>=50)
			{
				n = 100-n;
			}
			
		
	/*	if(a<=50&&b<=50)
		{
			n = abs(a-b);
		
		}
		else
		{
			n = abs(a-b+99+1);
			
		}*/
	
		cout<<n<<endl;
	}
	return 0;
}
