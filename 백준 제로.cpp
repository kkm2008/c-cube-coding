#include<cstdio>
#include<stack>

using namespace std;

stack<int> s;

int main()
{
	int n;
	int p;
	int sum=0;
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&p);
		if(p == 0)
		{
			sum = sum - s.top();
			s.pop();
		}
		else
		{
			s.push(p);
			sum = sum+p;
		}

	}
	printf("%d",sum);
}
