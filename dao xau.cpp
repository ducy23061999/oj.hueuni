#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
void lamdephoten(char str[]){
	str[0] = toupper(str[0]);
	for (int j = 1; j<strlen(str); j++){
		if (str[j-1] == ' '){
			str[j] = toupper(str[j]);
		}else
			str[j] = tolower(str[j]);
	}	
	printf("Ho ten sau khi lam dep: %s\n",str);
}
int findlastspace(char A[]){
	for (int i = strlen(A) - 1; i >= 0; i--){
		if (A[i] == ' ') return i + 1;
	}
}
int fistspace(char A[]){
	for (int i = 0; i < strlen(A); i++){
		if (A[i] == ' ') return i -1;
	}
}
void hoanvi(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
char *trichho(char A[]){
	int start, i = 0;
	char* B = (char*)malloc(10*sizeof(char));
	for (start = 0; start <= fistspace(A); start++){
		B[i] = A[start];
		i++;
	}
	return B;
}
char *trichten(char A[]){
	int start, i = 0;
	char* B = (char*)malloc(15*sizeof(char));
	for (start = findlastspace(A); start <= strlen(A); start++){
		B[i] = A[start];
		i++;
	}
	return B;
}
void daonguoc(char  A[]){
	int check = strlen(A);
	if (check % 2 == 0){
		for (int i = 0; i <= check/2 -1; i++){
			hoanvi(&A[i], &A[check - i -1]);
		}
	}else {
		for (int i = 0; i <= check/2 -2; i++){
			hoanvi(&A[i], &A[check - i -2]);
		}
	}
	printf("Chuoi sau khi dao nguoc: %s",A);
}
int demtu(char A[]){
	int sotu=0,i=0;
	while(A[++i]!=0)
        if(A[i]!=' '&&(A[i+1]==' '||A[i+1]==0)) sotu++;
    return sotu;
}

int main(){
	char A[100];
	fflush(stdin);
	printf("Nhap ho ten: ");
	gets(A);
	lamdephoten(A);
	printf("Trich ho: %s\n",trichho(A));
	printf("Trich ten: %s\n",trichten(A));
	printf("So tu: %d\n",demtu(A));
	daonguoc(A);
	
}

