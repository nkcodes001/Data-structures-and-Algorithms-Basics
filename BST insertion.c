#include <stdio.h>
#include<stdlib.h>

struct Node
{
  struct Node *left;
  struct Node *right;
  int data;
};

struct Node *
createNode (int data)
{
  struct Node *n;		// creating a node pointer
  n = (struct Node *) malloc (sizeof (struct Node));	// Allocating memory in the heap
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}





void InOrder(struct Node* root){
    
    if(root!=NULL){
        
        InOrder(root->left);
        printf("%d\t",root->data);
        InOrder(root->right);
            
        
    }
    
}

int IsBST(struct Node* root){
    struct Node* prev=NULL;
    if(root!=NULL){
        if(!IsBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return IsBST(root->right);
    }
    else{
        return 1;
    }
    
}


void insert(struct Node* root,int key){
    struct Node* prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("Cannot Insert %d,Already in BST\n",key);
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct Node* new=createNode(key);
    if(key<prev->data){
        prev->left=new;
        
    }
    else{
        prev->right=new;
    }
    
    
    
    
    
    
}







int
main ()
{
  /*
     // Constructing The root node
     struct Node* p;
     p=(struct Node*)malloc(sizeof(struct Node));
     p->data=2;
     p->left=NULL;
     p->right=NULL;

     // Constrctng the 1st child    
     struct Node* p1;
     p1=(struct Node*)malloc(sizeof(struct Node));
     p1->data=1;
     p1->left=NULL;
     p1->right=NULL;
     // Constrctng the 2nd child    
     struct Node* p2;
     p2=(struct Node*)malloc(sizeof(struct Node));
     p2->data=11;
     p2->left=NULL;
     p2->right=NULL;
     // Linking The root Node with left and right node
     p->left=p1;
     p->right=p2;
   */

  // Constructing The root node using Functions

  struct Node *p = createNode (5);
  struct Node *p1 = createNode (3);
  struct Node *p2 = createNode (6);
    struct Node *p3 = createNode (1);
      struct Node *p4 = createNode (4);
  p->left = p1;
  p->right = p2;
  p1->left=p3;
  p1->right=p4;
  
 
  
   printf("\n");

  insert(p,6);
  printf("%d",p->right->right->data);
  
  return 0;
}

