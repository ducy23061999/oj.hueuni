#include <stdio.h>
int main(){
	#ifndef ONLINE_JUDGE
	//	freopen("input.txt","r",stdin);
	#endif
	int A[100][100];
	int N;
	int S=0;
	scanf("%d \n",&N);
	for (int i = 0; i < N; i++)
		for (int j = 0 ; j < N; j++)
			scanf("%d",&A[i][j]);
	for (int i = 0; i < N; i++)
		for (int j = 0 ; j < N; j++)
		{
			S+= A[i][j];
			if (j == 3) {
				printf("%d\n",S);
				S=0;
			}
		}
	return 0;
}
