#include <iostream.h>
#include <math.h>
void main()
{
	float a,b,c,s;
	cout<<"请输入三个数:"<<endl;
	cin>>a>>b>>c;
	if(a+b>c)
       s=(a+b+c)/2;
       cout<<"该三角形的面积是:"<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
	else
         cout<<"三个数不能构成三角形的三边"<<endl;
}