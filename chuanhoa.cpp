#include <stdio.h>
#include <string.h>
void xoa(char A[], int p){
	for (int i = p; i<strlen(A); i++)
	A[i] = A[i+1];
}
int main()
{
	#ifndef ONLINE_JUDGE
	//	freopen("input1.txt","r",stdin);
	#endif
	int T;
	scanf("%d\n",&T);
	for (int i = 1; i<=T; i++){
		char A[500];
		gets(A);
		for (int i = 0; i < strlen(A); i++){
			while (true)
			{
				if ((A[i] == ' '&& A[i+1] == ' ') || (A[i] == ' ' && i == 0))
				xoa(A,i);
				else break;
			}
				
			
		}
		printf("%s \n",A);
	}
	
}
