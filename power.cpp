#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("pow of %d to %d is %f",a,b,pow (a,b));
	return 0;
}
