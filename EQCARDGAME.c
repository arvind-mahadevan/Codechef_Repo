#include <stdio.h>

int main(void) {
    int t,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&k);
        int n=52%k;
        printf("%d\n",n);
    }
	return 0;
}

