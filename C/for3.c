#include <stdio.h>

int main()
{
	int i;
	char str[30];
	
	/*
	for(i=0; i<30; i++){
		
		printf("입력하세여 : ");
		scanf("%c", &str[i]); 
		
	}*/
	
	printf("문자열을 입력하세요: ");		//문자열 char의 경우에는 for문을 쓰지 않는다. 안써도 구현 가능. 
	scanf("%s", str);
	printf("입력한 문자열은 %s\n",str);
	for(i = 0; i<30; i++){
		printf("%c", str[i]);
	}
	
	return 0;
}
