//문제1
#include <stdio.h>
void sum(int A[5], int B[5]);//합 void 함수
void mul(int A[5], int B[5]);//곱 void 함수

void sum(int A[5], int B[5]) {//합 void 함수
	int i;
	printf("A + B = { ");
	for (i = 0; i < 5; i++) {//for문을 이용해 일차원 배열의 합을 구함
		printf("%d ", A[i] + B[i]);//합 출력
	}
	printf("}\n");
}

void mul(int A[5], int B[5]) {//곱 void 함수
	int i;
	printf("A * B = { ");
	for (i = 0; i < 5; i++) {//for문을 이용해 일차원 배열의 곱을 구함
		printf("%d ", A[i] * B[i]);//곱 출력
	}
	printf("}\n");
}

int main(void)//main함수
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 5, 4, 3, 2, 1 };

	sum(A, B);
	mul(A, B);

	return 0;
}