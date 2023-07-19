#include <stdio.h>

int main()
{
	int* pi = 0;
	char* pd = 0;
	double* pc = 0;

	int a = 0;
	char b = 0;
	double c = 0;


	//컴파일러의 비트에 따라서 포인트 변수의 크기가 달라짐
	printf("sizeof(pi) = %d\n", sizeof(pi));
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));


	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("sizeof(c) = %d\n", sizeof(c));

}