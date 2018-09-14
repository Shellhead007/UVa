#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{ 
	  
	  if(s=="DONE")
	  break;
	  else
	  {
	  	string str = "",out;
	  	for(int i=0;i<s.size();i++)
	  	{
	  		if(isalpha(s[i]))
	  		{
	  			str+=tolower(s[i]);
	  			
			}
		}
		  out = str;
		  reverse(str.begin() , str.end());
		  if(out==str)
		  {
		  	cout<<"You won't be eaten!"<<endl;
		  }
		  else
		  {
		  	cout<<"Uh oh..."<<endl;
		  }

	  }
    }
    return 0;

}



