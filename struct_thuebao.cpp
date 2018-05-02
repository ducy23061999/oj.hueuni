#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct ThueBao
{
	char matp[6];
	char tentp[30];
	long stb;
};
ThueBao* checkma(ThueBao tb[],int n, char check[6]){
	for (int i = 0; i < n; i++){
		if (strcmp(tb[i].matp,check) == 0) return &tb[i];
	}
	return NULL;
}
void Nhap(ThueBao tb[], int n){
	for (int i = 0; i < n; i++){
		fflush(stdin);
		do{
			printf("\nNhap ma thanh pho %d: ",i);
			gets(tb[i].matp);
		}while(checkma(tb,n,tb[i].matp) == NULL);
		
		
		printf("\nNhap Ten Thanh Pho %d: ",i);
		gets(tb[i].tentp);
		printf("\nNhap tong so thue bao %d: ",i);
		scanf("%lf",&tb[i].stb);
		
	}
}
void Tang(ThueBao tb[], int *n, char ma[6], int SL){
	ThueBao *ch;
	ch = checkma(tb,*n,ma);
	if (ch != NULL){
		ch->stb += SL;
	}else{
	// Add some brach new
		strcpy(tb[*n].matp,ma);
		fflush(stdin);
		printf("Nhap ten Thanh Pho");
		gets(tb[*n].tentp);
		tb[*n].stb += SL;
		(*n)++;
	}
}
int main(){
	ThueBao tb[100];
	int n;
	printf("Nhap so "); scanf("%d",&n);
	Nhap(tb,n);
}
