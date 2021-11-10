//Program to check direction after n seconds
#include <stdio.h>

int main(void) {
    int i,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n%4==0)
        {
            printf("North\n");
        }
        else if(n%4==1)
        {
            printf("East\n");
        }
        else if(n%4==2)
        {
            printf("South\n");
        }
        else if(n%4==3)
        {
            printf("West\n");
        }
    }
	return 0;
}
