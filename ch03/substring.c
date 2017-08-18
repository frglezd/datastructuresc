#include <stdio.h>

void main(){
	char S[80] = {"TO BE OR NOT TO BE"};
	char *SUBSTR(char*, int, int);

	printf("STRING = %s", S);
	printf("\n \nSUBSTRING (S,4,7) = %s", SUBSTR(S,4,7));
}

char *SUBSTR(char *STR,int i, int j){
	int k, m=0;
	char STRRES[80];
	for(k=i-1; k<=i+j-1-1;k++){
		STRRES[m] = STR[k];
		m=m+1;
	}
		STRRES[m] = '\0';
	return(STRRES);
}
