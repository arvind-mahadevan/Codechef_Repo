//Program to find the number of 7s in a set of letters.
#include <stdio.h>

int main(void) {
	int t,a,b,c,arr[1000],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    if(a==7||b==7||c==7)
	    {
	        arr[i]=1;
	    }
	    else
	    {
	        arr[i]=0;
	    }
	    a=0;b=0;c=0;
	}
	for(i=0;i<t;i++)
	{
	    if(arr[i]==1)
	    {
	        printf("YES\n");
	    }
	    else
	        printf("NO\n");
	}
	return 0;
}
