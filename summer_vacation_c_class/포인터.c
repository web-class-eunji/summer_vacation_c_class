#include <stdio.h>
main(void)
{
	int x = 10;
	printf("%p\n", &x);
	// x의 주소를 p에 저장하겠다.
	// int : 정수를 저장하는 4바이트 변수
	// &를 사용하면 주소에 접근할 수 있다.

	int * p = &x;
	// * 을 사용하면 주소를 저장할 수 있게 된다.
	printf("%p \n", p);
	printf("%d \n", *p);
	// *p : 역참조(주소 안에 있는 데이터값에 접근하는것)

	double d = 3.14;
	double * ptr = &d;

	printf("%p \n", ptr);
	printf("%.2f \n", *ptr);


	return 0;
}