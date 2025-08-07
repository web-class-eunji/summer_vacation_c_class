#include <stdio.h>
main(void)
{
	/*
	for(초기;조건;증감){
		for(초기;조건;증감){
			
		}
	}
	*/

	int firstFor, secondFor;

	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d행 %d열\n", firstFor, secondFor);
		}
		printf("\n");
	}


	printf("=============구구단 출력=================\n");
	int gugudanFirst, gugudanSecond;
	
	for (gugudanFirst = 2; gugudanFirst <= 9; gugudanFirst++) {
		printf("%d 단\n",gugudanFirst);
		for (gugudanSecond = 1; gugudanSecond <= 10; gugudanSecond++) {
			printf("%d X %d = %d\n", gugudanFirst, gugudanSecond, gugudanFirst * gugudanSecond);
		}
		printf("\n");
	}
	return 0;
}