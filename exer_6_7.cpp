#include <iostream.h>
#define M 3
#define N 3
int main()
{
	int i,j,k,i0,jmax,find=0;
	int a[N][M];
	cout<<"������9������"<<endl;
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			cin>>a[i][j];
	for(i=0;i<M;i++)
	{
		jmax=0;
		for(j=1;j<N;j++)
			if(a[i][j]>a[i][jmax])
				jmax=j;
			for(i0=0;i0<M;i0++)
				if(a[i0][jmax]>a[i0][j])
					k=1;
				if(k=1)
				{
					cout<<"�˾���İ�����"<<"a["<<i<<"]["<<jmax<<"]="<<a[i][jmax]<<endl;
					find=1;
				}
	}
				if(find!=1)
					cout<<"�˾����ް��㣡"<<endl;
				return 0;
				}