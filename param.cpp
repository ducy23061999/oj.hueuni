#include <stdio.h>
#include <string.h>
#include <string>
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int T;
	scanf("%d \n",&T);
	for (int k = 1; k <= T; k++){
//		fflush(stdin);
		char s[500];
		gets(s);
		int A[126] = {0},dem=0;;
		for (int i = 0 ; i < strlen(s); i++){
			s[i] = tolower(s[i]);
			A[s[i]]++;
		}
		for (int i = 0 ; i < 126; i++){
			if (i >= 97 && i <= 122){ 
				if (A[i] >= 1) dem++;
			}
		}
//		printf("%d",dem);
		if (dem == 26) printf("YES\n");
		else printf("NO\n");
	}
}
