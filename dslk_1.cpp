#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node * next;
}List;
void InsertLast(List *&head, int ele){
	List *n_node = (List *)malloc(sizeof(List));
	n_node->data = ele;
	n_node->next = NULL;
	if (head == NULL){
		head = n_node;
	}else{
		List *p= head;
		while(p->next != NULL) p = p->next;
		p->next = n_node;
	}
}
void INRA(List *&head){
	printf("Begin ->");
	for (List *p = head; p != NULL; p=p->next){
		printf("%d ",p->data);
	}
	printf("<-END");
}
int max(List *&head){
	int i = 0;
	for (List *p = head; p != NULL; p=p->next){
		i++;
	}
	return i;
}
void InsertBeforePos(List *&head, int ele,int pos){
	List *n_node = (List *)malloc(sizeof(List));
	n_node->data = ele;
	n_node->next = NULL;
	int f = max(head);
	if (pos <= f)
	{
		if (pos == 1){
	 		n_node ->next = head;
	 		head = n_node;
	 	}else{
	 		List *p = head; List *luu = head;
	 		int dem = 0;
	 		while (dem != pos - 1){
	 			luu = p; p = p->next;
				 dem++;	
			}	
			n_node->next = p;
			luu->next = n_node;
		 };
	} 	
	if (pos > f){
		List *p = head; 
 		int dem = 0;
 		while (dem != f - 1){
 		 	p = p->next;dem++;		
		}	
		p->next = n_node;
	}
}
void Delete(List *&head, int pos){
	int f = max(head);
	if (pos <= f){
		if (pos == 1){
			head = head->next;
		} else
		{
			int dem = 1;
			List *p = head; List *luu = head;
			while(dem < pos){
				luu = p;
				p = p->next;
				dem++;
			}
			luu->next = p->next;
		}
		
	}
}
float Average(List *head){
	float S = 0;
	for (List *p = head; p != NULL; p=p->next){
		S+= p->data;
	}
	return S / max(head);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	List *head = NULL;
	int n;
	scanf("%d\n",&n);
	for (int i = 1; i <= n; i++){
		int k;
		scanf("%d",&k);
		InsertLast(head,k);
	}
	
	char in;
	int T,U;
	do{
		scanf("%c",&in);
		// main processs
		if (in == 'i') {
			scanf("%d ",&T,&U);
			InsertBeforePos(head,T,U);
			//INRA(head);
		}
		if (in == 'd') {
			scanf("%d",&T);
			Delete(head,T);
		}
		if (in == '0'){
			scanf("%d",&T);
			if (T == 0) break;
		}
		if (in == 'a')	{
			printf("%0.4f \n",Average(head));
		}
	}while (1);
}
