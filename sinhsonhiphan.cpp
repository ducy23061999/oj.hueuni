#include <bits/stdc++.h>
void bangkhong(char A[], int point){
	for (int i = point; i < strlen(A); i++){
		 A[i] =	'0';
	}
}
int main(){
	char A[100];
	int n,i;
	scanf("%d",&n);
	//sinh A
	for (int i = 0; i < n; i++){
		A[i] = '0';
	}
	A[n] = '\0';
	i = strlen(A) - 1;
	do {
		if (A[i] == '0') A[i] = '1' ;
		else {
			A[i + 1] = '1';
			bangkhong(A,i);
		}
	}while ( i == 0);
	puts(A);
	
	
}
