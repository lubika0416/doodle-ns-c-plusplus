/*
100개 이하의 정수를 입력받아서
첫 줄에는 짝수 번째 숫자들을 순서대로 출력하고
다음 줄에는 홀수 번째 숫자들을 순서대로 출력하는 프로그램
*/

#include <stdio.h>

int main() {
	int n;
	int arr[105] = {}; // 정해진 값이 100이면 그것보다 조금 넉넉하게 설정

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]); // for문을 통해서 0, 1, 2, 3 ~ 하나씩 입력받기
	}

	for (int i = 1; i < n; i += 2) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i += 2) {
		printf("%d ", arr[i]); // for문 초입에 초기화되니까 i를 재사용해도 ok
	}
	printf("\n");
}