#include <stdio.h>
#include <stdlib.h>
typedef struct sFila{
	int info;
	struct sFila *dir;
	
}Fila;
void init(Fila **inicio,Fila **fim){
	
	*inicio=NULL;
	*fim=NULL;
	
}
void enfilera(Fila **inicio,Fila **fim,int x){
	Fila *q;
	
	q=(Fila *)malloc(sizeof(Fila));
	if(q!=NULL){
		q->info=x;
		if(*inicio==NULL||fim==NULL){
			q->dir=NULL;
			*inicio=q;
			
			*fim=q;
			
		
		}else{
			(*fim)->dir=q;
			(*fim)=q;
		}
	}
	
}
void desinfilera(Fila **inicio,Fila **fim){
	Fila *q;
	Fila *aux;
	q=*inicio;
	if(*inicio==NULL){
		puts("NAO EH POSSIVEL DESINFILERAR");
	}else if(*inicio==*fim){
		printf("%d\n",q->info);
		*inicio=NULL;
		//puts("NAO EH POSSIVEL DESINFILERAR");
	}else{
		aux=q->dir;
		printf("%d\n",q->info);
		*inicio=aux;
		free(q);
	}
}
int main(){
	Fila *inicio;
	Fila *fim;
	int x,i;
	init(&inicio,&fim);
	for(i=0;i<10;i++){
		scanf("%d",&x);
		enfilera(&inicio,&fim,x);
	}
	for(i=0;i<13;i++){
		desinfilera(&inicio,&fim);
	}
	
}

