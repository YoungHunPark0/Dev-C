#include <stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf("%c", &ch); 
	printf("�� ������ �Է��ϼ���.\n");
	scanf("%d%d", &num1, &num2);		//scanf������ ���ڿ��� ���� �ȵȴ�.

	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("ch : %c", ch);
	
	return 0;
}
