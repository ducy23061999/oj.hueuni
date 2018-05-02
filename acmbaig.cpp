#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s;
	int j,k,i;
	getline(cin,s);
	s.erase(0,1);
	s.erase(s.length()-1,1);
	j=0;k=s.length();
	if(k%2!=0) cout<<"No";
	else{
	for (i=0;i<k/2;i++)
	if(s[i]!='4') j=1;
	for (i=k/2;i<k-1;i++)
	if(s[i]!='8') j=1;
    if(j==0) cout<<"Yes"; else cout<<"No";
	}
	return 0;	
}
