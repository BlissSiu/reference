#include <stdio.h>


void test1(int x)
{
	x = 20;
}
void test2(int *p)
{
	*p = 20;
}

int main(void)
{
	int x = 10;

	test1(x);
	printf("test1 호출 후  x = %d\n", x);

	test2(&x);
	printf("test2 호출 후 x = %d\n", x);



}