#include <stdio.h>

void func(); 	// 함수의 선언 

int main()
{
	
	printf("%s %s\n", "Hi","123");	// %s는 문자열을 나타냄. 
	printf("%d\n", 1234);
	printf("%c\n", 'A');		// "문자열" , '문자'
	printf("%d\n", 'A');		// A를 정수로 출력하면 아스키코드 숫자 65가 나옴  
	printf("%c\n", 65);			// 문자로 정수 출력하면 A나옴  
	printf("%lf\n", 3.14);	 	// 실수를 나타내는 %lf  : 소숫점이 더 많이 나타나게 함 	 
	
	func(); 	//func() 함수 호출 ,출력은 메인에서 되야함   
	return 0;
}

void func()		// 함수정의 
{
	printf("func\n");
	
 } 

