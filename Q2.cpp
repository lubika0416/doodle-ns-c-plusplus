#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int* ptr; // int형 변수를 가르키는 포인터 선언

	ptr = &a;  // a의 주소값
	*ptr = 30; // ptr이 가르키고 있는 변수(a라는 그릇) 즉 a = 30; 이 되는 꼴 이하동일

	ptr = &b;
	*ptr = 10;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *ptr); // 여전히 b를 가르키고 있으니 10의 값
}