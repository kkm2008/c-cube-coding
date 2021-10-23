#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char building[1001];
	char address[1001];
	char c;
	int bLen;
	int aLen;
	int k=1;
	int a=0;
	gets(building);
	scanf("%c",c);
	gets(address);
	
	bLen = strlen(building);
	aLen = strlen(address);
	
	for(int i = 0; i <= bLen-aLen; i++)
	{
		k = 1;
		for(int j=0; j <=aLen-1; j++)
		{
			if(building[i+j] != address[j])
			{
				k=0;
			}
			
		}
		if(k == 1)
		{
			a++;
			
		}
		
	} 
	printf("%d",a);
}
