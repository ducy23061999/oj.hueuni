#include <stdio.h>
#include <string.h>

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int T;
	scanf("%d\n",&T);
	for	(int j = 1; j <=T; j++){
		char A[80];
		gets(A);
		int i =0,dem=0,max = 0;
		while ((A[i] != ' ' ) && i < strlen(A)){
			if ((A[i] >= 65 && A[i] <= 122) || A[i] == 39)
			dem++;
			
			if (A[i + 1] == ' ' || A[i+1] == '\0') {
				i = i+2;
				if (dem > max ) max = dem;
				dem = 0;
			}else i++;
			//printf("(%d)",i);//debug :))
		}
		printf("%d\n",max);
	}
		
}
