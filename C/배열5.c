#include <stdio.h>

int main()
{
	char str[30];		//char ���� �迭 ����. 
	
	printf("���ڿ��� �Է��ϼ���.");
	scanf("%s", str);	// str(�迭�̸�) ��ü�� �ּ��̱� ������ �ּҿ����� & �������. 
	
	printf("%s\n", str);
	printf("%c\n", str[7]);		// 8 ��°�� ���ڰ� ��µȴ�. 
	
	return 0;
}
