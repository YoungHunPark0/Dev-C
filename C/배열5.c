#include <stdio.h>

int main()
{
	char str[30];		//char 형태 배열 선언. 
	
	printf("문자열을 입력하세요.");
	scanf("%s", str);	// str(배열이름) 자체가 주소이기 때문에 주소연산자 & 없어야함. 
	
	printf("%s\n", str);
	printf("%c\n", str[7]);		// 8 번째의 글자가 출력된다. 
	
	return 0;
}
