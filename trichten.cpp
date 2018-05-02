#include <stdio.h>
#include <string.h>
int findlastspace(char A[]){
	for (int i = strlen(A) - 1; i >= 0; i--){
		if (A[i] == ' ') return i + 1;
	}
}
int main(){
	char A[50],B[10];
	int start, i = 0;
	printf("Nhap chuoi: \n");
	gets(A);
	i = 0;
	for (start = findlastspace(A); start < strlen(A); start++){
		B[i] = A[start];
		i++;
	}
	printf("Ten sau khi tach la: [%s]",B);
	
	
}
