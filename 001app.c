#include<stdio.h>
void main()
{

	int i;
	int	arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入一个月份！\n");
		scanf("%d",&i);
			printf("%d\n",arr[i-1]);
}
