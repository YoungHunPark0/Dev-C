#include <stdio.h>

int main()
{
//	int i = 0;		// i ���� �� �ʱ�ȭ. 
//	while(i < 5){		
//		printf("hello\n");
//		i++;
//	}
	/*
	int i = 0;		// while�� ������ �ݺ��ϰ� �������� i�� ���� 1�� �������. 
	while(i){
		
		printf("hello\n");
		
	}	*/
	
	// while���� �Ἥ 1 ~ 100������ �� ���ϱ�.
	
	int i=0 ;
	int sum = 0; 	// sum�� �ݵ�� 0���� �ʱ�ȭ �Ǿ���Ѵ�.!! 
/*	while(i < 1000){
		
		printf("%d\n", i+1);
		i++;
	//	printf("%d",i);
		sum = sum + i;		// 1.0 + 1, 2.1+2  
	} 

	printf("1~1000������ ���� %d �Դϴ�.", sum );*/
	
	for(i=1; i<=100; i++){
		
		printf("%d\n",i);
		sum = sum + i;
		
	}
	printf("1~100������ ���� %d �Դϴ�.", sum);
	 
	
	return 0;
}
