#include <stdio.h>
#include <stdlib.h>	
struct Number
{
	int num;
	Number *next;	
};
Number *fist;
Number* nhap(Number* f){
	int k;
	Number *p = (Number*)malloc(sizeof(Number));
	f = NULL;
	do{
		printf("Nhap 1 so nguyen: ");
		scanf("%d",&k);
		if (k == 0)
		break;
		p->num = k;
		p->next = NULL;
		if (f == NULL)
			f = p;
		else {
			p->next = f;
			f = p;
		}
		
	}while(1);
	return f;
}
int main(){
	Number *fist;
	fist = nhap(fist);
	printf("%d",fist->num);
	return 0;
}
