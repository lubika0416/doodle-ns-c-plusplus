/*
100개 이하의 정수를 입력받아서
첫 줄에는 짝수 번째 숫자들을 순서대로 출력하고
다음 줄에는 홀수 번째 숫자들을 순서대로 출력하는 프로그램
*/

#include <stdio.h>

int main() {
	int n;
	int arr[100] = {};

	scanf("%d", &n);
	scanf("%d", &arr);

	for (int i = 1; i < n; i += 2) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int j = 0; j < n; j += 2) {
		printf("%d ", arr[j]);
	}
}