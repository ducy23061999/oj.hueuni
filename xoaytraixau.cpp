#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char s[500];
	scanf("%d \n",&n);
	gets(s);
	if ( n % (strlen(s)) != 0){
		int du =  n % (strlen(s));
		for (int i = du; i < strlen(s); i++){
			printf("%c",s[i]);
		}
		for (int i = 0 ; i < du ; i++){
			printf("%c",s[i]);
		}
		printf("\n");
	}else puts(s);
	return 0;
}
