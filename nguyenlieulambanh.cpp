#include <stdio.h>
#include <string.h>
#include <string>
void in(int A[], int n){
	for (int i = 0; i < n; i++){
		printf("%d(%d) ",A[i],i);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	#endif
	int T, S[126] = {0};
	scanf("%d \n",&T);
	for (int k = 1; k <= T; k++){
		char A[500];
		gets(A);
		// cout  tan so
		for (int i = 0; i < strlen(A); i++){
			if (islower(A[i])){
				if (S[A[i]] < k && k>=2 && S[A[i]] == k-1) S[A[i]]++;
				if (k == 1 ) S[A[i]]++;
			}
				
			if (i == strlen(A) - 1){
				for (int v = 0; v < 126; v++){
					if (( S[v] >= k && k < T)) S[v] = k;
					
				}
			}
		}
		
		
		
	}
	int dem=0;
	for (int i = 0; i < 126; i++){
		if (S[i] == T) dem++;
	}
	printf("%d",dem);
	
}
