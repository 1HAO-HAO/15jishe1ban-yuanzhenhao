#include <iostream.h>
void main()
{
     int x;
     cout<<"please input x:"<<endl;
     cin>>x;
     if(x<10)
           cout<<x<<"���ڵ�һ��"<<endl;
     else 
		   if(10<=x&&x<=99)
                cout<<x<<"���ڵڶ���"<<endl;
           else 
			    if(100<=x&&x<=999)
                     cout<<x<<"���ڵ�����"<<endl;
                else
		             cout<<x<<"���ڵ�����"<<endl;
}