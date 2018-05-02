#include <stdio.h>
long long USCLN (long a, long b) {

    int uocso = 0;

    while (a != b) {

        if (a > b)
            a = a - b;
        else
            b = b - a;

    }
    return a;
}  
int main(){
	unsigned long long a, b;
	scanf("%ld %ld",&a,&b);
	printf("%ld",USCLN(a,b));
	return 0;
}
