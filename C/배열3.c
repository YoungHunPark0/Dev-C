#include <stdio.h>

int main()
{
	char ch; 		// char 형 변수 선언.
	char ary[5];	// char 형 배열선언. , char은 크기가 1바이트 이므로 전체 5바이트의 크기를 가지는 배열. 
	 
	ary[0] = 'h';	// ary[0]자리에 h 삽입 
	ary[1] = 'i';	// ary[1]자리에 i 삽입. 
	printf("%s", ary);	 
	
	return 0;
 } 
