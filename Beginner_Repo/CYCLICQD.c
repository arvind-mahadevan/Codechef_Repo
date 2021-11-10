//Program to check whether a quadrilateral is cyclic or not
#include <stdio.h>

int main(void) {
	int i,t,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a+c==b+d)
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
