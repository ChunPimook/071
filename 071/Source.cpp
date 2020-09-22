#include <stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	if ((a == 0 && b <= 59) || (a == 1 && b <= 0)) {
		if (b >= 0) {
			printf("Free");
		}
	}
	else {
		int c = a * 30;
		if (b > 0) {
			c += 30;
		}
		c -= 30;
		printf("%d", c);
	}
}