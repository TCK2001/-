#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;
//1 ���� 2���� 3��
 
int match(int check)
{
	if(check==1)
	{
		cout<<"����"<<endl; 
	}
	else if(check==2)
	{
		cout<<"����"<<endl;
	}
	else if(check==3)
	{
		cout<<"��"<<endl;
	}
}

int main()
{
	srand(time(NULL));
	cout<<"���������� ���ӿ� ���Ű��� ȯ���մϴ�."<<endl;
	cout<<"������ 4������ �����Ͽ� ����� ���� �ֽ��ϴ�!. �� ��� ����� 5��޷�!"<<endl;
	system("pause");
	int com1,com2,com3,user;
	int com1w,com2w,com3w,userw;
	int com1fw,com2fw,com3fw,userfw;
	string userin;
	
l:	com1=rand()%3+1;
	cout<<"��ǻ�� 1�� ����!"<<endl;
	match(com1);
	
	cout<<"��ǻ�� 2�� ����!"<<endl;
	com2=rand()%3+1;
	match(com2);
	 
	if(com1==1&&com2==2)
	{
		cout<<"��ǻ��2�� �¸�!"<<endl;
		com2w=1;
	}
	else if(com1==1&&com2==1)
	{
		cout<<"���º�!"<<endl;
		goto l;
		com1w=0;
		com2w=0;
	}
	else if(com1==1&&com2==3)
	{
		cout<<"��ǻ��1�� �¸�!"<<endl;
		com1w=1; 
	}
	else if(com1==2&&com2==1)
	{
		cout<<"��ǻ��1�� �¸�!"<<endl; 
		com1w=1;
	}
	else if(com1==2&&com2==2)
	{
		cout<<"���º�!"<<endl; 
		goto l;
		com1w=0;
		com2w=0;
	}
	else if(com1==2&&com2==3)
	{
		cout<<"��ǻ��2�� �¸�!"<<endl; 
		com2w=1;
	}
	else if(com1==3&&com2==1)
	{
		cout<<"��ǻ��2�� �¸�!"<<endl;
		com2w=1; 
	}
	else if(com1==3&&com2==2)
	{
		cout<<"��ǻ��1�� �¸�!"<<endl; 
		com1w=1;
	}
	else if(com1==3&&com2==3)
	{
		cout<<"���º�!"<<endl;
		goto l;
		com1w=0;
		com2w=0; 
	}
	
b:	com3=rand()%3+1;
a:	cout<<"���� ���� �� �� �ϳ��� �Է��ϼ���!"<<endl; 
	cin>>userin;
	if(userin=="����"||userin=="����"||userin=="��") 
	{
		cout<<"��ǻ�� 3�� ����!"<<endl;
		match(com3);
	}
	else
	{
		cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
		goto a;
	}
	if(userin=="����"&&com3==1)
	{
		cout<<"���º�!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else if(userin=="����"&&com3==2)
	{
		cout<<"��ǻ��3 �¸�!"<<endl;
		com3w=1;
	}
	else if(userin=="����"&&com3==3)
	{
		cout<<"���� �¸�!"<<endl;
		userw=1;
	}
	else if(userin=="����"&&com3==1)
	{
		cout<<"���� �¸�!"<<endl;
		userw=1;
	}
	else if(userin=="����"&&com3==2)
	{
		cout<<"���º�!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else if(userin=="����"&&com3==3)
	{
		cout<<"��ǻ��3 �¸�!"<<endl;
		com3w=1;
	}
	else if(userin=="��"&&com3==1)
	{
		cout<<"��ǻ��3 �¸�!"<<endl;
		com3w=1;
	}
	else if(userin=="��"&&com3==2)
	{
		cout<<"���� �¸�!"<<endl;
		userw=1;
	}
	else if(userin=="��"&&com3==3)
	{
		cout<<"���º�!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else
	{
		cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
		goto a;
	}

	if(com1w==1&&com3w==1)
	{
c:		com1=rand()%3+1;
		cout<<"��ǻ�� 1�� ����!"<<endl;
		match(com1);
		com3=rand()%3+1;
		cout<<"��ǻ�� 3�� ����!"<<endl;
		match(com3);
		if(com1==1&&com3==2)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl;
			com3fw=1;
		}
		else if(com1==1&&com3==1)
		{
			cout<<"���º�!"<<endl;
			goto c;
		}
		else if(com1==1&&com3==3)
		{
			cout<<"��ǻ��1�� �¸�!"<<endl; 
			com1fw=1;
		}
		else if(com1==2&&com3==1)
		{
			cout<<"��ǻ��1�� �¸�!"<<endl; 
			com1fw=1;
		}
		else if(com1==2&&com3==2)
		{
			cout<<"���º�!"<<endl; 
			goto c;
		}
		else if(com1==2&&com3==3)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl; 
			com3fw=1;
		}
		else if(com1==3&&com3==1)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl;
			com3fw=1;
		}
		else if(com1==3&&com3==2)
		{
			cout<<"��ǻ��1�� �¸�!"<<endl; 
			com1fw=1;
		}
		else if(com1==3&&com3==3)
		{
			cout<<"���º�!"<<endl;
			goto c;
		}
	}
	else if(com1w==1&&userw==1)
	{
f:		com1=rand()%3+1;
d:		cout<<"���� ���� �� �� �ϳ��� �Է��ϼ���!"<<endl; 
		cin>>userin;
		if(userin!="����"||userin!="����"||userin!="��") 
		{
			cout<<"��ǻ�� 1�� ����!"<<endl;
			match(com1);
		}
		else
		{
			cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
			goto f;
			
			
		}
		if(userin=="����"&&com1==1)
		{
			cout<<"���º�!"<<endl;
			goto d;
		}
		else if(userin=="����"&&com1==2)
		{
			cout<<"��ǻ��1 �¸�!"<<endl;
			com1fw=1;
		}
		else if(userin=="����"&&com1==3)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
			
		}
		else if(userin=="����"&&com1==1)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
		}
		else if(userin=="����"&&com1==2)
		{
			cout<<"���º�!"<<endl;
			goto d;
		}
		else if(userin=="����"&&com1==3)
		{
			cout<<"��ǻ��1 �¸�!"<<endl;
			com1fw=1;
		}
		else if(userin=="��"&&com1==1)
		{
			cout<<"��ǻ��1 �¸�!"<<endl;
			com1fw=1;
		}
		else if(userin=="��"&&com1==2)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
		}
		else if(userin=="��"&&com1==3)
		{
			cout<<"���º�!"<<endl;
			goto d;
		}
		else
		{
			cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
			goto f;
		}
	}	
	else if(com2w==1&&com3w==1)
	{
g:		com2=rand()%3+1;
		cout<<"��ǻ�� 2�� ����!"<<endl;
		match(com2);
		com3=rand()%3+1;
		cout<<"��ǻ�� 3�� ����!"<<endl;
		match(com3);
		if(com2==1&&com3==2)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl;
			com3fw=1;
		}
		else if(com2==1&&com3==1)
		{
			cout<<"���º�!"<<endl;
			goto g;
		}
		else if(com2==1&&com3==3)
		{
			cout<<"��ǻ��2�� �¸�!"<<endl; 
			com2fw=1;
		}
		else if(com2==2&&com3==1)
		{
			cout<<"��ǻ��2�� �¸�!"<<endl; 
			com2fw=1;
		}
		else if(com2==2&&com3==2)
		{
			cout<<"���º�!"<<endl; 
			goto g;
		}
		else if(com2==2&&com3==3)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl;
			com3fw=1; 
		}
		else if(com2==3&&com3==1)
		{
			cout<<"��ǻ��3�� �¸�!"<<endl;
			com3fw=1;
		}
		else if(com2==3&&com3==2)
		{
			cout<<"��ǻ��2�� �¸�!"<<endl;
			com2fw=1 ;
		}
		else if(com2==3&&com3==3)
		{
			cout<<"���º�!"<<endl;
			goto g;
		}
	}
	else if(com2w==1&&userw==1)
	{
i:		com2=rand()%3+1;
h:		cout<<"���� ���� �� �� �ϳ��� �Է��ϼ���!"<<endl; 
		cin>>userin;
		if(userin!="����"||userin!="����"||userin!="��") 
		{
			cout<<"��ǻ�� 2�� ����!"<<endl;
			match(com2);
		}
		else
		{
			cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
			goto h;	
		}
		
		if(userin=="����"&&com2==1)
		{
			cout<<"���º�!"<<endl;
			goto i;
		}
		else if(userin=="����"&&com2==2)
		{
			cout<<"��ǻ��2 �¸�!"<<endl;
			com2fw=1;
		}
		else if(userin=="����"&&com2==3)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
		}
		else if(userin=="����"&&com2==1)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
		}
		else if(userin=="����"&&com2==2)
		{
			cout<<"���º�!"<<endl;
			goto i;
		}
		else if(userin=="����"&&com2==3)
		{
			cout<<"��ǻ��2 �¸�!"<<endl;
			com2fw=1;
		}
		else if(userin=="��"&&com1==1)
		{
			cout<<"��ǻ��2 �¸�!"<<endl;
			com2fw=1;
		}
		else if(userin=="��"&&com2==2)
		{
			cout<<"���� �¸�!"<<endl;
			userfw=1;
		}
		else if(userin=="��"&&com2==3)
		{
			cout<<"���º�!"<<endl;
			goto i;
		}
		else
		{
			cout<<"�ٽ� �Է��� �ֽʽÿ�!"<<endl;
			goto h;
		}
	}
	
	if(com1fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<������ ����ڴ� ��ǻ��1 �Դϴ�!!! �����մϴ�>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}
	else if(com2fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<������ ����ڴ� ��ǻ��2 �Դϴ�!!! �����մϴ�>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}	
	else if(com3fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<������ ����ڴ� ��ǻ��3 �Դϴ�!!! �����մϴ�>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}
	else if(userfw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<������ ����ڴ� ���� �Դϴ�!!! �����մϴ�>**********"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;		
	}		
	

return 0;
}

