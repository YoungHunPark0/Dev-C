#include <stdio.h>

int main()
{
	int i;
	char str[30];
	
	/*
	for(i=0; i<30; i++){
		
		printf("�Է��ϼ��� : ");
		scanf("%c", &str[i]); 
		
	}*/
	
	printf("���ڿ��� �Է��ϼ���: ");		//���ڿ� char�� ��쿡�� for���� ���� �ʴ´�. �Ƚᵵ ���� ����. 
	scanf("%s", str);
	printf("�Է��� ���ڿ��� %s\n",str);
	for(i = 0; i<30; i++){
		printf("%c", str[i]);
	}
	
	return 0;
}
