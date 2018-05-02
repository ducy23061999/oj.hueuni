#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
struct ThuVien{
	char masach[10];
	char tensach[100];
	char hoten[50];
	int nxb;
	ThuVien *next;
};
ThuVien* TaoSach(char ms[],char ten[],char tg[],int nam){
	ThuVien *node = (ThuVien*)malloc(sizeof(ThuVien));
	strcpy(node->masach,ms);
	strcpy(node->tensach,ten);
	strcpy(node->hoten,tg);
	node->nxb = nam;
	node->next = NULL;
	return node;
}
ThuVien *nhap(ThuVien *fist){
	do{
		char ms[10]; char ten[100]; char tg[100]; int nam;
		fflush(stdin);
		printf("Nhap Ma Sach: \n");
		gets(ms);
		if (strlen(ms) == 0) break;
		else {
			printf("Nhap ten sach: \n");
			gets(ten);
			printf("Nhap ten tac gia: \n");
			gets(tg);
			printf("Nhap nam: \n");
			scanf("%d",&nam);
			// Tao Sach
			ThuVien *sach = (ThuVien*)malloc(sizeof(ThuVien));
			sach = TaoSach(ms,ten,tg,nam);
			// Chen Cuoi ^^
			if (fist == NULL){
				fist = sach;
			}else{
				ThuVien *p = fist;
				while(p->next != NULL)
					p = p->next;
				p->next = sach; 
			}
			
		}	
	}while(1);
	return fist;	
}
// In neu sach->nxb >2015
void InSach(ThuVien *fist){
	printf("\nThong Tin Sach Moi Nhat\n");
	printf("\nMA SACH\t\tTEN SACH\t\tHO TEN\t\t\tTAC GIA\t\tNAM XB\n");
	for (ThuVien *p = fist; p != NULL; p= p->next){
		if (p->nxb > 2015){
			printf("%-10s\t ",p->masach);
			printf("%-10s\t ",p->tensach);
			printf("%-10s\t",p->hoten);
			printf("%-10d\n",p->nxb);
		}
	}
}
// Ham nay In khi chua tat ca sach
void In(ThuVien *fist){
	printf("\nMA SACH\t\tTEN SACH\t\tHO TEN\t\t\tTAC GIA\t\tNAM XB\n");
	for (ThuVien *p = fist; p != NULL; p= p->next){
			printf("%-10s\t ",p->masach);
			printf("%-10s\t ",p->tensach);
			printf("%-10s\t",p->hoten);
			printf("%-10d\n",p->nxb);
	}
}

void HoanVi_Str(char A[], char B[]){
	char tam[100];
	strcpy(tam,A);
	strcpy(A,B);
	strcpy(B,tam);
	
}
void HoanVi_Int(int *A, int *B){
	int tam;
	tam = *A;
	*A = *B;
	*B = tam;
	
}
void SapXep(ThuVien *fist){
	ThuVien *p,*q;
	for (p = fist; p!= NULL; p=p->next)
		for (q = p->next; q != NULL; q = q->next)
			if (p->nxb > q->nxb)
			{
				// Hoan Vi Time :)
				HoanVi_Str(p->masach,q->masach);
				HoanVi_Str(p->tensach,q->tensach);
				HoanVi_Str(p->hoten,q->hoten);
				HoanVi_Int(&p->nxb,&q->nxb);	
			}
}
ThuVien *Chen(ThuVien *fist,char ms[],char ten[],char tg[], int nam){
	ThuVien *sach = (ThuVien*)malloc(sizeof(ThuVien));
	sach = TaoSach(ms,ten,tg,nam);
	if (fist == NULL){
		fist = sach;
	}else{
		
		ThuVien *p = fist; ThuVien *luu = fist;
		if (sach->nxb < fist->nxb){
			sach->next = fist;
			fist = sach;
		}else{
			while(p->next != NULL && p->nxb < sach->nxb ){
				luu = p; p= p->next;
			}
			luu->next = sach;
			sach->next = p;
		}
		
	}
	return fist;
	
}
int main(){
	ThuVien *f  = NULL;
	f = nhap(f);
	SapXep(f);
	InSach(f);
	printf("\n MODULE CHEN PHAN TU \n");
	fflush(stdin);
	char ms[10],ten[100],tg[100]; int nam;
	printf("Nhap Ma Sach: \n");gets(ms);
	printf("Nhap Ten Sach: \n");gets(ten);
	printf("Ten Tac Gia: \n");gets(tg);
	printf("Nam Xuat Ban: \n");scanf("%d",&nam);	
	f = Chen(f,ms,ten,tg,nam);
	In(f);
}
