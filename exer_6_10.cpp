#include <iostream.h>
#include <iomanip.h>
float fun(float h)
{
	long t;
	t=(h*1000+5)/10;
	return(float)t/100;
}
void main()
{
	float a;
	cout<<"Plase enter a positive number:"<<endl;
	cin>>a;
	cout<<"The result:"<<fun(a)<<endl;
}