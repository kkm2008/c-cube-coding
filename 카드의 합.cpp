#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int C[10001];
	int N;
	int M;
	bool check = false;

	
	scanf("%d",&N);
	for(int i=0; i<N; i++)
	{
		scanf("%d",&C[i]);
	}
//	for(int i=0; i<N; i++)
//	{
//		printf("%d",C[i]);
//	}
	scanf("%d",&M);
	
	
	
	for(int i=0; i<N-1; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(C[i]+C[j] == M)
			{
				printf("%d %d",C[i],C[j]);
				check = true;
				return 0;
			}
		}
	}
	if(check == false)
	{
		printf("-1");
	}
}
