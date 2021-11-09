//An optimization program
#include <stdio.h>

int main(void) {
	int i,t,n,arr[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    n=n%4;
	    if(n/2>0)
	    {
	        arr[i]=1;
	    }
	    else
	        arr[i]=0;
	}
	for(i=0;i<t;i++)
	{
	    if(arr[i]==0)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}
