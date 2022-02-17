#include<stdio.h>
#include<stdlib.h>

struct node
{
  char info;
  struct node *l;
  struct node *r;
};

void preOrder(struct node *);
void inOrder(struct node *);
void postOrder(struct node *);

void main()
{
  struct node *root,*first,*second,*third,*fourth,*fifth,*sixth,*t;
  root=(struct node *)malloc(sizeof(struct node));
  first=(struct node *)malloc(sizeof(struct node));
  second=(struct node *)malloc(sizeof(struct node));
  third=(struct node *)malloc(sizeof(struct node));
  fourth=(struct node *)malloc(sizeof(struct node));
  fifth=(struct node *)malloc(sizeof(struct node)); 
  sixth=(struct node *)malloc(sizeof(struct node)); 
  
  t=root;
  root->info='A';
  root->l=first;
  root->r=third;
  
  first->info='B';
  first->l=second;
  first->r=NULL;
  
  second->info='C';
  second->l=NULL;
  second->r=NULL;
  
  third->info='D';
  third->l=fourth;
  third->r=sixth;
  
  fourth->info='E';
  fourth->l=NULL;
  fourth->r=fifth;
  
  fifth->info='F';
  fifth->l=NULL;
  fifth->r=NULL;
  
  sixth->info='G';
  sixth->l=NULL;
  sixth->r=NULL;
  
 printf("Preorder Traversal is :\n");
 preOrder(t);
 printf("\n\nInorder Traversal is :\n");
 inOrder(t);
 printf("\n\nPostorder Traversal is :\n");
 postOrder(t);
 printf("\n\nCompleted\n");
 }
 
 void preOrder(struct node *t)
 {
    if(t==NULL)
    {
      printf("Empty Tree\n");
    }
    else
    {
      printf("%c ",t->info);
      if(t->l!=NULL)
      {
        preOrder(t->l);
      }
      if(t->r!=NULL)
      {
        preOrder(t->r);
      }
    }
 }
 
 void postOrder(struct node *t)
 {
    if(t==NULL)
    {
      printf("Empty Tree\n");
    }
    else
    {
      if(t->l!=NULL)
      {
        postOrder(t->l);
      }
      if(t->r!=NULL)
      {
        postOrder(t->r);
      }
      printf("%c ",t->info);
    }
 }
 
 void inOrder(struct node *t)
 {
    if(t==NULL)
    {
      printf("Empty Tree\n");
    }
    else
    {
      if(t->l!=NULL)
      {
        inOrder(t->l);
      }
      printf("%c ",t->info);
      if(t->r!=NULL)
      {
        inOrder(t->r);
      }
    }
 }
