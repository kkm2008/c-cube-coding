#include<cstdio>

using namespace std;

int main()
{
	int x;
	int h;
	int m;
	
	
	scanf("%d %d",&h,&m);

	if(m-45 >= 0)
	{
		printf("%d %d",h,m-45);
	}
	else if(m-45 <0)
	{
		x = m-45;
		while(x < 0)
		{
			h--;
			x= x + 60;
			if(h < 0)
			{
				h = 24;
			}
		}
		printf("%d %d",h,x);
	}
}
