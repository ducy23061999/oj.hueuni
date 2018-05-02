#include <stdio.h>
#include <string.h>
#include <string>
int main(){
	char A[20];
	gets(A);
	for (int i = 0; i < strlen(A); i++){
		if (A[i] == ',') A[i] = ' ';
	};
	printf("%s",A);
}
