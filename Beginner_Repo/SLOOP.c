//Program to calculate the number of times a song is played in a loop
#include <stdio.h>

int main(void) {
	int t,i,m,s,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    n=0;
	    scanf("%d%d",&m,&s);
	    n=(int)(m/s);
	    printf("%d\n",n);
	}
	return 0;
}
