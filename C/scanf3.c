#include <stdio.h>

int main()
{
	char ch;
	int num;
	/*
	printf("문자를 입력하세요. ");
	scanf("%c",&ch);
	printf("정수 입력 ");
	scanf("%d", &num); */
	
	printf("정수 입력 ");		//위의 코드와 정수 문자 순서를 바꿔서 실행해봄. 
	scanf("%d", &num);
	getchar();		//buffer에 있는 문자를 하나 버려줌. 
	printf("문자를 입력하세요. ");
	scanf("%c",&ch);
	printf("C : %c, num : %d", ch, num);
	return 0;
}
