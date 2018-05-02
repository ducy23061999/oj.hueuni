#include <bits/stdc++.h>
void nhap(int A[], int n){
	for (int i = 0; i < n; i++){
		scanf("%d",&A[i]);
	}
}
void sapxep(int A[], int n){
	for (int i = 0; i < n -1 ; i++)
		for (int j = 1; j < n; j++){
			if (A[i] > A[j]){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int n,A[1000],B[1000],C[1000];
	scanf("%d\n",&n);
	nhap(A,n);
//	for (int i = 0; i < n; i++){
//		printf("%d ",A[i]);
//	}
	int k = 0, m = 0;
	for (int i = 0 ; i < n; i++){
		if (A[i] % 2 == 0) {
			B[k] = A[i];
			k++;
		} else {
			C[m] = A[i];
			m++;
		}
	}
	
	//printf("%d | %d\n",k,m);
	sapxep(B,k);
	sapxep(C,m);
	for (int i = 0; i < k; i++){
		printf("%d ",B[i]);
	}
	for (int i = 0; i < m; i++){
		printf("%d ",C[i]);
	}
	
}
