#include<iostream>
using namespace std;
long g(long x)
{
        if(x<10){return x;}
        long sum = 0;
        long temp = x;
       
        while(temp>0){
                sum+=temp%10;
                temp/=10;
        }
        return g(sum);
}
int main ()
{
        long num , result;
        while(cin>>num)
        {
                if(num==0)
                        break;
                else{
                        result = g(num);
                        cout<<result<<endl;
                }
        }
        return 0;
}

