#include <iostream.h>
void main()
{
	int year,month,date;
	cout<<"Please iput year month date:"<<endl;
	cin>>year>>month>>date;
	if((year%400==0)||(year%4==0&&year%100!=0))
       switch(month)
	   {
	    case 1:cout<<"�����Ǹ���ĵ�"<<date<<"��"<<endl;break;
		case 2:cout<<"�����Ǹ���ĵ�"<<date+31<<"��"<<endl;break;
    	case 3:cout<<"�����Ǹ���ĵ�"<<date+60<<"��"<<endl;break;
    	case 4:cout<<"�����Ǹ���ĵ�"<<date+91<<"��"<<endl;break;
    	case 5:cout<<"�����Ǹ���ĵ�"<<date+121<<"��"<<endl;break;
    	case 6:cout<<"�����Ǹ���ĵ�"<<date+152<<"��"<<endl;break;
    	case 7:cout<<"�����Ǹ���ĵ�"<<date+182<<"��"<<endl;break;
    	case 8:cout<<"�����Ǹ���ĵ�"<<date+213<<"��"<<endl;break;
	    case 9:cout<<"�����Ǹ���ĵ�"<<date+244<<"��"<<endl;break;
    	case 10:cout<<"�����Ǹ���ĵ�"<<date+274<<"��"<<endl;break;
    	case 11:cout<<"�����Ǹ���ĵ�"<<date+305<<"��"<<endl;break;
    	case 12:cout<<"�����Ǹ���ĵ�"<<date+335<<"��"<<endl;break;
	}  
    else
      switch(month)
	{
	    case 1:cout<<"�����Ǹ���ĵ�"<<date<<"��"<<endl;break;
		case 2:cout<<"�����Ǹ���ĵ�"<<date+31<<"��"<<endl;break;
    	case 3:cout<<"�����Ǹ���ĵ�"<<date+59<<"��"<<endl;break;
    	case 4:cout<<"�����Ǹ���ĵ�"<<date+90<<"��"<<endl;break;
    	case 5:cout<<"�����Ǹ���ĵ�"<<date+120<<"��"<<endl;break;
    	case 6:cout<<"�����Ǹ���ĵ�"<<date+151<<"��"<<endl;break;
    	case 7:cout<<"�����Ǹ���ĵ�"<<date+181<<"��"<<endl;break;
    	case 8:cout<<"�����Ǹ���ĵ�"<<date+212<<"��"<<endl;break;
	    case 9:cout<<"�����Ǹ���ĵ�"<<date+243<<"��"<<endl;break;
    	case 10:cout<<"�����Ǹ���ĵ�"<<date+273<<"��"<<endl;break;
    	case 11:cout<<"�����Ǹ���ĵ�"<<date+304<<"��"<<endl;break;
    	case 12:cout<<"�����Ǹ���ĵ�"<<date+334<<"��"<<endl;break;
	}    
}