#include <stdio.h>
main(void)
{
	/*
	for(�ʱ�;����;����){
		for(�ʱ�;����;����){
			
		}
	}
	*/

	int firstFor, secondFor;

	for (firstFor = 1; firstFor <= 3; firstFor++) {
		for (secondFor = 1; secondFor <= 2; secondFor++) {
			printf("%d�� %d��\n", firstFor, secondFor);
		}
		printf("\n");
	}


	printf("=============������ ���=================\n");
	int gugudanFirst, gugudanSecond;
	
	for (gugudanFirst = 2; gugudanFirst <= 9; gugudanFirst++) {
		printf("%d ��\n",gugudanFirst);
		for (gugudanSecond = 1; gugudanSecond <= 10; gugudanSecond++) {
			printf("%d X %d = %d\n", gugudanFirst, gugudanSecond, gugudanFirst * gugudanSecond);
		}
		printf("\n");
	}
	return 0;
}