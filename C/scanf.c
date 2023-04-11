// 표준입력함수 scanf()  
#include <stdio.h>

int main()
{
	int num;
	scanf("%c", &num);		//&는 주소연산자. 
	printf("num의 입력값 : %c\n", num);
	printf("num의 주소 : %p", &num); 	// %p는 주소를 찾는 연산자. 
	
	return 0;
}
