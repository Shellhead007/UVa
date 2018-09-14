#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n;	string number;
	cin>>n;
	while(n--)
	{
		string number;
		cin>>number;
		
		number.erase(2,1);
		
	    	
	   
		cout<<number[0]<<number[1]<<":"<<number[2]<<number[3]<<endl;
		
		
	}
	return 0;
}
