#include <bits/stdc++.h>
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	char A[31];
	int Tong =0, j = 0;
	gets(A);
	for (int i = strlen(A) -1 ;i >= 0; i-- ){
		if (A[i] == '1') {
			Tong += pow(2,j);
//			printf("%d|",pow(2,j));
			j++;
			
		} else j++;
	};
	printf("%d",Tong);
	return 0;
}
