//finding the root using bisection 
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x);
double f(double x)
{
	double a=3*x-cos(x)-1.0;
	return a;
}
int main()
{
	cout.precision(5);
	cout.setf(ios::fixed);
	double a,b,c,e,fa,fb,fc;
	cout<<"enter the degree of accuracy desired"<<endl;
    cin>>e;
    t:cout<<"please enter the left interval"<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	if(f(a)*f(b)>0)
	{
		cout<<"there is no root in"<<"["<<a<<","<<b<<"]"<<endl;
		goto t;
	}
	else if(f(a)==0)
	{
		cout<<"the root is"<<a<<endl;
		}
		else if(f(b)==0)
		{
		cout<<"the root is"<<b<<endl;	
			}
	else
	{
		while(fabs(a-b)>=e)
		{
			c=(a+b)/2.0;
			fa=f(a);fb=f(b);fc=f(c);
			cout<<"a="<<a<<" "<<"b="<<b<<" "<<endl;
			if(fc==0)
			{
			//cout<<"the root is "<<c<<endl;
			break;	
			}
			if(fa*fc>0)
			{
				a=c;
			}	
			else if(fa*fc<0)
			{
				b=c;
			}
						}
		}
	cout<<"the root is"<<c<<endl;
	return 0;	
}

