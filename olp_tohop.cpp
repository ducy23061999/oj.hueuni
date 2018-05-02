#include <stdio.h>
int main(){
	int X,S;
	scanf("%d",&X);
	if (X < 3){
		if (X == 2) printf("%d",6);
		if (X == 1) printf("%d",3);
		if (X == 0) printf("%d",1);
	}else
	if (X % 3 == 0) printf("%d",X*4 - 2);
	else if (X % 3 == 1) printf("%d",X*4 + 2);
		else if (X%3 == 2) printf("%d",X*4 + 1);
}
