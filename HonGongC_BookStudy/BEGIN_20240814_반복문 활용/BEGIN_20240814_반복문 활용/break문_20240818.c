#include <stdio.h>

int main(void)
{
	int i;  // �ݺ� ���� ����
	int sum = 0;  // 1���� 10���� ���� ������ ����

	for (i = 1; i <= 10; i++)  // i�� 1���� 10���� �����ϸ鼭 10�� �ݺ�
	{
		sum += i;
		if (sum > 30) break;  // sum ���� 30���� ũ�� �ݺ��� ����
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}