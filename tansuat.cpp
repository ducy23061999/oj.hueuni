#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
	char str[500];
	int A[256] = {0},in;
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif

	cin.getline(str,501);
	for(int i = 0 ; i < strlen(str); i++){
		if (isalpha(str[i]) || isdigit(str[i])){
			if (str[i] != ' '){
					in = (int)str[i];
					A[in]++;
			}
		}
			
		
	}
	for (int i = 0 ; i < 256 ; i++){
		if (A[i] > 0)
			cout << (char)i << "    "<<A[i]<<endl;
	}
	return 0;
}
