#include <stdio.h>

int main(void)
{
	int a;		// int�� ���� a ����
	int b, c, d;		// 2���� int�� ���� b, c ���� ����(+ d �߰� 3�� ����)
	double da;		// double�� ���� da ����
	char ch;		// char�� ���� ch ����

	a = 10;
	b = a + 10;
	c = a + 20;
	d = a;
	da = 3.5;
	ch = 'A';		// "A" == $

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� d�� �� : %d\n", d);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);
	
	d = 0;

	printf("���� d�� ������ �� : %d\n", d);

	return 0;
}