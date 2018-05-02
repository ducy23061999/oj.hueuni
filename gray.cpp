#include <bits/stdc++.h>
int main(){
	int n;
	char s[100];
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		s[i] = '0'; 
	}
	s[n] = '\0';
//	printf("%s",s);
	
	for (int i = 0 ; i < pow(2,n);i++){
		if ((s[i] == s[i+1]&& s[i] == '0' )){
			s[i] = '1';
		}else
		if (s[i] == '1' && s[i+1] == '0')
			s[i+1] == '1';
	}
	printf("%s",n);
}
