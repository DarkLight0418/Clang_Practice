#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade[5];  // ���� �Է��� ����
	char name[20];  // �̸� �Է��� �迭

	printf("���� �Է� : ");
	scanf("%s", grade);  // grade ������ ���� ���� �Է�
	printf("�̸� �Է� : ");
	scanf("%s", name);    // name �迭�� �̸� ���ڿ� �Է�, & ��� ����.
	printf("%s�� ������ %s�Դϴ�. \n", name, grade);

	return 0;
}