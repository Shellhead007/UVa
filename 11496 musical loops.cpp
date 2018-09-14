#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	int count = 0;
	while(cin>>n)
	{
		if(n==0)
		break;
		
		else
		{
			long long int arr[n];
			
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
			arr[n] = arr[0];
			arr[n+1] = arr[1];
			count = 1;
			 
			 bool upward = false;
			 bool backward = false;
			 
			 if(arr[0]<arr[1])
			 upward = true;
			 else
			 backward = true;
			 
			for(int i=2;i<=n;i++)
			{
				if(upward && arr[i-1]>arr[i])
				{
					count++;
					upward = false;
			    	backward = true;
				}
				else if(backward && arr[i-1]<arr[i])
				{
					count++;
					upward = true;
					backward = false;
				}
			}
			 if ( upward && arr[n] < arr[n + 1] ) count--;
        else if ( backward && arr[n] > arr[n + 1] ) count--;
			
		}
		cout<<count<<endl;
	}
	return 0;
}
