#include <iostream.h>
void main()
{
	int year,month,date;
	cout<<"Please iput year month date:"<<endl;
	cin>>year>>month>>date;
	if((year%400==0)||(year%4==0&&year%100!=0))
       switch(month)
	   {
	    case 1:cout<<"这天是该年的第"<<date<<"天"<<endl;break;
		case 2:cout<<"这天是该年的第"<<date+31<<"天"<<endl;break;
    	case 3:cout<<"这天是该年的第"<<date+60<<"天"<<endl;break;
    	case 4:cout<<"这天是该年的第"<<date+91<<"天"<<endl;break;
    	case 5:cout<<"这天是该年的第"<<date+121<<"天"<<endl;break;
    	case 6:cout<<"这天是该年的第"<<date+152<<"天"<<endl;break;
    	case 7:cout<<"这天是该年的第"<<date+182<<"天"<<endl;break;
    	case 8:cout<<"这天是该年的第"<<date+213<<"天"<<endl;break;
	    case 9:cout<<"这天是该年的第"<<date+244<<"天"<<endl;break;
    	case 10:cout<<"这天是该年的第"<<date+274<<"天"<<endl;break;
    	case 11:cout<<"这天是该年的第"<<date+305<<"天"<<endl;break;
    	case 12:cout<<"这天是该年的第"<<date+335<<"天"<<endl;break;
	}  
    else
      switch(month)
	{
	    case 1:cout<<"这天是该年的第"<<date<<"天"<<endl;break;
		case 2:cout<<"这天是该年的第"<<date+31<<"天"<<endl;break;
    	case 3:cout<<"这天是该年的第"<<date+59<<"天"<<endl;break;
    	case 4:cout<<"这天是该年的第"<<date+90<<"天"<<endl;break;
    	case 5:cout<<"这天是该年的第"<<date+120<<"天"<<endl;break;
    	case 6:cout<<"这天是该年的第"<<date+151<<"天"<<endl;break;
    	case 7:cout<<"这天是该年的第"<<date+181<<"天"<<endl;break;
    	case 8:cout<<"这天是该年的第"<<date+212<<"天"<<endl;break;
	    case 9:cout<<"这天是该年的第"<<date+243<<"天"<<endl;break;
    	case 10:cout<<"这天是该年的第"<<date+273<<"天"<<endl;break;
    	case 11:cout<<"这天是该年的第"<<date+304<<"天"<<endl;break;
    	case 12:cout<<"这天是该年的第"<<date+334<<"天"<<endl;break;
	}    
}