#include<stdio.h>
int Add(int x,int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int x = 20;
	int y = 90;
	int sum = Add(x,y); 
	printf("sum=%d\n", sum);
	return 0;
}
