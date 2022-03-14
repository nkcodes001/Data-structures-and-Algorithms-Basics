#include<stdio.h>
#include<stdlib.h> // malloc functions!!!


struct Node
{
  int data;
  struct Node *next;
};

void printList (struct Node *n)
{
  while (n != NULL)
    {
      printf ("%d\t", n->data);
      n = n->next;
    }

}

struct Node * insertAtFirst (struct Node *head, int data)
{
  struct Node *ptr = (struct Node *) malloc (sizeof (struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
}

struct Node *insertAtIndex (struct Node *head, int data, int index)
{
  struct Node *ptr = (struct Node *) malloc (sizeof (struct Node));

  struct Node *p = head;
  int i = 0;
  
  while(i!= index-1){
      p=p->next;
      i++;
  }
  
 ptr->data=data;
 ptr->next=p->next;
 p->next=ptr;
 return head;// return head will return head to its original as we dont wanna lose it!!

}

struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    
    while(p->next!= NULL){
        p=p->next;
    }
    
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

struct Node* deleteFirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
    
}

struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p= head;
    struct Node* q=head->next;
    for(int i=0;i< index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}


struct Node* deleteAtLast(struct Node* head){
    struct Node* p= head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    
    }
    p->next=NULL;
    
    free(q);
    return head;
    
}






int main ()
{
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;


  head = (struct Node *) malloc (sizeof (struct Node));
  second = (struct Node *) malloc (sizeof (struct Node));
  third = (struct Node *) malloc (sizeof (struct Node));

  head->data = 4;
  head->next = second;

  second->data = 5;
  second->next = third;
  third->data = 6;
  third->next = NULL;

  printf ("1st element is :%d\n", head->data);
  printf ("2nd element is :%d", second->data);
  printf ("\n 3rd element is :%d", third->data);


  printf ("\nTraverse The nodes!");
  printList (head);
  printf ("\n");
  printList (second);




  /*
     insertion of a node in the linked list has 3 cases......

     case1 iNsert at the beggining

     Case 2: Insert in between

     Case 3: Insert at the end

     Case 4: Insert after the node 

   */


// insert at beginning
/*
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=2;
head=ptr;

printf("\n");
printList(head);
    
  */
  printf ("\n");
  head = insertAtFirst (head, 56);
  printList (head);
  printf ("\n");
  head=insertAtIndex(head,66,2);
  printList(head);
 printf ("\n");
  head=insertAtEnd(head,98);
  printList(head);
  
  printf("\n Finally the LL before deletion:");
  printList(head);



// Finally Linked List inserion is completed
//_____________________________________________________________________________

// LINKED LIST DELETION

printf("\n LL after deletion: ");

head=deleteFirst(head);
// number of times we call the above function that many times the first element will be deleted

printList(head);

head=deleteAtIndex(head,3);
printf("\n");
printList(head);



printf("\n");
head=deleteAtLast(head);

printList(head);





  return 0;
}


