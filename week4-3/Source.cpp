#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main() {
	char x[10000];
	int i, y, j = 1;
	scanf("%[^\n]", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if (x[i] == 48 || x[i] == 49 || x[i] == 50 || x[i] == 51) {
			printf("%c", x[i]);
		}
		else if (x[i] == 52 || x[i] == 53 || x[i] == 54 || x[i] == 55) {
			printf("%c", x[i]);
		}
		else if (x[i] == 56 || x[i] == 57 ) {
			printf("%c", x[i]);
		}
	}
}