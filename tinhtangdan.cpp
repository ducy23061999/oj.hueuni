#include <bits/stdc++.h>
int main(){
	int A[100000];
	int n;
	scanf("%d \n",&n);
	for (int i = 0 ; i < n; i++){
		scanf("%d",&A[i]);
	}
	int dem = 0,status = 0;
	for (int i = 1 ; i < n; i++){
		if (A[i] >= A[i -1]) dem++;
		//printf("%d\n",dem);
		else {
			printf("NO");
			break;
		}
		if (A[i] > A[i-1] && dem == n - 1) {
			status = 1;
			break;	
		}
	}// n = 5, dem = 4
	if (dem == n -1 || status == 1) printf("YES");
}
