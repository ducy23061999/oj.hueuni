#include <stdio.h>
struct SinhVien
{
	char hoten[100];
	int tuoi;
	float dtb;
};
void nhap(SinhVien sv[], int n){
	freopen("input.txt","r",stdin);
	for (int i = 0; i < n; i++){
		printf("\nNhap ho ten: "); gets(sv[i].hoten);
		printf("\nNhap tuoi: "); scanf("%d",&sv[i].tuoi);
		printf("\nNhap diem trung binh:\n"); scanf("%f",&sv[i].dtb);
	}
}
void in(SinhVien sv[], int n){
	
	printf("%-30s %-7s %-7s\n", "Ho ten", "Tuoi", "DTB");
	printf("----------------------------------------\n");
	for (int i = 0; i < n; i++){
    printf("%-30s %-7d %-70.2f\n", sv[i].hoten,sv[i].tuoi,sv[i].dtb);
	}
}
void hoanvi(SinhVien *a, SinhVien *b){
	SinhVien tam = *a;
	*a = *b;
	*b = tam;
	
}
void sapxep(SinhVien sv[],int n){
	int i,j;
	for (i = 0; i < n-1; ++i)
		for(j=i+1;j<n;++j)
			if (sv[i].dtb < sv[j].dtb)
			{
				
				hoanvi(&sv[i],&sv[j]);
			}
}
int main(){
	freopen("input1.txt","r",stdin);
	SinhVien sv[50];
	int N;
	printf("Nhap so sinh vien: "); scanf("%d",&N);
	nhap(sv,N);
	sapxep(sv,N);
	in(sv,N);
}
