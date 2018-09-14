#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;int works;int c=1;
	while(cin>>s1)
	{
		int n,i,j,min1,max1;
	    cin>>n;
	    cout<<"Case :"<<c++<<endl;
	    while(n--)
	    {
	    	works=1;
	    	cin>>i>>j;
	    	if(i==j)
            {
            	cout<<"Yes"<<endl;
            	continue;
			}
	    	
	    	min1 = min(i,j);
	    	max1 = max(i,j);
	    	
	     	for(int x=min1;x<max1;++x)
	    	{
	    		if(s1[x]!=s1[max1])
	    		{
	    		   works=0;
				   cout<<"No"<<endl;
				   break;	
				}
			}
			if(works)
			{
				cout<<"Yes"<<endl;
			}
			
			
		}
		getchar();
	
	}
		return 0;
}
