#include <stdio.h>

int main()
{
	int ary[3] = {10, 20, 30};
	
	printf("0���氪 = %d\n", ary[0]);
	printf("ary �����ּ� : %p\n", ary);
	printf("ary[0] �ּ�: %p\n", &ary[0]);	//ary �����ּ� = ary[0]�� �����ּ�
	printf("1���濡����Ȱ� : %d\n", ary[1]); 
	printf("1���� �ּ� : %p\n", &ary[1]);
	printf("1���� �ּ� : %p\n", ary+1);		// ���� &ary[1]�� ary +1�� �ּҰ��� ���� ���´�. => ���� ���̴�. 

	
	return 0;
}
