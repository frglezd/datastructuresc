#include <stdio.h>
#include <time.h>

int main (void){

	time_t start_t, end_t;
	double diff_t;
	
	int DATA[10] ={22,65,1,99,32,17,74,49,33,2};
	int ITEM = 17;
	int N, LOC, K;
	N = 10;
	K = 0;
	LOC = -1;

	time(&start_t);
	while(LOC==-1 && K<N){
		if (ITEM==DATA[K])
			LOC=K;
		K= K+1;
	}
	
	if(LOC==-1)
		printf("ITEM %d is not in the array DATA\n", ITEM);
	else
		printf("%d is the location of ITEM %d\n", LOC, ITEM);

	time(&end_t);
	diff_t = difftime(end_t, start_t);
	printf("Execution time = %f\n", diff_t);

	return (0);
}
	
