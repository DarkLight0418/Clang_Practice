#include <stdio.h>

int main(void)
{
	printf("Be happy\n");		// \n (�� �ٲ�)
	printf("12345678901234567890\n");
	printf("My\tfriend\n");		// \t (�� ��ġ�� �̵�) �� \n (�� �ٲ�)
	printf("Goot\bd\tchance\n");	// \b (�� ĭ �������� �̵�) \t (t�� d�� �ٲٰ� �� ��ġ�� �̵�)
	printf("Cow\rW\a\n");	// \r (�� ������ �̵�) \a (�˶�(���Ҹ�) ���)

	return 0;
}