#include <stdio.h>	
//int sum(long long n) {
//	int S = 0,rem;
//	while (n != 0) {
//		rem = n % 10;
//		S += rem;
//		n /= 10;
//	}
//	return S;
//}
//int dequy(long long n) {
//	if (n < 10) return (int)n;
//	else {
//		printf("sum: %d |",sum(n));
//		return dequy(n-sum(n));
//	}
//}
int main() {
	long long n;
	scanf("%lld", &n);
	if ( n < 0) n = -n;
	printf("%d",9);

	return 0;
}
