#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)  // rank �� Ȯ��
	{
	case 1:  // 1�Ͻ�
		m = 300;
		break;  // ������ �����ϰ� ����� ��� 22������ �̵�
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}