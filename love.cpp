#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main(){
    int unsigned k,n,gus;
    char str[1000];
    #ifndef ONLINE_JUDGE
         freopen("input.txt","r",stdin);
    #endif
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin.getline(str,1000);
        for (int j = 0; j < strlen(str) && k <= 26; j++){
        	if (isupper(str[j])){
				gus = (int)str[j];
	            if (gus >= 65 && gus + k < 90 ){
	                str[j] = (char)(gus + k);
	            }else
	            
	            	// gus + k > 90 thi thuc hien xoay vong
		            if (gus + n >= 90){
		                str[j] = (char)(gus + k - 26);
		            }
			} // end upper
        	
        }
        cout <<str<<endl;
    }
}
