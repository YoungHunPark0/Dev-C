#include <stdio.h>

int main()
{
	int num;		//���� ����
	 
	num = 10;		//num ������ 10�� ���� 
	printf("num : %d\n", num); 		// 
	num = 20;
	printf("num : %d\n", num);
	
	char ch;		// ���������� ��������. 
	ch = 'A';		// ch������ A ����. 
	
	printf("ch : %c\n", ch); 
	
	ch = 100;
	printf("ch : %d\n", ch);
	
	printf("char size : %d\n", sizeof(char));
	printf("int size : %d\n", sizeof(int));
	printf("float size : %d\n", sizeof(float));
	printf("double size : %d\n", sizeof(double));		//�Ǽ����¸� ����Ҷ��� double�� ���� ����. 
	printf("long float size : %d\n", sizeof(long));
	
	char ch1, ch2, ch3, ch4;
	//char ch = 'a'; 	// ������ �ʱ�ȭ.	
	int n=0;
	ch1 = 'L'; 
	ch2 = 'o';	
	ch3 = 'v';	
	ch4 = 'e';
	printf("ch : %c%c%c%c\n", ch1, ch2, ch3, ch4);
	printf("n : %d\n",n);
	
	return 0;
}
