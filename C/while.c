#include <stdio.h>

int main()
{
//	int i = 0;		// i 선언 및 초기화. 
//	while(i < 5){		
//		printf("hello\n");
//		i++;
//	}
	/*
	int i = 0;		// while을 무한히 반복하고 싶을때는 i의 값에 1을 집어넣음. 
	while(i){
		
		printf("hello\n");
		
	}	*/
	
	// while문을 써서 1 ~ 100까지의 합 구하기.
	
	int i=0 ;
	int sum = 0; 	// sum은 반드시 0으로 초기화 되어야한다.!! 
/*	while(i < 1000){
		
		printf("%d\n", i+1);
		i++;
	//	printf("%d",i);
		sum = sum + i;		// 1.0 + 1, 2.1+2  
	} 

	printf("1~1000까지의 합은 %d 입니다.", sum );*/
	
	for(i=1; i<=100; i++){
		
		printf("%d\n",i);
		sum = sum + i;
		
	}
	printf("1~100까지의 합은 %d 입니다.", sum);
	 
	
	return 0;
}
