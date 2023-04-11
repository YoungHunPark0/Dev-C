#include <stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("문자를 입력하세여.\n");
	scanf("%c", &ch); 
	printf("두 정수를 입력하세여.\n");
	scanf("%d%d", &num1, &num2);		//scanf에서는 문자열이 들어가면 안된다.

	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("ch : %c", ch);
	
	return 0;
}
