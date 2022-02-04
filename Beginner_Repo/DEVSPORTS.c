#include <stdio.h>

int main(void) {
	int t,z,y,a,b,c,arr[100];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   scanf("%d%d%d%d%d",&z,&y,&a,&b,&c);
	   int n=a+b+c;
	   int m=z-y;
	   if(m>=n)
	   {
	       printf("YES\n");
	   }
	   else
	   {
	       printf("NO\n");
	   }
	}
	return 0;
}
