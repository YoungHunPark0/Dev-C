// for 문으로 배열 다루기. 
#include <stdio.h>

int main()
{
	/*
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	
	for(i = 0; i < 10; i++){
		
		printf("%d번방 값:%d\n", i, ary[i]);
		
	}
	//printf("%d", ary[4]);
	
	ary[4]=50;
	for(i=0; i < 10; i++){
		
		printf("%d번방 값 :%d\n", i, ary[i]);
		
	}*/
	
	// 정수형 배열 for문 만들기. 
	int ary[5] ;
	int i;
	for(i = 0; i < 5; i++){
		printf("%d 번째 정수를 입력하세요. ", i );
		scanf("%d", &ary[i]); 
		
	}
	printf("입력된 정수는 \n");
	
	for(i=0 ; i <5 ; i++){
		printf("%d\n", ary[i]);
		
	}
	
	return 0;
}
