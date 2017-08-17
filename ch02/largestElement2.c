#include <stdio.h>
#include <time.h>


int main (void){

	int DATA[10] ={22,65,1,99,32,17,74,49,33,2};
	int N, LOC, MAX, K;
	N = 10;
	K = 0;
	LOC = 0;
	MAX = DATA[0];

	while(K<N){
		if (MAX<DATA[K]){
			LOC=K;
			MAX=DATA[K];
		}
		K= K+1;
	}
	
	printf("LOC = %d, MAX %d\n", LOC, MAX);
	return 0;
}
	
