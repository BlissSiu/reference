#include <stdio.h>

void sawp(int* px, int* py); //매개변수 포인터형으로 선언

int main()
{

	///데이터형의 관계없이 포인터의 크기는 같을까?

	/*
	int a; //int 형 4바이트
	char b; // char형 1바이트
	double c; // double형 8바이트

	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("sizeof(c) = %d\n", sizeof(c));

	int* pi;
	double pd;
	char* pc;

	
	printf("sizeof(pi) = %d\n", sizeof(pi));
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));


	printf("sizeof(int*) = %d\n", sizeof(int*));
	printf("sizeof(dluble*) = %d\n", sizeof(double*));
	printf("sizeof(char*) = %d\n", sizeof(char*));
	*/
	



	///포인터는 다른 변수를 가리킨다.
	/*
	int* p ; // 포인터 선언 및 초기화
	int d = 123; // 일반 변수 선언 및 초기화
	p = &d; //d의 주소값을 pd에 저장

	printf("d의 값 = %d\n", d);
	printf("d의 주소 = %p\n", &d);
	printf("pd의 값 = %p\n", p);
	printf("pd가 가리키는 값 = %d\n", *p);
	*/

	
	///포인터의 선언
	/*
	int a = 10;
	int* p1; //초기화를 안한 포인터
	int* p2 = NULL; //NULL값으로 초기화한 널 포인터
	int * p3 = 0; //0번지로 초기화;
	int *p4 = &a; //변수 d의 주소로 초기화
	int* p5, p6; // p5는 포인터지만 p6은 일반 변수
	int* p7, *p8;
	*/


	///const 포인터
	/*
	int a = 10, b = 20;

	const int* p1 = &a; // p1는 a에 읽기전용 포인터
	int* const p2 = &a; //p2는 a전용 포인터
	const int* const p3 = &a; //p3은 읽기전용이면서 a전용 포인터

	printf("*p1 = %d\n", *p1); // p1이 가리키는 변수 a 를 읽어온다
	//*p1 = 100 //읽기전용 포인터 이므로 가리키는 값 변경X
	p1 = &b;  // p1이 다른 변수 b를 가리킴
	printf("*p1 = %d\n", *p1); //p1이 가리키는 변수 b를 읽어온다

	printf("*p2 = %d\n", *p2); // p2이 가리키는 변수 a 를 읽어온다
	//p2 = &b; //p2는 다른 변수를 가리킬 수 없다.'
	*p2 = 100; //p2가 가리키는 값 100으로 변경
	printf("*p2 = %d\n", *p2); 

	//*p3 = 100; //p3가 가리키는 변수의 값 변경X
	//*p3 = &b; //p3가 다른 변수를 가리킬 수 없다.
	printf("*p3 = %d\n", *p3);
	*/


	///배열과 포인터
	/*
	int* p1 = (int*)0x100; //절대 주소로 초기화 -> 0x100번지에 어떤것이 들어있을지 모르는데 초기화 하면 위험하다.
	int arr[5] = { 1,2,3,4,5 };
	printf("arr의 주소 arr[0] : %p, arr[1] : %p, arr[2] : %p, arr[3] : %p, arr[4] : %p\n", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("p1 : %p, p1+1 : %p , p1+2 : %p\n", p1, p1 + 1, p1 + 2); //int형 이므로 4바이트씩 늘어나는 주소 출력

	p1 = &arr[0];
	printf("p1 : %d, p1+1 : %d , p1+2 : %d, p1+3 : %d, p1+4 : %d\n", *p1, *p1 + 1, *p1 + 2, *p1 + 3, *p1 + 4);
	
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p=%p, ", p);
		printf("*p = %d\n", *p);
	}

	int* p2 = arr; // &arr[0]과 같은 의미 . 배열의 이름은 배열의 시작주소

	printf("%p ", &p2);

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p2[i]);
	}
	*/


	///배열과 포인터의 차이 
	/*
	int x[5] = { 1,2,3,4,5 };
	int y[5] = { 0, };
	int* p = x;

	//x = y; //변경 불가능
	//x++; //증감연산 불가능 

	p = y; //변경 가능
	p++; //증감연산 가능
	

	printf("x : %d\n", sizeof(x));z
	printf("x : %d\n", sizeof(p));
	*/


	///다중포인터
   /*
	int a = 10;
	int* p = &a;
	int** pp = &p;

	printf("a : %p , p : %p, pp : %p", &a, &p, &pp);
	printf("a : %d , p : %d, pp : %d", a, *p, **pp);
	*/
	
	///함수와 포인터

	int a = 1;
	int b = 2;

	printf("a = %d, b =%d\n", a, b);
	sawp(&a, &b); //인자로 전달하려는 변수의 주소로 전달한다.
	printf("a = %d, b = %d\n", a, b);
	
}

void sawp(int* px, int* py) 
{
	int temp = *px; //temp를 px가 가리키는 값으로 초기화
	*px = *py; //py가 가리키는 변수의 값을 px라는 변수에 대입한다.
	*py = temp; // py가 가리키는 변수에 temp를 대입한다.
}