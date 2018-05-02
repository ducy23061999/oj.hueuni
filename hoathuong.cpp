#include <stdio.h>
#include <string.h>
#include <string>
int check(char A[]){
	int hoa = 0, thuong = 0;
	for (int i =0 ; i < strlen(A); i++){
		if (isalpha(A[i])){
			if (isupper(A[i])) hoa++;
				else if (islower(A[i])) thuong++;
		}
		
	}
	if (hoa > thuong) return 1 ;
	else return 0;
}
void hoa(char A[]){
	for (int i = 0; i < strlen(A) ; i++){
		if (isalpha(A[i])){
			A[i] = toupper(A[i]);
		}
	}
}
void thuong(char A[]){
	for (int i = 0; i < strlen(A) ; i++){
		if (isalpha(A[i])){
			A[i] = tolower(A[i]);
		}
	}
}
int main(){
	int T;
	scanf("%d \n",&T);
	for (int i = 1; i<=T; i++){
		char s[100];
		gets(s);
		if (check(s) == 1) hoa(s);
		else thuong(s);
		puts(s);
	}
	return 0;
}
