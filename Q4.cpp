// 배열을 만들고 행의 합 마다 모두 더해서 출력해주는 프로그램
#include <stdio.h>

int main() {
	int h, v;
	int arr[12][12] = {};
	
	scanf("%d %d", &h, &v);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < v; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
/*이중포문, int c = 0; 까지 시도는 좋았다 
이중포문을 이용하되 int sum = 0;을 포문 안에서 선언해야 한다
*/

	for (int i = 0; i < h; i++) {
		int sum = 0;
		for (int j = 0; j < v; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}