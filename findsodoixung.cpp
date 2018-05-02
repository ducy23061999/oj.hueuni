#include <bits/stdc++.h>
long long check(char* so){
	char *mang = (char*)malloc(10000* sizeof(char));
	long long j = 0;
	for (long long i = strlen(so) - 1; i >= 0; i--)
	{
		mang[j] = so[i];
		j++; 
	}
	mang[j] = '\0';
	long long result = atoi(mang);
	return result;
}
int main(){
	int T;
	scanf("%d \n",&T);
	for (int k = 1;k <= T; k++){
		long long so;
		
		gets(so);
		//while (check(so) == false) so++;
		printf("%lld\n",check(so));
	}
}
