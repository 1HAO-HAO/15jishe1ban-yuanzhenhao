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
	case 1:cout<<"����Ϊ��һ��"<<endl;break;
	case 2:cout<<"����Ϊ�ڶ���"<<endl;break;
	case 3:cout<<"����Ϊ������"<<endl;break;
	default:cout<<"����Ϊ������"<<endl;
	}
}