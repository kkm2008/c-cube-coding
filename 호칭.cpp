#include<cstdio>

using namespace std;

int main()
{
	char my[15];
	char you[15];
	char c;
	
	gets(my);
	scanf("%c",&c);
	gets(you);
	
	for(int i=0; i < 13; i++)
	{
		if(my[i] < you[i])
		{
			printf("%s",you);
			break;
		}
		else if(my[i] > you[i])
		{
			printf("%s",my);
			break;
		}
//		else if(my[i] == you[i])
//		{
//			
//		}
	}
}
