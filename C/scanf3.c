#include <stdio.h>

int main()
{
	char ch;
	int num;
	/*
	printf("���ڸ� �Է��ϼ���. ");
	scanf("%c",&ch);
	printf("���� �Է� ");
	scanf("%d", &num); */
	
	printf("���� �Է� ");		//���� �ڵ�� ���� ���� ������ �ٲ㼭 �����غ�. 
	scanf("%d", &num);
	getchar();		//buffer�� �ִ� ���ڸ� �ϳ� ������. 
	printf("���ڸ� �Է��ϼ���. ");
	scanf("%c",&ch);
	printf("C : %c, num : %d", ch, num);
	return 0;
}
