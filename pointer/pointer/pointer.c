#include <stdio.h>

void sawp(int* px, int* py); //�Ű����� ������������ ����

int main()
{

	///���������� ������� �������� ũ��� ������?

	/*
	int a; //int �� 4����Ʈ
	char b; // char�� 1����Ʈ
	double c; // double�� 8����Ʈ

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
	



	///�����ʹ� �ٸ� ������ ����Ų��.
	/*
	int* p ; // ������ ���� �� �ʱ�ȭ
	int d = 123; // �Ϲ� ���� ���� �� �ʱ�ȭ
	p = &d; //d�� �ּҰ��� pd�� ����

	printf("d�� �� = %d\n", d);
	printf("d�� �ּ� = %p\n", &d);
	printf("pd�� �� = %p\n", p);
	printf("pd�� ����Ű�� �� = %d\n", *p);
	*/

	
	///�������� ����
	/*
	int a = 10;
	int* p1; //�ʱ�ȭ�� ���� ������
	int* p2 = NULL; //NULL������ �ʱ�ȭ�� �� ������
	int * p3 = 0; //0������ �ʱ�ȭ;
	int *p4 = &a; //���� d�� �ּҷ� �ʱ�ȭ
	int* p5, p6; // p5�� ���������� p6�� �Ϲ� ����
	int* p7, *p8;
	*/


	///const ������
	/*
	int a = 10, b = 20;

	const int* p1 = &a; // p1�� a�� �б����� ������
	int* const p2 = &a; //p2�� a���� ������
	const int* const p3 = &a; //p3�� �б������̸鼭 a���� ������

	printf("*p1 = %d\n", *p1); // p1�� ����Ű�� ���� a �� �о�´�
	//*p1 = 100 //�б����� ������ �̹Ƿ� ����Ű�� �� ����X
	p1 = &b;  // p1�� �ٸ� ���� b�� ����Ŵ
	printf("*p1 = %d\n", *p1); //p1�� ����Ű�� ���� b�� �о�´�

	printf("*p2 = %d\n", *p2); // p2�� ����Ű�� ���� a �� �о�´�
	//p2 = &b; //p2�� �ٸ� ������ ����ų �� ����.'
	*p2 = 100; //p2�� ����Ű�� �� 100���� ����
	printf("*p2 = %d\n", *p2); 

	//*p3 = 100; //p3�� ����Ű�� ������ �� ����X
	//*p3 = &b; //p3�� �ٸ� ������ ����ų �� ����.
	printf("*p3 = %d\n", *p3);
	*/


	///�迭�� ������
	/*
	int* p1 = (int*)0x100; //���� �ּҷ� �ʱ�ȭ -> 0x100������ ����� ��������� �𸣴µ� �ʱ�ȭ �ϸ� �����ϴ�.
	int arr[5] = { 1,2,3,4,5 };
	printf("arr�� �ּ� arr[0] : %p, arr[1] : %p, arr[2] : %p, arr[3] : %p, arr[4] : %p\n", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("p1 : %p, p1+1 : %p , p1+2 : %p\n", p1, p1 + 1, p1 + 2); //int�� �̹Ƿ� 4����Ʈ�� �þ�� �ּ� ���

	p1 = &arr[0];
	printf("p1 : %d, p1+1 : %d , p1+2 : %d, p1+3 : %d, p1+4 : %d\n", *p1, *p1 + 1, *p1 + 2, *p1 + 3, *p1 + 4);
	
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("p=%p, ", p);
		printf("*p = %d\n", *p);
	}

	int* p2 = arr; // &arr[0]�� ���� �ǹ� . �迭�� �̸��� �迭�� �����ּ�

	printf("%p ", &p2);

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p2[i]);
	}
	*/


	///�迭�� �������� ���� 
	/*
	int x[5] = { 1,2,3,4,5 };
	int y[5] = { 0, };
	int* p = x;

	//x = y; //���� �Ұ���
	//x++; //�������� �Ұ��� 

	p = y; //���� ����
	p++; //�������� ����
	

	printf("x : %d\n", sizeof(x));z
	printf("x : %d\n", sizeof(p));
	*/


	///����������
   /*
	int a = 10;
	int* p = &a;
	int** pp = &p;

	printf("a : %p , p : %p, pp : %p", &a, &p, &pp);
	printf("a : %d , p : %d, pp : %d", a, *p, **pp);
	*/
	
	///�Լ��� ������

	int a = 1;
	int b = 2;

	printf("a = %d, b =%d\n", a, b);
	sawp(&a, &b); //���ڷ� �����Ϸ��� ������ �ּҷ� �����Ѵ�.
	printf("a = %d, b = %d\n", a, b);
	
}

void sawp(int* px, int* py) 
{
	int temp = *px; //temp�� px�� ����Ű�� ������ �ʱ�ȭ
	*px = *py; //py�� ����Ű�� ������ ���� px��� ������ �����Ѵ�.
	*py = temp; // py�� ����Ű�� ������ temp�� �����Ѵ�.
}