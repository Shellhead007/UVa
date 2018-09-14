#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	while((cin>>n)&&n)
	{
		int t =(n*(n + 1)*(2*n + 1)/6);
		cout<<t<<endl;
    }
	return 0;
}
