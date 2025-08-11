#include <stdio.h>
main(void)
{
	// 배열 이름 :변수와 동일
	// 배열에 담을 자료형 필요
	// 배열의 길이 : 배열에 포함될 데이터의 개수

	int numbers[5] = { 10,20,30,40,50 }; // 초기화리스트
	//int numbers[] = { 1,2,3 };
	numbers[0] = 100;
	
	int max;
	max = numbers[0];
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
		// 만약 max가 int i 로 접근한 데이터보다 작다면 max에 더 큰 값을 대입한다.
	}
	printf("최대값 : %d\n", max);
	
	return 0;
}
