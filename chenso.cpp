#include <bits/stdc++.h>
void nhap(int A[], int n){
	for (int i = 0; i < n; i++){
		scanf("%d",&A[i]);
	}
}
void in(int A[], int n){
	for (int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int x,N;
	scanf("%d %d\n",&N,&x);
	int A[100000];
	nhap(A,N);
	for (int i = 0; i < N; i++){
		if (x >= A[i]){
			if ( i < N -1)
			{
				if (x <= A[i+1])
				{
					printf("%d",i + 1);
					break;
				}
			}
				
			else 
			{
				if (i == N -1)
				printf("%d",i+1);
				break;
			}
				
				
		}else
		{
			printf("%d",0);
			break;
		} 
	}	
	
}
