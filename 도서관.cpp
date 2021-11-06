#include<cstdio>
#include<cstring>
#include<utility>

using namespace std; 

int main()
{
	char name[100001][100001];
	char fname[100001];
	pair<int,int> b[1001];
	int n;
	int len;
	bool c = true;
	
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++ )
	{
		gets(name[i]); // ?????????????
		scanf("%d %d",b[i].first,b[i].second);
	}
	
	gets(fname);
	len = strlen(fname);
	
	for(int i = 0; i < n; i++ )
	{
		for(int j = 0; j < len; j++ )
		{
			if(fname[j] != name[i][j])
			{
				c = false;
				break;
			}
			
		}
		if(c == true)
		{
			printf("%s",&name[i])//?????????
		}
			
	}
}
