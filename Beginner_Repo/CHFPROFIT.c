#include <stdio.h>

int main(void) {
    int i,t,x,y,z,arr[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int a=x*y;
        int b=x*z;
        arr[i]=b-a;
        printf("%d\n",arr[i]);
    }
	return 0;
}
