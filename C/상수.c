#include <stdio.h>

int main()
{
	int num = 100;
	printf("ó��num = %d\n", num);
	num = 10;
	printf("�ٲ�num = %d\n", num);
	
	const int num1 = 200;		// const : ó������ �ٲ����ʰԲ� ���ִ�, ���ȭ ��Ű�� Ű����. 
	printf("num1 = %d\n", num1); 
//	num1 = 20;					// const ������ num1�� �ٲ�� ��� ������ ���. 
//	printf("�ٲ�num1 = %d\n", num1);
	
	unsigned int num2 = 100;		// ����� �ǹ��ϴ� Unsigned, signed : ���̳ʽ�, 0, ��� �� ������ �ǹ��ϴ� Ű����. 
	printf("num2 = %u", num2);
	
	char ch1;		//-128 ~ 0 ~ 127 ������ �������� 
	unsigned char ch2;	// 0 ~ 255 ������ ���� ����. 
	 
	return 0;
}
