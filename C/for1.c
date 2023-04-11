#include <stdio.h>
// 1부터 50까지 for문으로 출력하기. => i를 1에서 51밑으로 반복설정하면 가능. 

int main()
{
	int i = 0;
//	int j = 0;
	/*
	for(i=0; i<50; i++){
		printf("i = %d\n", i+1);	
	}*/
	
	/*
	int a = 0, b = 0;
	b = a++ ;
	printf("a = %d, b = %d\n", a, b);		// j뒤에 ++붙으면 변수의 값이 먼저 나온 후에 ++이 붙으므로 0이 출력이된 후 1이 +됨.
	 
	a = 0;
	b = 0;
	b = ++a;
	printf("a = %d, b = %d\n", a, b);
	*/
	//printf("++j = %d\n", ++j);		// j앞에 ++붙으면 변수의 값 나오기 전에 1이 +되어서 나타나므로 1이 출력됨.
	 
	 for(i = 0; i < 10; i++)
	 {
	 	printf("i = %d\n", i);
	 	
	 }
	
	
	return 0;
}
