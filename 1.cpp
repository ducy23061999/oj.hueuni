#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct thuvien
{
	char masach[10];
	int nxb[4];
	char tensach[50],tentg[30];
	thuvien *next;
};
thuvien *nhap(thuvien *f)
{
	char ms[10];
	thuvien *p;
	while(1)
	{
		printf("Ma sach:");
		fflush(stdin);
		gets(ms);
		if(strlen(ms)!=0)
		{
			p=(thuvien*)malloc(sizeof(thuvien));
			strcpy(p->masach,ms);
			printf("\nTen sach:");
			fflush(stdin);
			gets(p->tensach);
			printf("\nTen tac gia:");
			fflush(stdin);
			gets(p->tentg);
			printf("\nNam xuat ban:");
			scanf("%d",&p->nxb);
			p->next=NULL;
			if(f=NULL)
			f=p;
			else
			{
				thuvien *q=f;
				while(q->next!=NULL)
				 q=q->next;
				 q->next=p;
			}
		}
 	else
		  break;
	}
	return f;
}
void In(thuvien *first)
{
	thuvien *p;int dem =0;
	for(p=first;p!= NULL;p=p->next)
	  if(*p->nxb > 2015)
	  dem++;
	  printf("\nSo sach moi la:%d",dem);
}
void insach(thuvien *first)
{
   thuvien *p;
   for(p=first;p!= NULL;p=p->next)
    {
    	printf("\n%s %s %s %d\n",p->masach,p->tensach,p->tentg,p->nxb);
    	printf("\n");
    }	
}
thuvien *chen(thuvien *first,char ms[10],char ts[10],char tg[30],int nam)
{
	thuvien *p=(thuvien*)malloc(sizeof(thuvien));
	strcpy(p->masach,ms);
	strcpy(p->tensach,ts);
	strcpy(p->tentg,tg);
	p->next = NULL;
	if(first=-NULL)
	  first =p;
	else
	{
		if(p->nxb<first->nxb)
		{
			p->next=first;
			first=p;
			
		}
		else
		{
			thuvien *q=first;thuvien *luu=first;
			while(q!=NULL&&q->nxb<p->nxb)
			{
				luu=q;q=q->next;
				p->next=q;
				luu->next=p;
			}
	    }
	      return first;
	}
}
int main()

{
	thuvien *first;
	char ms[10],ts[30],tg[40];
	int nam;
	first=NULL;
	nhap(first);
	In(first);
	printf("\nNHap ma sach :");
	  gets(ms);
	printf("\nNHap te sach:");
	 gets(ts);
	printf("\nNHap tac gia :");
	 gets(tg);
	printf("\nNHap nam xuat ban :");
	 scanf("%d",&nam);
	 first=chen(first,ms,ts,tg,nam);
	 In(first);
	 return 0;
}
