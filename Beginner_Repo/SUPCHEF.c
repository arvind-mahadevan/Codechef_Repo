//Program to calculate TV time
#include <stdio.h>

int main(void) {
	int i,t,m,n,k,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&m,&n,&k);
	    p=n*k;
	    if(p<m){
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

