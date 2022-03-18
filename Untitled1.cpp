#include<stdio.h>
int main()
{
	int num;
	printf("enter the num");
	scanf("%d,&num");
	int result=num%97;
	printf("number is divisible by 97 or not is %d",result);
	return 0;
}
