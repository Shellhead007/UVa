#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)           // 3.14159 rad
double degToRad(double d)
{
    return d * PI / 180.0;
}
int main(int argc, char const *argv[])
{
	int l, w, h, theta;
	double ans;
	while((cin>>l>>w>>h>>theta))
	{	
		double hprime = tan(degToRad(theta)) * l;
        if (hprime <= h)
        {
            ans = l * (h - hprime / 2.0) * w;
        }
        else
        {
            theta = 90 - theta;
            ans = (h * tan(degToRad(theta)) * h / 2.0) * w;
        }
		printf("%.3lf mL\n", ans);
	}
	return 0;
}