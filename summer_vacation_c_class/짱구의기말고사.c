#include <stdio.h>
main(void)
{
	// 국어 : 68 / 영어 : 75 / 수학 : 88 / 사회 : 60 / 과학 : 96
	// 짱구의 평균 구하기
	// 변수 2개만
	// 소수점 한자리 출력

	int total = 68 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;

	printf("짱구의 평균은 : %.1f점 입니다.", avg);

	// 국어 : 64 / 영어 : 56 / 수학 : 87.5 / 사회 : 76.8 / 과학 : 96.9]
	//소수점 2자리까지 출력
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg2 = total / 5.0f;
	printf("철수의 평균은 : %.2f점 입니다.", avg2);

	return 0;
}