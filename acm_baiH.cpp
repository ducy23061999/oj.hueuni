#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int xa,xb,xc,xd,ya,yb,yc,yd;
	cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> y4;
	float AB,AC,AD,BC,BD,CD;
	AB = sqrt(pow(xb-xa,2) - pow(y2-xd,2));
	AC = sqrt(pow(xc-xa,2) - pow(y3-xd,2));
	AD = sqrt(pow(xd-xa,2) - pow(y4-xd,2));
	BC = sqrt(pow(xc-xb,2) - pow(y3-y2,2));
	BD = sqrt(pow(xd-xb,2) - pow(y4-y2,2));
	CD = sqrt(pow(xd-xc,2) - pow(y4-y3,2));
	if (AB == AD && AB == BC && AB == CD)
	    {
		  if (AC == BD) cout << "5";
		  else cout<<"3";
	    }
	else  if (AB == CD && BC == AD )
	    {  
	         if(AC==BD)
		          cout<<"4";
	      else cout << "2";
        } else{
			if (((xb-xa)*(y3-y4))-((xc-xd)*(y2-xd))){
				cout << "1";
			}else cout << "0";
		   }
return 0;	
}
