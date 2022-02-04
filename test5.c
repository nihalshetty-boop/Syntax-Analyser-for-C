//with error - dangling else problem
#include<stdio.h>
#define x 3
	
int main()
{
	struct test{
		float y;
	};
	struct test t;
	t.y=10;
	int a=4;
	if(a<10)
		printf("10");
	else
	{
		if(a<12)
			printf("11");
		else
			printf("error");
	}
	printf("y is %d ",t.y);
}
