#include <stdio.h>

int main()
{
	int n = 20;
	if(n < 10){
		printf("n은 10보다 작다.");
	}
	else if((10 <= n) && (n < 20)){		// 조건2개를 합칠때는 &&을 사용한다. 각 조건마다 괄호를 쳐준다. 
		 printf("n은 10보다 크거나 같고 20보다 작다.");
	}
	else{
		printf("n은 20보다 같거나 크다.");
	} 
	return 0;
}
