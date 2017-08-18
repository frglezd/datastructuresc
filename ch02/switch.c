#include <stdio.h>

int A = 10;
int B = 20;
void SWITCH(void);

void main() {

	printf("A = %d B = %d\n", A, B);
	SWITCH();
	printf("After calling SWITCH procedure, A = %d B = %d\n", A, B);
}

void SWITCH(void) {

	int TEMP;
	TEMP = A;
	A = B;
	B = TEMP;
	return;
}
