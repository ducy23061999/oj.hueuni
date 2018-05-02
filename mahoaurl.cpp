#include <bits/stdc++.h>

int main(){
	int T;
	scanf("%d \n",&T);
	for (int k = 1; k <= T; k++){
		char A[10000];
		//fflush(stdin);
		gets(A);
		printf("Case #%d: ",k);
		for (int i =0 ; i <strlen(A); i++){
			switch (A[i]){
				case ' ': 
					printf("%%20");
					break;
				case '!':
					printf("%%21");
					break;
				case '$':
					printf("%%24");
					break;
				case '%':
					printf("%%25");
					break;
				case '(':
					printf("%%28");
					break;
				case ')':
					printf("%%29");
					break;
				case '*':
					printf("%%2a");
					break;
				default:
					printf("%c",A[i]);
					break;
			}
		}
		printf("\n");
	}
}
