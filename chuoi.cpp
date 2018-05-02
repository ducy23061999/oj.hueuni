#include <stdio.h>
#include <string.h>
#include <string>
int space(char A[],int start){
	for (int i = start; i < strlen(A); i++){
		if (A[i] == ' ') return i-1;
	}
	return -1;
}
void in(int A[], int n){
	for (int i = 0; i <= n; i++){
		printf("%d ",A[i]);
	}
}
int max(int A[], int j){
	int max = A[0];
	for (int i = 1; i <= j; i++){
		if (A[i] > max) max = A[i];
	}
	return max;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	int T;
	scanf("%d\n",&T);
	for (int i = 0; i < T; i++){
		char str[80];
		//fflush(stdin);
		gets(str);
		int A[40],j=0,end=0,start=0;
		// Danh sach mang
		while(true){
			end = space(str,start);
			A[j] = end - start + 1;
			j++;
			start = end + 2;
			if (space(str,start) == -1) {
				A[j] = strlen(str) - start;
				break;
			}
		}
		printf("%d\n",max(A,j));
	}
	return 0;
}
