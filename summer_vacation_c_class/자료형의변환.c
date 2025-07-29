#include <stdio.h>
main(void)
{
	double change_number = 10;
	printf("%.15f\n", change_number);

	int change_number2 = 5.1123;
	printf("%d\n", change_number2);

	//����� �� ��ȯ
	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234);
	printf("%f\n", (double)22);
	printf("%f\n", (float)22);

	printf("%zu\n",sizeof(int)); //4
	printf("%zu\n", sizeof(char)); //1
	printf("%zu\n", sizeof(short)); 
	printf("%zu\n", sizeof(50)); //4
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(3.14));

	unsigned char ch; //���� ���� : 0 ~ 255 ( ���ε�: -128 ~ 127 )
	unsigned short sh; //���� ���� : 0 ~ 65,500 ( ���ε�: -32,000~32,000 )
	unsigned int in; //���� ���� : 0 ~ 42�� ( ���ε�: -21�� ~ 21�� )

	ch = 128;
	sh = 50000;
	in = 4100000000;
	printf("%d\n", ch);
	printf("%d\n", sh);
	printf("%u\n", in);

	char num = 255;
	printf("%d", num);
	// 255 / 2 = 127 ...1
	// 127 / 2 = 63 ...1
	// 63 / 2 = 31 ...1
	// 31 / 2 = 15 ...1
	// 15 / 2 = 7 ...1
	// 7 / 2 = 3 ...1
	// 3 / 2 = 1 ... 1
	// 1 / 2 = 0 ...1


	return 0;
}