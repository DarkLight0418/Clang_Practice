#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;  // �ݺ� Ƚ�� ���� ����

	for (i = 0; i < 3; i++)  // �ʱ��;���ǽ�;���๮
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0; 
}