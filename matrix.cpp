#include <bits/stdc++.h>
int kiemtra(int A[],long n){
	int dem = 0, dem2=0;
	for (int i = 0; i <n; i++){
		if (A[i] > A[i + 1] && i < n -2)
			return 1;
		else {
			if (A[i] == A[i+1] && i < n-1)
			dem2++;
			else dem++;
		};
		if ((dem -2 == i) || (dem2 == i - 1 && dem == 2)) return 0;
		//printf("\n %d --> %d",dem,dem2);
	
	}
	
	
}
int main(){
	//freopen("input.txt","r",stdin);
	int A[100000];
	int n;
	scanf("%d \n",&n);
	for (int i = 0; i<n; i++)
		scanf("%d",&A[i]);
	
	if (kiemtra(A,n) == 0) printf("Yes");
	else printf("No");
}
