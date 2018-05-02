#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <math.h>
int get(char A[], int start){
	char *so = (char*)malloc(10*sizeof(char));
	int j = 0;
	for (int i = start; isdigit(A[i]) && i < strlen(A); i++){
		so[j] = A[i];
		j++;
	}
	so[j] = '\0';
	return atoi(so);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	char s[10000];
	gets(s);
	long long cu = 0, moi = 0;
	int i = 0;
	while(!isdigit(s[i])) i++;
	cu = get(s,i);
	// thoat i ra so moi
	while(isdigit(s[i])) i++;
	// dua i toi so tiep theo
	while(!isdigit(s[i])) i++;
	moi = get(s,i);
	if (moi  > cu)
	printf("%lld",(moi - cu)*1200);
	else printf("%lld",(cu - moi)*1200);
}
