#include <stdio.h>
main(void)
{
	// %d : int,char,short : ����
	// %c : char,short,int : ����
	// %f : float : �Ǽ�
	// %s : char(���ڿ�)
	// %p : ������ �ּҰ�
	// %lld : long long
	// %u : unsigned int ��ȣ ���� ����
	// %lf : long double, double

	long long x = 2200000000;
	printf("�� : %lld\n", x);

	printf("%10d\n", 42);
	printf("%5d\n", 12345);
	printf("%5d\n", 123456);
	printf("%-10d", 123456);
	printf("%d\n", 1);
	printf("%010d\n", 1234);

	printf("%8.2f\n", 3.1415); // 8 : ĭ ����, 2 : �Ҽ��� �ڸ���
	printf("%8.3f", 3.1415);


	return 0;
}