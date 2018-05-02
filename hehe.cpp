#include <iostream>
#include <stdlib.h>
using namespace std;
long long giaithua(int n){
    if (n == 0) return 1;
    else return n*giaithua(n-1);
}
int main(){
    int unsigned n_Input;
    #ifndef ONLINE_JUDGE
    	freopen("tong.txt","r",stdin);
    #endif
    cin >> n_Input;
    for(int i = 0; i < n_Input; i++)
        for (int j = 0; j<=i;j++)
            if (j != i) cout << giaithua(i)/(giaithua(j)*giaithua(abs(i-j))) <<" ";
                else 
                    cout << giaithua(i)/(giaithua(j)*giaithua(abs(i-j)))<<endl;
      
    return 0;
}

