#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);		// 10���� ���� ��� ���
	printf("%d\n", 014);	// 8���� ���� ��� ���
	printf("%d\n", 0xc);	// 16���� ���� ��� ���
	printf("Be happy!\n");		// ��� �� �� �ٲ�(\n)
	printf("Bn\be \thappy!\n");		// ���� �ٲٱ�(\b), ���ϴ� ��(\t)
	printf("%d�� %d�� ���� %d�Դϴ�.\n", 15, 20, 15 + 20);
	return 0;
}