#include <stdio.h>
int main(){
	int n, dem = 0;
	scanf("%d",&n);
	for (int i = 1; i<= n/2 ; i++){
		dem++;
	}
	printf("%d",dem + 1);
}
