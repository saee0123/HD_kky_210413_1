#include<stdio.h>

void main() {
	/*
	for (int _inumber0 = 1; _inumber0 < 5; _inumber0++) {
		for (int _inumber1 = 1; _inumber1 <= _inumber0; _inumber1++) {
			printf("%d", _inumber1);
		}
		printf("\n");
	}
	for (int _inumber2 = 3; _inumber2 >= 1; _inumber2--) {
		for (int _inumber3 = 1; _inumber3 <= _inumber2; _inumber3++) {
			printf("%d", _inumber3);
		}
		printf("\n");
	}
	*/
	int _inumber0 = 1;
	while (_inumber0 < 5) {
		int _inumber1 = 1;
		while (_inumber1 <= _inumber0) {
			printf("%d", _inumber1);
			_inumber0++;
		}
		printf("\n");
		_inumber1++;
	}
	int _inumber2 = 3;
	while (_inumber2>=1) {
		int _inumber3 = 1;
		while (_inumber3<=_inumber2) {
			printf("%d", _inumber3);
			_inumber3++;
		}
		printf("\n");
		_inumber2--;
	}
	fgetc(stdin);
}