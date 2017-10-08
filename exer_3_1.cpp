#include <iostream.h>
void main()
{
	int k,t;
	t=0;
	cout<<"Please input a integer:"<<endl;
	cin>>k;
	while(k>=1)
	{
		k=k/10;
		t++;
	}
	cout<<t<<endl;
	switch(t)
	{
	case 1:cout<<"该数为第一类"<<endl;break;
	case 2:cout<<"该数为第二类"<<endl;break;
	case 3:cout<<"该数为第三类"<<endl;break;
	default:cout<<"该数为第四类"<<endl;
	}
}