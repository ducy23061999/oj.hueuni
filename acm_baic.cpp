#include <stdio.h>
#include <string.h>

int main(){
	char A[100],B[100];
	gets(A);
	gets(B);
	if ((strlen(A) == strlen(B) || strlen(A) == 2* strlen(B) ) || (strlen(A) == strlen(B) || 2*strlen(A) == strlen(B))) printf("%s",B);
	else
	{
		if (strlen(A) % 2 == 0 && strlen(B) % 2 == 0) printf("11");
		else printf("1"); 
	}
}
