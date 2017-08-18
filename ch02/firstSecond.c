#include <stdio.h>
#include <time.h>

int DATA[10] ={22,65,1,99,32,17,74,49,33,2};
int N, LOC1, LOC2, FIRST, SECOND;

int main (void){

	time_t start_t, end_t;
	double diff_t;
	void FIND(int [], int, int, int);
	N = 10;
	LOC1 = -1;
	LOC2 = -1;

	time(&start_t);
	FIND(DATA, N, LOC1, LOC2);
	printf("FIRST = %d, LOC1 = %d, SECOND = %d, LOC2 = %d", FIRST, LOC1, SECOND, LOC2);
	time(&end_t);
	diff_t = difftime(end_t, start_t);
	printf("Execution time = %f\n", diff_t);

	return (0);
}

void FIND(int LIST[], int LEN, int L1, int L2) {

	int TEMP, K;
	FIRST = LIST[0];
	SECOND = LIST[1];
	L1 = 0;
	L2 = 1;

	if (FIRST < SECOND) {
		TEMP = FIRST;
		FIRST = SECOND;
		SECOND = TEMP;
		L2 = 0;
		L1 = 1;
	}

	for(K=2; K<LEN;K++){
		if(FIRST<LIST[K]){
			SECOND = FIRST;
			FIRST = LIST[K];
			L2 = L1;
			L1 = K;
		}
	else if(SECOND < LIST[K]){
		SECOND = LIST[K];
		L2 = K;
	}
}
	LOC1 = L1;
	LOC2 = L2;
}
