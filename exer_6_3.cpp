#include <iostream.h>
#include <iomanip.h>
void main()
{
	int i,j,sum=0;
	int a[4][4];
	cout<<"请输入16个数："<<endl;
    for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
	 for(i=0;i<4;i++)
	 {	
		 for(j=0;j<4;j++)
	    if(i==j)
			   sum+=a[i][j];
		cout<<sum<<endl;
	 }
 for(i=0;i<4;i++)
	 {	
	 for(j=0;j<4;j++)
	     if(i<j)
			a[i][j]=a[i][j]+1;
		 else
			 if(i>j)
            a[i][j]=a[i][j]-1;
			 else
				 a[i][j]=a[i][j];
 }
    cout<<"新的矩阵为："<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			cout<<setw(4)<<a[i][j]<<" ";
		cout<<"\n";
	}
}
