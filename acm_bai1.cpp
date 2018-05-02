#include <stdio.h>
void sapxep(int A[], int n){
	for (int i = 1; i <= n -1; i++){
		for (int j = i+1; j <= n; j++){
			if (A[i] > A[j]){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}
int main(){
	int A[500];
    int n;
    float TV;
	long S=0;
	scanf("%d\n",&n);
	for (int i = 1; i <= n; i++){
		scanf("%d",&A[i]);
		S+= A[i];
	}
	printf("%0.6f\n",(float)S /n);
	sapxep(A,n);
	if (n % 2 == 0){
		TV = (((float)A[n / 2] + (float)A[n/2 + 1])/2);
		printf("%0.6f\n",TV);
	}else {
		TV = (float)(A[n / 2 + 1]);
		printf("%0.6f",TV);
	}
	return 0;
}
