#include <stdio.h>
main(void)
{
	int x = 10, y = 20;
	int* const CONST_POINTER = &x;
	*CONST_POINTER = 30;
	printf("%d\n", *CONST_POINTER);

	//CONST_POINTER = &y;

	/*
	const int * p --> 값이 상수가 된다! (주소 변경이 가능 : 값 변경 불가 )
	int const * p --> 값이 상수가 된다! ( 주소 변경 가능 : 값 변경 불가 )
	int * const p --> 포인터(주소가)가 상수 ( 주소 변경 불가 : 값 변경 가능)
	const int * const p = &y; --> 주소와 값 모두 상수라 아예 변경 불가
	
	const 의 위치가 * 앞에 붙느냐 뒤에 붙느냐에 따라 상수의 의미가 달라짐
	* 뒤에 const가 붙으면 주소가 상수인것
	*/

	const int* p = &y;
	//*p = 30;
	p = &x;

	const int* const po = &y;
	//*po = 10;
	//po = &x;


	




	return 0;
}
