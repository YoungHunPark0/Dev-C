#include <stdio.h>

int main()
{
	int num = 100;
	printf("처음num = %d\n", num);
	num = 10;
	printf("바뀐num = %d\n", num);
	
	const int num1 = 200;		// const : 처음값을 바뀌지않게끔 해주는, 상수화 시키는 키워드. 
	printf("num1 = %d\n", num1); 
//	num1 = 20;					// const 때문에 num1은 바뀔수 없어서 에러가 뜬다. 
//	printf("바뀐num1 = %d\n", num1);
	
	unsigned int num2 = 100;		// 양수를 의미하는 Unsigned, signed : 마이너스, 0, 양수 즉 정수를 의미하는 키워드. 
	printf("num2 = %u", num2);
	
	char ch1;		//-128 ~ 0 ~ 127 까지의 정수저장 
	unsigned char ch2;	// 0 ~ 255 까지의 정수 저장. 
	 
	return 0;
}
