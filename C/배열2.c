#include <stdio.h>

int main()
{
	int ary[3] = {10, 20, 30};
	
	printf("0번방값 = %d\n", ary[0]);
	printf("ary 시작주소 : %p\n", ary);
	printf("ary[0] 주소: %p\n", &ary[0]);	//ary 시작주소 = ary[0]의 시작주소
	printf("1번방에저장된값 : %d\n", ary[1]); 
	printf("1번방 주소 : %p\n", &ary[1]);
	printf("1번방 주소 : %p\n", ary+1);		// 위의 &ary[1]과 ary +1의 주소값은 같게 나온다. => 같은 말이다. 

	
	return 0;
}
