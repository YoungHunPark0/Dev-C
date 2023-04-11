#include <stdio.h>

int main()
{
	int num;		//변수 선언
	 
	num = 10;		//num 변수에 10을 저장 
	printf("num : %d\n", num); 		// 
	num = 20;
	printf("num : %d\n", num);
	
	char ch;		// 문자형태의 변수선언. 
	ch = 'A';		// ch변수에 A 저장. 
	
	printf("ch : %c\n", ch); 
	
	ch = 100;
	printf("ch : %d\n", ch);
	
	printf("char size : %d\n", sizeof(char));
	printf("int size : %d\n", sizeof(int));
	printf("float size : %d\n", sizeof(float));
	printf("double size : %d\n", sizeof(double));		//실수형태를 사용할때는 double을 많이 쓴다. 
	printf("long float size : %d\n", sizeof(long));
	
	char ch1, ch2, ch3, ch4;
	//char ch = 'a'; 	// 변수의 초기화.	
	int n=0;
	ch1 = 'L'; 
	ch2 = 'o';	
	ch3 = 'v';	
	ch4 = 'e';
	printf("ch : %c%c%c%c\n", ch1, ch2, ch3, ch4);
	printf("n : %d\n",n);
	
	return 0;
}
