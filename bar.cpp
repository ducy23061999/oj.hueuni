#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
const int roll = 10000;
struct Meow
{
	char grownUp[20];
};
void mature(char child[]){
	for (int step = 0; step <strlen(child); step++){
		child[step] = toupper(child[step]);
	};
}
bool rule(char badcat[]){
	int val = atoi(badcat);
	if (val > 0){
		if (val < 18 && val != 16) return true;
	}else {
		mature(badcat);
		//total string ( can't not convert)
		if (strcmp(badcat,"ABSINTH") == 0) return true;
		if (strcmp(badcat,"BEER") == 0) return true;
		if (strcmp(badcat,"BRANDY") == 0) return true;
		if (strcmp(badcat,"CHAMPAGNE") == 0) return true;
		if (strcmp(badcat,"GIN") == 0) return true;
		if (strcmp(badcat,"RUM") == 0) return true;
		if (strcmp(badcat,"SAKE") == 0) return true;
		if (strcmp(badcat,"TEQUILA") == 0) return true;
		if (strcmp(badcat,"VODKA") == 0) return true;
		if (strcmp(badcat,"WHISKEY") == 0) return true;
		if (strcmp(badcat,"WINE") == 0) return true;
	}
	return false;
}
int fall_in_love(Meow child[],int plan){
	int bad = 0;
	for (int love = 0; love < plan; love++){
		gets(child[love].grownUp);
		if (rule(child[love].grownUp)) {
			bad++;
		}
	}
	return bad;
}
int main(){
	//freopen("input.txt","r",stdin);
	Meow meow[roll];
	int crush,magic;
	scanf("%d\n",&crush);
	magic = fall_in_love(meow,crush);
	printf("%d",magic);
	
	
}
