#include <stdio.h>

int main(){
	int n,A[100000],dem = 0;
	scanf("%d\n",&n);
	for (int i = 0 ; i < n; i++){
		scanf("%d",&A[i]);
		int du = A[i] % 19;
		switch (du){
		 case 0 : case 3: case 6 : case 9: case 11: case 14: case 17:
		 	dem++;
			break;
		}
		
	}
	printf("%d",dem);
	
}
