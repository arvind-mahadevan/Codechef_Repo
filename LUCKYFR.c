//Program to calculate number of fours in a number.
#include <stdio.h>

int main(void) {
	int t,i,n,n4,rem;//arr[10000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    n4=0;
	    while(n>0)
	    {
	        rem=n%10;
	        if(rem==4)
	        {
	            n4++;
	        }
	        n=n/10;
	    }
	    //arr[i]=n4;
	    printf("%d\n",n4);
	}
	
	return 0;
}
