#include <stdio.h>

int main(void)
{
	int ary[5];  // int�� ��� 5���� �迭 ����
	             // ary == array �����
	ary[0] = 10;  // ù ��° �迭 ��ҿ� 10 ����
	ary[1] = 20;  
	ary[2] = ary[0] + ary[1];  // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ��ҿ� ����
	scanf("%d", &ary[3]);  // �� ��° ��� ����

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);   // �̰� �����Ⱚ��.

	return 0;
}