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

  struct Node *p = createNode (2);
  struct Node *p1 = createNode (1);
  struct Node *p2 = createNode (5);

  p->left = p1;
  p->right = p2;
  return 0;
}
