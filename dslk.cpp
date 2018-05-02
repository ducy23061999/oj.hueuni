#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct SoNguyen{
	int N;
	SoNguyen *next;
};

SoNguyen* Nhap(SoNguyen *fisrt){
	int k;
	do{
		scanf("%d",&k);
		if (k == 0) break;
		else{
			// create node
			SoNguyen *p = (SoNguyen*)malloc(sizeof(SoNguyen));
			p->N = k;
			p->next = NULL;
			if (fisrt == NULL){
				fisrt = p;
			}else {
				p->next = fisrt;
				fisrt= p;
			}
		}	
	}while(1);
	return fisrt;
}
void In(SoNguyen*fisrt){
	SoNguyen*p;
	for (p = fisrt; p != NULL; p =p->next){
		printf("%d ",p->N);
	}
}
SoNguyen* BSCuoi(SoNguyen *fisrt, int X){
	SoNguyen *p = (SoNguyen*)malloc(sizeof(SoNguyen));
	p->N = X;
	p->next = NULL;
	if (fisrt == NULL) fisrt = p;
	else {
		SoNguyen *q = fisrt;
		while (q->next != NULL)
			q = q->next;
		q->next = p;
	}
	return fisrt;
}
SoNguyen* BSDau(SoNguyen*first, int X){
	SoNguyen *p = (SoNguyen*)malloc(sizeof(SoNguyen));
	p->N = X;
	p->next = NULL;
	if (first == NULL) first = p;
	else {
		p->next = first;
		first = p;
		
	}
	return first;
}
void SapXep(SoNguyen* f){
	SoNguyen *p, *q;
	for (p = f; p!= NULL; p = p->next)
		for (q = p->next; q!= NULL; q = q->next)
		{
			if (p->N > q->N){
				int tam = p->N;
				p->N = q->N;
				q->N = tam;
			}
			
		}
}
SoNguyen* Chen(SoNguyen* f, int X){
	SoNguyen *p = (SoNguyen*)malloc(sizeof(SoNguyen));
	p->N = X;
	p->next = NULL;
	if (f == NULL)
		f = p;
	else {
		if (p->N < f->N)
		{
			p->next = f;
			f = p;
		}else{
			SoNguyen *q = f;SoNguyen *save = f;
			while(q != NULL && q->N < p->N){
				save = q;
				q = q->next;
			}
			p->next = q;
			save->next = p;
		}
	}
	return f;
}
SoNguyen *Tim(SoNguyen*f, int X){
	SoNguyen *p;
	for (p = f; p!= NULL; p = p->next){
		if (p->N == X) return p;
	}
	return NULL;
}
SoNguyen *Xoa(SoNguyen*f, int X){
	SoNguyen *p = (SoNguyen*)malloc(sizeof(SoNguyen));
	p = f;
	while (1){
		p = Tim(f,X);
		if (p != NULL){
			if (f == p){
				f = f->next;
				free(p);
			}else{
				SoNguyen *q = f;
				while(q->next != p)
					q = q->next;
					q->next = p->next;
				free(p);
			}
		}
		else
			break;
	}
	return f;
}
int main(){
	SoNguyen *f = NULL;
	f= Nhap(f);
	int n;
//	printf("\n Nhap so can bo sung cuoi: ");
//	scanf("%d",&n);
//	f = BSDau(f,n);
	SapXep(f);
	f = Xoa(f,6);
	In(f);
}
