#include <stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *next;
}*first=NULL;

void create(int A[], int n){
struct Node *t,*last;
first=(struct Node*)malloc(sizeof(struct Node));
first->data=A[0];
first->next=NULL;
last=first;

for(int i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}

//Display nodes
void display(struct Node*p){

printf("The list is\n");
while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}

}

int maxInList(struct Node *p){
int m=0;
while(p!=NULL){
    if(p->data>m)
        m=p->data;
        p=p->next;
}
return m;
}

void deleteElements(int position){
    struct Node* p=NULL;
if(position==1){
    p=first;
    first=first->next;
    int x=first->data;
    printf("\nData deleted %d",&x);
    free(p);

 }
 else{
        struct Node*q=NULL;
        for(int i=0;i<position-1;i++){
            p=first;
            q=p;
            p=p->next;
        }
        q->next=p->next;
        free(p);

 }
}

void Reverse(Struct Node *q,Struct Node *p){
if(p!=NULL){
Reverse(p,p->next);
    p->next=q;
}
    else{
    first=q;
    }
}

int main(){
int A[]={12,8,9,776,66};
create(A,5);
display(first);
int m=maxInList(first);
printf("max is :%d",m);
    
deleteElements(3);
display(first)

}


