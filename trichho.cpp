#include <stdio.h>
#include <string.h>
int fistspace(char A[]){
	for (int i = 0; i < strlen(A); i++){
		if (A[i] == ' ') return i;
	}
}
int main(){
	char A[50],B[10];
	int start, i = 0;
	printf("Nhap chuoi: \n");
	gets(A);
	for (start = 0; start <fistspace(A); start++){
		B[i] = A[start];
		i++;
	}
	printf("Ho sau khi tach la: [%s]",B);
	return 0;
}
