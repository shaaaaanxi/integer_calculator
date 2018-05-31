#include<stdio.h>

int main() {

	char cal[10];
	int num[10], i;
	for (i = 0; cal[i - 1] != '='; i++) {
		scanf_s("%d %c", &num[i], &cal[i]);
	}
	i--;
	int max = i, result;

	for (i = 0; i < max; i++) {
		if (cal[i] == '*' || cal[i] == '/') {
			if (cal[i] == '*') {
				multi(i, max, cal, num);
				max--;
				i--;
			}
			else {
				divide(i, max, cal, num);
				max--;
				i--;
			}
		}
	}

	for (i = 0; i < max; i++) {
		if (cal[i] == '+' || cal[i] == '-') {
			if (cal[i] == '+') {
				plus(i, max, cal, num);
				max--;
				i--;
			}
			else{
				minus(i, max, cal, num);
				max--;
				i--;
			}
		}
	}

	printf("%d\n", num[0]);

	system("pause");
}