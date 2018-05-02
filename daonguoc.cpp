#include <stdio.h>
#include <string.h>
// Hoan vi 2 ki tu
void hoanvi(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	char A[100];
	int check;
	printf("Nhap chuoi: \n");
	gets(A);
	check = strlen(A);
	if (check % 2 == 0){
		for (int i = 0; i <= check/2 -1; i++){
			hoanvi(&A[i], &A[check - i -1]);
		}
	}else {
		for (int i = 0; i <= check/2 -2; i++){
			hoanvi(&A[i], &A[check - i -2]);
		}
	}
	printf("%s",A);
	return 0;
}
