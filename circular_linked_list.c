#include<stdio.h>
#include<stdlib.h>

struct node
{
int info;
struct node *link;

};

void display(struct node*);
struct node* insertFirst(int,struct node *,struct node *);
struct node* insertEnd(int,struct node *,struct node *);
struct node* insertOrd(int,struct node *,struct node *);
struct node* delete(int,struct node *, struct node *);



void main()
{
   int choice,ele;
   struct node *first,*second,*last;
   first=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   last=(struct node *)malloc(sizeof(struct node));

   first->info=2;
   first->link=second;
   second->info=3;
   second->link=last;
   last->info=6;
   last->link=first;
   
   printf("Linked list is :\n");
   display(first);
   
   while(choice!=6)
   {
     printf("\n***********Circular Linked List**********\n");
     printf("\n1.Insert at first position\n2.Insert at last position\n3.Insert at middle\n4.Delete a node\n5.Display\n6.Quit\n");
     printf("Enter your choice :\n");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
          printf("Enter an element : ");
          scanf("%d",&ele);
          first = insertFirst(ele,first,last);
          break;
          
        case 2:
          printf("Enter an element : ");
          scanf("%d",&ele);
          first = insertEnd(ele,first,last);
          break;
          
        case 3:
          printf("Enter an element : ");
          scanf("%d",&ele);
          first = insertOrd(ele,first,last);
          break;
          
        case 4:
          printf("Enter an element : ");
          scanf("%d",&ele);
          first = delete(ele,first,last);
          break;
        
        case 5:
          printf("Circular linked list is :\n");
          display(first);
          break;
           
        case 6:
          printf("Thank You..!!\n");
       
      }
   }
 }
 
 void display(struct node *first)
{
   struct node *save;
   if(first ==NULL)
   {
     printf("Empty");
   }
   else
   {
     save=first;
     do
     {
	printf("%d ",save->info);
	save=save->link;
     }while(save!=first);
   }
   printf("\n");
}


struct node* insertFirst(int x,struct node *first,struct node *last)
{ 
   struct node * new;
   new=(struct node *)malloc(sizeof(struct node));
   new->info=x;
   if(first==NULL)
   {
     new->link=new;
     first=last=new; 
   }
   else
   {
     new->link=first;
     last->link=new;
     first=new;
   }
  // printf("%d",first->info);
   return first;
}

struct node* insertEnd(int x,struct node *first,struct node *last)
{
    struct node *new ;
    new=(struct node *)malloc(sizeof(struct node));
    if(first==NULL)
    {
      new->link=new;
      first=last=new;
    }
   
    else
    {
      new->info=x;
      new->link=first;
      last->link=new;
      last=new;
   }
   return first;
}

struct node *insertOrd(int x,struct node *first,struct node *last)
{
   struct node * new ,*save;
   new=(struct node *)malloc(sizeof(struct node));
   new->info=x;
   if(first==NULL)
   {
      new->link=new;
      first=last=new;
   }
   else
   {
      if(new->info <= first->info)
      {
        new->link=first;
        last->link=new;
        first=new;
      }
      else
      {
         save=first;
         while(save!=last && new->info >= save->link->info)
         {
            save=save->link;
         }
         new->link=save->link;
         save->link=new;
         if(save=last)
            last=new;
      }
   }
   return first;
}

struct node* delete(int x,struct node *first, struct node *last)
{
   struct node *temp;
   if(first==NULL)
   {
     printf("Linked list is empty\n");
   }
   temp=first;
   if(temp->info==x)
   {
      return temp->link;
   }
   
   while(temp->link!=NULL)
   {
     if(temp->link->info==x)
     {
       temp->link=temp->link->link;
       return first;
     }
     temp=temp->link;
   }
   printf("Node not found\n");
   return temp->link; 
}

