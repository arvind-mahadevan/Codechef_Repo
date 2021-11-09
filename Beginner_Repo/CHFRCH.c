//Program to calculate growth of wealth
#include <stdio.h>

int main(void) {
	int t,i,a,b,x,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&a,&b,&x);
	    c=(int)((b-a)/x);
	    printf("%d\n",c);
	}
	return 0;
}
