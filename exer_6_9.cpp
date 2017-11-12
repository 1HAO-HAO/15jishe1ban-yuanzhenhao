#include "iostream.h"
void fun(int n)
{
	int t,i;
for(i=1;i<=n;i++)
{
	if((i%7==0)||(i%11==0))
	{
		cout<<i<<" ";
		t++;
	}
}
	return t;
}
void main()
{
	int m,y;
	cout<<"Please enter a number:"<<endl;
	cin>>m;
	y=fun(m);
	cout<<"1到"<<m<<"之内（含"<<m<<"）"<<"能被7或11整除的数为";
   cout<<"个数为"<<y<<endl;
}