#include <stdio.h>

void swap(int* pa, int* pb);  // �� ������ ���� �ٲٴ� �Լ� ����

int main(void)
{
	int a = 10, b = 20;  // ���� ����� �ʱ�ȭ
	
	swap(&a, &b);  // a�� �ּҿ� b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a:%d, b:%d\n", a, b);  // ���� a, b ���

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = * pa;
	*pa = *pb;
	*pb = temp;
}