// �ΰ��� ���� �Է¹޾� ���ϱ� ���� ���ϱ� ������ �����ϱ�. 
#include <stdio.h>

void func();

int main()
{

	func();
	return 0;
}

void func()
{
	int num1 , num2 ;
	int plus, minus, x, nanugi;
	
	printf("�ΰ��� ������ �Է�.\n");
	scanf("%d%d", &num1, &num2);
	plus = num1 + num2;		// �����ڴ� �ݵ�� scanf���� ���� ���� ���� ��ġ�� �ξ�� �ùٸ��� ���� �����´�. 
	printf("plus = %d\n", plus); 
	
	printf("�ΰ��� ������ �Է�.\n");
	scanf("%d%d", &num1, &num2);
	minus = num1 - num2;
	printf("minus = %d\n", minus);
	
	printf("�ΰ��� ������ �Է�.\n");
	scanf("%d%d", &num1, &num2);
	x = num1 * num2;
	printf("x = %d\n", x);
	
	printf("�ΰ��� ������ �Է�.\n");
	scanf("%d%d", &num1, &num2);
	nanugi = num1 / num2;
	printf("nanugi = %d\n", nanugi);
	
}
