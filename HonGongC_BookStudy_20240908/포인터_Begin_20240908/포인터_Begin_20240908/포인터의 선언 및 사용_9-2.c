#include <stdio.h>

int main(void)
{
	int a;  // �Ϲ� ���� ����
	int* pa;  //  ����Ʈ ���� ����

	pa = &a;  // �����Ϳ� a�� �ּ� ����
	*pa = 10;  // �����ͷ� ���� a�� 10 ����

	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);  // ���� a �� ���
	printf("a�� �ּҰ� ��� : %d\n", pa);
	
	return 0;

}