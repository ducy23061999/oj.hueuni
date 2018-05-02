//viet chuong trinh nhap vao chuoi ky tu s
//a.dem va in ra man hinh so lan xuat hien cua cac ky tu so trong chuoi s
//b.kiem tra xem co doi xung khong
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char *s;
	int l,dem=0,i;
	printf("nhap vao xau s:");
	gets(s);
	dem=0;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			dem++;	
		}
	}
	printf("so lan xuat hien ky tu so la: %d \n ",dem);
	int dx;
	dx=1;
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
			dx=0;
			break;
	 }
	 if(dx=0)
	 printf("chuoi da cho khong doi xung");
	 else
	 printf("chuoi da cho doi xung");
	 getch();
	 return 0;
}
