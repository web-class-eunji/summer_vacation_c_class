#include <stdio.h>
main(void)
{
	int x = 10;
	printf("%p\n", &x);
	// x�� �ּҸ� p�� �����ϰڴ�.
	// int : ������ �����ϴ� 4����Ʈ ����
	// &�� ����ϸ� �ּҿ� ������ �� �ִ�.

	int * p = &x;
	// * �� ����ϸ� �ּҸ� ������ �� �ְ� �ȴ�.
	printf("%p \n", p);
	printf("%d \n", *p);
	// *p : ������(�ּ� �ȿ� �ִ� �����Ͱ��� �����ϴ°�)

	double d = 3.14;
	double * ptr = &d;

	printf("%p \n", ptr);
	printf("%.2f \n", *ptr);


	return 0;
}