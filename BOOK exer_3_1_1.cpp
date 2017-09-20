#include <iostream.h>
void main()
{
     int x;
     cout<<"please input x:"<<endl;
     cin>>x;
     if(x<10)
           cout<<x<<"属于第一类"<<endl;
     else 
		   if(10<=x&&x<=99)
                cout<<x<<"属于第二类"<<endl;
           else 
			    if(100<=x&&x<=999)
                     cout<<x<<"属于第三类"<<endl;
                else
		             cout<<x<<"属于第四类"<<endl;
}