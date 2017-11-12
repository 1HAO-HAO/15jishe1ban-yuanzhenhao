
#include "iostream.h"
float S(int n)
{
 float t=0.0;
 int a=0,i;
 for(i=1;i<=n;i++)
 {
	 a+=i;
 t+=(float)1/a;
 }
return t;
}
 void main()
 {
	 int n;
	 float y;
	 cout<<"Please enter an integer n:";
	 cin>>n;
	 y=S(n);
	 cout<<"S="<<y<<endl;
 }