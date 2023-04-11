#include <stdio.h>

int main()
{
	int n, m, plus, minus, x, nanugi;
	char ch;
	
	printf("기호를 입력하세요.\n"); 
	scanf("%c", &ch);
	printf("두개의 변수를 입력하세요. \n");
	scanf("%d%d", &n, &m);
	
	if(ch == '+'){
		plus = n + m;
		printf("n + m은 %d", plus);
	}
	else if(ch == '-'){
		minus = n - m;
		printf("n - m = %d", minus);
	}
	else if(ch == '*'){
		x = n * m;
		printf("n * m = %d", x);
	}
	else if(ch == '/'){
		nanugi = n / m;
		printf("n / m = %d", nanugi);
	}
	else{
		printf("모르겠어요.");
	}
	

	
	
	return 0;
}
