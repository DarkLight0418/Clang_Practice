#include <stdio.h>

int main(void)
{
	int a = 1;

	do  // �ݺ��� ���� ��ġ
	{
		a = a * 2;
	} while (a < 10);  // a�� 10���� ������ 9�� �ݺ�
	printf("a : %d\n", a);

	return 0;
}