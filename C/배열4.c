#include <stdio.h>

int main()
{
	char ch;
	//char ary[5] = "hi";		//배열을 생성과 함께 초기화 하는 방법1.
	//char ary1[5] = {'h', 'i'}; 	// 배열 초기화 방법 2. 
	
	char ary[6] = "hello";		// 원래는 마지막 방에 null까지 6개의 방이 생성이되는게 정상임. 방은 여유있게 만들자. 
	char ary1[5] = {'h', 'e', 'l', 'l', 'o'}; 	
	
	printf("%s\n", ary);
	printf("%s\n", ary1);
	
	
	 
	return 0;
}
