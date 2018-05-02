#include <stdio.h>
#include <string.h>
#include <string>
int space(char A[]){
	for (int i = strlen(A) -1;i >=0; i--){
		if (A[i] == ' ') return i +1;
	}
	return -1;
}
int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int T;
	scanf("%d\n",&T);
	for	(int j = 1; j <=T; j++){
		char A[80];
		gets(A);
		for (int i = 0; i<space(A); i++){
			if (i == 0 || (A[i-1] == ' ' && A[i] != ' '))
			{
				printf("%c",tolower(A[i]));
			}
			
		}
		for (int k = space(A); k < strlen(A); k++){
			printf("%c",tolower(A[k]));
		}
		printf("%s\n","@huscmail.edu.vn");
		
	}
		
}
