#include <stdio.h>

int main()
{
	int n, m, plus, minus, x, nanugi;
	char ch;
	
	printf("��ȣ�� �Է��ϼ���.\n"); 
	scanf("%c", &ch);
	printf("�ΰ��� ������ �Է��ϼ���. \n");
	scanf("%d%d", &n, &m);
	
	if(ch == '+'){
		plus = n + m;
		printf("n + m�� %d", plus);
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
		printf("�𸣰ھ��.");
	}
	

	
	
	return 0;
}
