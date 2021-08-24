#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;
//1 가위 2바위 3보
 
int match(int check)
{
	if(check==1)
	{
		cout<<"가위"<<endl; 
	}
	else if(check==2)
	{
		cout<<"바위"<<endl;
	}
	else if(check==3)
	{
		cout<<"보"<<endl;
	}
}

int main()
{
	srand(time(NULL));
	cout<<"가위바위보 게임에 오신것을 환영합니다."<<endl;
	cout<<"본경기는 4강부터 시작하여 결승전 까지 있습니다!. 총 우승 상금은 5백달러!"<<endl;
	system("pause");
	int com1,com2,com3,user;
	int com1w,com2w,com3w,userw;
	int com1fw,com2fw,com3fw,userfw;
	string userin;
	
l:	com1=rand()%3+1;
	cout<<"컴퓨터 1의 차례!"<<endl;
	match(com1);
	
	cout<<"컴퓨터 2의 차례!"<<endl;
	com2=rand()%3+1;
	match(com2);
	 
	if(com1==1&&com2==2)
	{
		cout<<"컴퓨터2의 승리!"<<endl;
		com2w=1;
	}
	else if(com1==1&&com2==1)
	{
		cout<<"무승부!"<<endl;
		goto l;
		com1w=0;
		com2w=0;
	}
	else if(com1==1&&com2==3)
	{
		cout<<"컴퓨터1의 승리!"<<endl;
		com1w=1; 
	}
	else if(com1==2&&com2==1)
	{
		cout<<"컴퓨터1의 승리!"<<endl; 
		com1w=1;
	}
	else if(com1==2&&com2==2)
	{
		cout<<"무승부!"<<endl; 
		goto l;
		com1w=0;
		com2w=0;
	}
	else if(com1==2&&com2==3)
	{
		cout<<"컴퓨터2의 승리!"<<endl; 
		com2w=1;
	}
	else if(com1==3&&com2==1)
	{
		cout<<"컴퓨터2의 승리!"<<endl;
		com2w=1; 
	}
	else if(com1==3&&com2==2)
	{
		cout<<"컴퓨터1의 승리!"<<endl; 
		com1w=1;
	}
	else if(com1==3&&com2==3)
	{
		cout<<"무승부!"<<endl;
		goto l;
		com1w=0;
		com2w=0; 
	}
	
b:	com3=rand()%3+1;
a:	cout<<"가위 바위 보 중 하나를 입력하세요!"<<endl; 
	cin>>userin;
	if(userin=="가위"||userin=="바위"||userin=="보") 
	{
		cout<<"컴퓨터 3의 차례!"<<endl;
		match(com3);
	}
	else
	{
		cout<<"다시 입력해 주십시오!"<<endl;
		goto a;
	}
	if(userin=="가위"&&com3==1)
	{
		cout<<"무승부!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else if(userin=="가위"&&com3==2)
	{
		cout<<"컴퓨터3 승리!"<<endl;
		com3w=1;
	}
	else if(userin=="가위"&&com3==3)
	{
		cout<<"유저 승리!"<<endl;
		userw=1;
	}
	else if(userin=="바위"&&com3==1)
	{
		cout<<"유저 승리!"<<endl;
		userw=1;
	}
	else if(userin=="바위"&&com3==2)
	{
		cout<<"무승부!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else if(userin=="바위"&&com3==3)
	{
		cout<<"컴퓨터3 승리!"<<endl;
		com3w=1;
	}
	else if(userin=="보"&&com3==1)
	{
		cout<<"컴퓨터3 승리!"<<endl;
		com3w=1;
	}
	else if(userin=="보"&&com3==2)
	{
		cout<<"유저 승리!"<<endl;
		userw=1;
	}
	else if(userin=="보"&&com3==3)
	{
		cout<<"무승부!"<<endl;
		goto b;
		userw=0;
		com3=0;
	}
	else
	{
		cout<<"다시 입력해 주십시오!"<<endl;
		goto a;
	}

	if(com1w==1&&com3w==1)
	{
c:		com1=rand()%3+1;
		cout<<"컴퓨터 1의 차례!"<<endl;
		match(com1);
		com3=rand()%3+1;
		cout<<"컴퓨터 3의 차례!"<<endl;
		match(com3);
		if(com1==1&&com3==2)
		{
			cout<<"컴퓨터3의 승리!"<<endl;
			com3fw=1;
		}
		else if(com1==1&&com3==1)
		{
			cout<<"무승부!"<<endl;
			goto c;
		}
		else if(com1==1&&com3==3)
		{
			cout<<"컴퓨터1의 승리!"<<endl; 
			com1fw=1;
		}
		else if(com1==2&&com3==1)
		{
			cout<<"컴퓨터1의 승리!"<<endl; 
			com1fw=1;
		}
		else if(com1==2&&com3==2)
		{
			cout<<"무승부!"<<endl; 
			goto c;
		}
		else if(com1==2&&com3==3)
		{
			cout<<"컴퓨터3의 승리!"<<endl; 
			com3fw=1;
		}
		else if(com1==3&&com3==1)
		{
			cout<<"컴퓨터3의 승리!"<<endl;
			com3fw=1;
		}
		else if(com1==3&&com3==2)
		{
			cout<<"컴퓨터1의 승리!"<<endl; 
			com1fw=1;
		}
		else if(com1==3&&com3==3)
		{
			cout<<"무승부!"<<endl;
			goto c;
		}
	}
	else if(com1w==1&&userw==1)
	{
f:		com1=rand()%3+1;
d:		cout<<"가위 바위 보 중 하나를 입력하세요!"<<endl; 
		cin>>userin;
		if(userin!="가위"||userin!="바위"||userin!="보") 
		{
			cout<<"컴퓨터 1의 차례!"<<endl;
			match(com1);
		}
		else
		{
			cout<<"다시 입력해 주십시오!"<<endl;
			goto f;
			
			
		}
		if(userin=="가위"&&com1==1)
		{
			cout<<"무승부!"<<endl;
			goto d;
		}
		else if(userin=="가위"&&com1==2)
		{
			cout<<"컴퓨터1 승리!"<<endl;
			com1fw=1;
		}
		else if(userin=="가위"&&com1==3)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
			
		}
		else if(userin=="바위"&&com1==1)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
		}
		else if(userin=="바위"&&com1==2)
		{
			cout<<"무승부!"<<endl;
			goto d;
		}
		else if(userin=="바위"&&com1==3)
		{
			cout<<"컴퓨터1 승리!"<<endl;
			com1fw=1;
		}
		else if(userin=="보"&&com1==1)
		{
			cout<<"컴퓨터1 승리!"<<endl;
			com1fw=1;
		}
		else if(userin=="보"&&com1==2)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
		}
		else if(userin=="보"&&com1==3)
		{
			cout<<"무승부!"<<endl;
			goto d;
		}
		else
		{
			cout<<"다시 입력해 주십시오!"<<endl;
			goto f;
		}
	}	
	else if(com2w==1&&com3w==1)
	{
g:		com2=rand()%3+1;
		cout<<"컴퓨터 2의 차례!"<<endl;
		match(com2);
		com3=rand()%3+1;
		cout<<"컴퓨터 3의 차례!"<<endl;
		match(com3);
		if(com2==1&&com3==2)
		{
			cout<<"컴퓨터3의 승리!"<<endl;
			com3fw=1;
		}
		else if(com2==1&&com3==1)
		{
			cout<<"무승부!"<<endl;
			goto g;
		}
		else if(com2==1&&com3==3)
		{
			cout<<"컴퓨터2의 승리!"<<endl; 
			com2fw=1;
		}
		else if(com2==2&&com3==1)
		{
			cout<<"컴퓨터2의 승리!"<<endl; 
			com2fw=1;
		}
		else if(com2==2&&com3==2)
		{
			cout<<"무승부!"<<endl; 
			goto g;
		}
		else if(com2==2&&com3==3)
		{
			cout<<"컴퓨터3의 승리!"<<endl;
			com3fw=1; 
		}
		else if(com2==3&&com3==1)
		{
			cout<<"컴퓨터3의 승리!"<<endl;
			com3fw=1;
		}
		else if(com2==3&&com3==2)
		{
			cout<<"컴퓨터2의 승리!"<<endl;
			com2fw=1 ;
		}
		else if(com2==3&&com3==3)
		{
			cout<<"무승부!"<<endl;
			goto g;
		}
	}
	else if(com2w==1&&userw==1)
	{
i:		com2=rand()%3+1;
h:		cout<<"가위 바위 보 중 하나를 입력하세요!"<<endl; 
		cin>>userin;
		if(userin!="가위"||userin!="바위"||userin!="보") 
		{
			cout<<"컴퓨터 2의 차례!"<<endl;
			match(com2);
		}
		else
		{
			cout<<"다시 입력해 주십시오!"<<endl;
			goto h;	
		}
		
		if(userin=="가위"&&com2==1)
		{
			cout<<"무승부!"<<endl;
			goto i;
		}
		else if(userin=="가위"&&com2==2)
		{
			cout<<"컴퓨터2 승리!"<<endl;
			com2fw=1;
		}
		else if(userin=="가위"&&com2==3)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
		}
		else if(userin=="바위"&&com2==1)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
		}
		else if(userin=="바위"&&com2==2)
		{
			cout<<"무승부!"<<endl;
			goto i;
		}
		else if(userin=="바위"&&com2==3)
		{
			cout<<"컴퓨터2 승리!"<<endl;
			com2fw=1;
		}
		else if(userin=="보"&&com1==1)
		{
			cout<<"컴퓨터2 승리!"<<endl;
			com2fw=1;
		}
		else if(userin=="보"&&com2==2)
		{
			cout<<"유저 승리!"<<endl;
			userfw=1;
		}
		else if(userin=="보"&&com2==3)
		{
			cout<<"무승부!"<<endl;
			goto i;
		}
		else
		{
			cout<<"다시 입력해 주십시오!"<<endl;
			goto h;
		}
	}
	
	if(com1fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<최후의 우승자는 컴퓨터1 입니다!!! 축하합니다>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}
	else if(com2fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<최후의 우승자는 컴퓨터2 입니다!!! 축하합니다>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}	
	else if(com3fw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<최후의 우승자는 컴퓨터3 입니다!!! 축하합니다>*******"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;	
	}
	else if(userfw==1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"*******<최후의 우승자는 유저 입니다!!! 축하합니다>**********"<<endl;
		cout<<"************************************************************"<<endl;
		cout<<"************************************************************"<<endl;		
	}		
	

return 0;
}

