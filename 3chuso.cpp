#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>
int tachso(char A[], int start){
	char *so = (char*)malloc(4*sizeof(char));
	int j = 0;
	for (int i = start; i < strlen(A); i++){
		if (j == 3) break;
		else {
			so[j] = A[i];
			j++;
		}
	}
	so[j] = '\0';
	return atoi(so);
}
int main(){
	int T;
	scanf("%d \n",&T);
	
	for (int k =1 ; k <= T; k++){
		int R[1000] = {0}, number,dem=0;
		char A[50];
//		fflush(stdin);
		gets(A);
		for (int i = 0; i < strlen(A) - 2; i++){
			number = tachso(A,i);
			R[number]++;
		}
		for (int i = 100; i < 1000; i++){
			if (R[i] >= 1) dem++;
		}
		printf("%d\n",dem);
		
	}
	return 0;
}
