//Program to calculate passing marks from negative marking
#include <stdio.h>

int main(void) {
	int i,t,n,x,p,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&n,&x,&p);
	    m=(3*x)-(n-x);
	    if(m>=p)
	    {
	        printf("PASS\n");
	    }
	    else
	    {
	        printf("FAIL\n");
	    }
	}
	return 0;
}
