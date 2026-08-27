//newton_raphson
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double ff(double x)
{
	double aa=pow(x,3)-pow(x,2)+2;
	return aa;
}
double gg(double x)
{
	double bb=3*pow(x,2)-2*x;
	return bb;
}
int main()
{
	cout.precision(7);
	cout.setf(ios::fixed);
	double x0,x1,temp,ep;
	int k=0;
	t:cout<<"enter the initial guess"<<endl;
	cout<<"x0=";
	cin>>x0;
    cout<<"enter the value of accuracy";
    cin>>ep;
    do
    {
		x1=x0-ff(x0)/gg(x0);
		temp=x0;
		x0=x1;
		x1=temp;
	k++;
	}while(fabs(x1-x0)>=ep);
    cout<<"the root is "<<x1<<endl;
	cout<<"the iteration number is "<<k<<endl;
	return 0;
}	
	
