// for ������ �迭 �ٷ��. 
#include <stdio.h>

int main()
{
	/*
	int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	
	for(i = 0; i < 10; i++){
		
		printf("%d���� ��:%d\n", i, ary[i]);
		
	}
	//printf("%d", ary[4]);
	
	ary[4]=50;
	for(i=0; i < 10; i++){
		
		printf("%d���� �� :%d\n", i, ary[i]);
		
	}*/
	
	// ������ �迭 for�� �����. 
	int ary[5] ;
	int i;
	for(i = 0; i < 5; i++){
		printf("%d ��° ������ �Է��ϼ���. ", i );
		scanf("%d", &ary[i]); 
		
	}
	printf("�Էµ� ������ \n");
	
	for(i=0 ; i <5 ; i++){
		printf("%d\n", ary[i]);
		
	}
	
	return 0;
}
