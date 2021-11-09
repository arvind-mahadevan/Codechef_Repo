//Program to assess the number of coconuts of two types
#include <stdio.h>

int main(void) {
	int a,b,c,d;
	int arr[15000],t;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    arr[i]=(int)((c/a)+(d/b));
	    a=0;b=0;c=0;d=0;
	}
	for(i=0;i<t;i++)
	{
	    printf("%d\n",arr[i]);
	}
	return 0;
}
