#include <stdio.h>
#include <string.h>
struct SinhVien
{
	char masv[10];
	char ten[50];
	int tuoi;
	float dtb;
};
int check(SinhVien sv[],int n, char check[]){
	int c = 0;
	for (int i = 0 ; i < n ; i++){
		if (strcmp(sv[i].masv,check) == 0){
//			printf("BUZZ");
//			printf("\n");
//			puts(sv[i].masv);
//			puts(check);
			c = 1;
		} 
		
	};
	if (c == 1) return 1;
	else return 0;
}
void nhap(SinhVien sv[],int n){
		
		for (int i= 0 ; i < n; i++){
			fflush(stdin);
			do{
				fflush(stdin);
				printf("\nMa Sv: ");
			 	gets(sv[i].masv);
			}while(check(sv,n,sv[i].masv) == 1);
		
			printf("\nNhap ten Sv: "); gets(sv[i].ten);
			printf("\nNhap tuoi: "); scanf("%d",&sv[i].tuoi);
			printf("\nDTB: ",sv[i].dtb); scanf("%f",&sv[i].dtb);		
	}
}
int main(){
	SinhVien sv[100];
	int n;
	scanf("%d",&n);
	nhap(sv,n);
	
		
}
