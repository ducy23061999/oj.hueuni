#include <stdio.h>
int checkKtrung(int A[], int n){
	int dem= 0;
	for (int i =0 ; i < n; i++){
		dem = i + 1;
		for (int j = 0; j < n; j++){
			if (A[i] != A[j] && i != j ) dem++;
			else break; //not found			
		}
		if (dem == n-1) return i;
	}
	return -1;
}
int main(){
	int A[100000];
	int n;
	scanf("%d",&n);
	for (int i = 0 ; i < n ; i++){
		scanf("%d",&A[i]);
	}
	printf("%d",checkKtrung(A,n));
	
	
	
}
