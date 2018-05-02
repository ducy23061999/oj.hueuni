#include <bits/stdc++.h>
#include <string>
char * xoa(char A[],int start, int end){
	int temp;
	char *B = (char *)malloc(500*sizeof(char));
	for (int i = 0; i <= start; i++){
		B[i] = A[i];
		if ( i == start){
			temp = i;
			for (int j = end + 1; j < strlen(A); j++){
				B[temp] = A[j];
				temp++;
			}
		}
	};
	B[temp] = '\0';
	return B;
}
int main(){
	#ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	#endif
	char A[500];
	char *str = (char *)malloc(500*sizeof(char));
	char * p_start, *p_end;
	int start,end;
	gets(A);
	if (strstr(A,"/*") != NULL && strstr(A,"*/") != NULL){
			p_start = strstr(A,"/*");
			p_end = strstr(A,"*/");
			start = p_start - A;
			end = p_end - A + 1;
		}
	str = strcpy(str,A);
	while (true){
		str = xoa(str,start,end);
		if (strstr(str,"/*") != NULL && strstr(str,"*/") != NULL){
			p_start = strstr(str,"/*");
			p_end = strstr(str,"*/");
			start = p_start - A;
			end = p_end - A + 1;
		}else break;
		
	}
	printf("%s",str);
	
}
