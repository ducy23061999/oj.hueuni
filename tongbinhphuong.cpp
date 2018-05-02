#include <bits/stdc++.h>
const long long m = 1000000007;
long long sum(int n){
	return (n*(n+1)*(2*n+1))/6;
}
int main(){
	float a, b;
	long long s;
	scanf("%f %f",&a,&b);
	if (a < b){
		a = ceil(a);
		b = floor(b);
		s = sum(b) - sum(a - 1);
	}else {
		b = ceil(b);
		a = floor(a);
		s = sum(a) - sum(b - 1);
	};
	//printf("%f | %f\n",a,b);
	printf("%lld",s%m);
}
