#include <stdio.h>	
int main() {
	int i,j,tong,chan;
	scanf("%d %d", &tong,&chan);
	for (j = 36, i = 0; j >= 1, i < 36; j--,i++)
		{
			if (2 * i + 4 * j == chan) printf("%d %d", i, j);
		}
			
	return 0;

}
