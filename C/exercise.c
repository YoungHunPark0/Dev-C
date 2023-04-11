// 두개의 정수 입력받아 더하기 빼기 곱하기 나누기 연산하기. 
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
	
	printf("두개의 정수값 입력.\n");
	scanf("%d%d", &num1, &num2);
	plus = num1 + num2;		// 연산자는 반드시 scanf에서 값을 받은 후의 위치에 두어야 올바르게 값을 가져온다. 
	printf("plus = %d\n", plus); 
	
	printf("두개의 정수값 입력.\n");
	scanf("%d%d", &num1, &num2);
	minus = num1 - num2;
	printf("minus = %d\n", minus);
	
	printf("두개의 정수값 입력.\n");
	scanf("%d%d", &num1, &num2);
	x = num1 * num2;
	printf("x = %d\n", x);
	
	printf("두개의 정수값 입력.\n");
	scanf("%d%d", &num1, &num2);
	nanugi = num1 / num2;
	printf("nanugi = %d\n", nanugi);
	
}
