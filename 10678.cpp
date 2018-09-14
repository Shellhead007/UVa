#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,d,l;
	cin>>t;
	while(t--)
	{
		cin>>d>>l;
		double a,b,A,pi = 2*acos(0);
		a = d/2.0;
		b = l/2.0;
		b = sqrt(b*b-a*a);
		a = a+(l-d)/2.0;
		A = pi*b;
		A = A*a;
		printf("%0.3lf\n",A);
	}
	return 0;
}