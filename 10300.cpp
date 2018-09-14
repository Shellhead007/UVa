#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int f,s,a,e;
		cin>>f;
		int sum=0, k[f];
		for(int i=0;i<f;i++){
		
		cin>>s>>a>>e;
		k[i] = s*e;
	   }
		for(int i=0;i<f;i++)
		{
			sum = sum+k[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
