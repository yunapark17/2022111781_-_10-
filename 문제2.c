//문제2
#include <stdio.h>
#define ROWZIZE 2
#define COLZIZE 3
int main() {
	int i, j;
	int td[ROWZIZE][COLZIZE];

	for (i = 0; i < ROWZIZE; i++) {//이중 for문을 이용해 배열의 성분을 입력 받음
		for (j = 0; j < COLZIZE; j++) {
			printf("td[%d][%d]: ", i, j);//배열 성분 위치
			scanf_s("%d", &td[i][j]);//배열 성분 입력
			printf("\n");
		}
	}

	for (i = 0; i < ROWZIZE; i++) {//이중 for문을 이용해 입력받은 배열의 성분을 출력
		for (j = 0; j < COLZIZE; j++) {
			printf("td[%d][%d]: %d\n", i, j, td[i][j]);
		}
	}

}