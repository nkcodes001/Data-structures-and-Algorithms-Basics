#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
     return 0;
    }
}


int isFull(struct stack * ptr){
    if(ptr->top== ptr->size-1){
        return 1;
    }
    else{
     return 0;
    }
}


void push(struct stack* ptr,int val){
    
    if(isFull(ptr)){
        printf("Stack Overflow!!");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        
        
    }
}


int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("stack Underflow!");
        return -1;
    }
    else{
       int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}

int peek(struct stack*sp,int i){
    // Peek returns the element at any position from top;
    if(sp->top-i+1<0){
        printf("Invalid Position!!!!");
     return -1;
    }
    else{
        return sp->arr[sp->top-i+1];
    }
    
    
}





int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    
    /*s.size=10;
    s.top=-1;
    s.arr=(int*)malloc(s.size(*sizeof(int)));*/
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*(sizeof(int)));
    printf("stack Has been created successfully!!\n");
    
    
    //pushing element Manually!!
  /*  int top=-1;
    sp->arr[0]=7;
    sp->top++;
    sp->arr[1]=45;
    sp->top++;
    
    printf("%d",sp->arr[0]);
    printf("%d",sp->arr[1]);
    
    */
    printf("%d\n",isEmpty(sp));
    printf("%d\n",isFull(sp));
    
    push(sp,56);
   push(sp,56);
    push(sp,56);
    push(sp,12);
    push(sp,52);
    push(sp,67);
    push(sp,53);
    push(sp,45);
    push(sp,44);
    push(sp,44);
    printf("%d\n",isEmpty(sp));
    printf("%d\n",isFull(sp));
    printf("Popped top most element: %d\n",pop(sp));
    printf("%d\n",isEmpty(sp));
    printf("%d\n",isFull(sp));
    int i;
    printf("\nElement at postion u entered from top is:: %d!",peek(sp,5));
    
    // print the whole stack!~
    
 for(int j=0;j<sp->top+1;j++){
     printf("\nElement at Position %d is : %d\n",j,peek(sp,j));
 }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}



