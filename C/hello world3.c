#include <stdio.h>

void func(); 	// �Լ��� ���� 

int main()
{
	
	printf("%s %s\n", "Hi","123");	// %s�� ���ڿ��� ��Ÿ��. 
	printf("%d\n", 1234);
	printf("%c\n", 'A');		// "���ڿ�" , '����'
	printf("%d\n", 'A');		// A�� ������ ����ϸ� �ƽ�Ű�ڵ� ���� 65�� ����  
	printf("%c\n", 65);			// ���ڷ� ���� ����ϸ� A����  
	printf("%lf\n", 3.14);	 	// �Ǽ��� ��Ÿ���� %lf  : �Ҽ����� �� ���� ��Ÿ���� �� 	 
	
	func(); 	//func() �Լ� ȣ�� ,����� ���ο��� �Ǿ���   
	return 0;
}

void func()		// �Լ����� 
{
	printf("func\n");
	
 } 

