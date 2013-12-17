#include <stdio.h>
#include <stdlib.h>
#define TMB 10
//pilha estatica
typedef struct sPilha{
	int info[TMB];
	int topo;
	
}Pilha;
void init(Pilha *p){
	p->topo=-1;
}
int empty(Pilha *p){
	if(p->topo==-1){
		return 1;
	}else{
		return 0;
	}
}
void push(Pilha *p,int x){
	p->topo++;
	p->info[p->topo]=x;
	
}
void pop(Pilha *p){
	if(empty(p)){
		puts("Pilha vazia");
	}else{
		printf("%d \n",p->info[p->topo]);
		p->topo--;
	}
	
}
int main(){
	Pilha p;
	int i,x;
	init(&p);
	for(i=0;i<TMB;i++){
		scanf("%d",&x);
		push(&p,x);
	}
	puts("______________________________________________________________");
	puts("DESEMPILHANDO");
	for(i=0;i<11;i++){
		pop(&p);
	}
	
	return 0;
}
