#include <stdio.h>
#include <math.h>

int A[1000];
void CROSSOUT(int, int);

void main(){

	int K,N;

	printf("Enter the value of N: ");
	scanf("%d", &N);

	A[0]=-1;

	for (K=1; K<=N;K++)
		A[K] = K;

	for(K=2; K<=sqrt(N);K++)
		CROSSOUT(N,K);

	for(K=2; K <=N;K++)
		if(A[K] != 1)
			printf("%d ", A[K]);
}

void CROSSOUT(int n, int k){

	int L;

	if(A[k] == 1)
		return;

	for(L=2*k; L<=n; L=L+k)
		A[L]=1;
		return;
}
