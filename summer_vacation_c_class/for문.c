#include <stdio.h>
main(void)
{
	/*
	for(초기값;조건식;증감식){
		조건이 참이라면 실행시킬 코드
	}
	*/

	int forNumber; 
	
	for (forNumber = 1; forNumber <= 10; forNumber++) {
		printf("반복 %d\n", forNumber);
	}

	int i;
	// i를 가지고
	// 반복10
	// 반복 9
	// 반복 8
	// 반복 7 
	// .
	// .
	// .
	// 반복1 까지 만들기
	for (i = 10; i >= 1; i--) {
		printf("반복 %d\n", i);
	}

	//제곱계산기 만들기
	//1의 제곱 : 1
	// 2의  제곱 : 4
	// 3의 제곱 : 9
	// 10의 제곱 : 100

	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d 의 제곱 : %d\n", square, square * square);
	}

	for (;;) {
		
	}

	while (1) {
		printf("");
	}
	return 0;
}