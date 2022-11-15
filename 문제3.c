//문제3
#include <stdio.h>
#define m 3 //행렬A의 행
#define n 3 //행렬A의 열, 행렬B의 행
#define p 3 //행렬B의 열

int main(void) {
	int i, j, k;
	int A[m][n]; //행렬A
	int B[n][p]; //행렬B
	int C[m][p]; //행렬C, C=A*B

	for (i = 0; i < m; i++) {//이중 for문을 이용해 행렬A를 입력 받음
		for (j = 0; j < n; j++) {
			printf("A[%d][%d]: ", i, j);//행렬A의 성분 위치를 제시
			scanf_s("%d", &A[i][j]);//행렬A의 성분을 입력 받음
		}
	}
	printf("\n");

	for (i = 0; i < n; i++) {//이중 for문을 이용해 행렬B를 입력 받음
		for (j = 0; j < p; j++) {
			printf("B[%d][%d]: ", i, j);//행렬B의 성분 위치를 제시
			scanf_s("%d", &B[i][j]);//행렬B의 성분을 입력 받음
		}
	}
	for (i = 0; i < n; i++)//이중 for문을 이용해 행렬C(A와 B의 곱)를 계산
		for (j = 0; j < p; j++) {
			C[i][j] = 0;//행렬C 초기화
			for (k = 0; k < m; k++)//for문을 이용해 행렬의 크기 계산(행렬 A,B의 성분을 곱하고 모두 더함)
				C[i][j] += A[i][k] * B[k][j];
		}
	printf("\n");

	for (i = 0; i < 3; i++) {//이중 for문을 이용해 행렬C를 출력
		for (j = 0; j < p; j++) {
			printf("C[%d][%d]=%d", i, j, C[i][j]);
			printf("\n");
		}
	}
	return 0;
}