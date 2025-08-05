#include <stdio.h>
main(void)
{
	/*
		입력받은 학점이 90 이상이면 A
		80 이상이면 B
		70 이상이면 C
		60 이상이면 D
		입력받은 점수가 범위에 존재하지 않는다면 재시험 당첨 출력
	*/
	int score;
	printf("점수를 입력해주세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("%d 점은 A학점입니다. 참잘했어요~~", score);
	}
	else if (score >= 80) {
		printf("%d 점은 B학점입니다.", score);
	}
	else if (score >= 70) {
		printf("%d 점은 C학점입니다.", score);
	}
	else if (score >= 60) {
		printf("%d 점은 D학점입니다.", score);
	}
	else {
		printf("재시험 당첨", score);
	}

	return 0;
}