#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
int get(char A[], int start){
	char *so = (char*)malloc(10*sizeof(char));
	int j = 0;
	for (int i = start; isdigit(A[i]) && i < strlen(A); i++){
		so[j] = A[i];
		j++;
	}
	so[j] = '\0';
	return atoi(so);
}
int main(){
		char A[100000];
		int number = 0,S=0;
		gets(A);
		for (int i = 0; i < strlen(A); i++){
			if (isdigit(A[i])){
				S+= get(A,i);
				while(!isalpha(A[i])) i++;
			}
		}
		printf("%d",S);
		
	
	return 0;
}


