#include <stdio.h>
#include <math.h>
int main(){
	long long a,b,S;
	int n;
	
	scanf("%llf %llf %d",&a,&b,&n);
	S = pow(a,b) / pow(10,b);
	printf("%llf",S);
	return 0;
	
}
	
