int n=5,queue[5],front=0,rear=0,element;

void enQueue()
{
   int element;
   if(rear==n-1)
   {
     printf("Queue Overflow\n");
   }
  
   else
   {
     if(front==0)
     {
        front=1;
     }
     printf("Enter an element to insert :\n");
     scanf("%d",&element);
     rear++;
     queue[rear]=element;
     printf("Element %d is inserted\n",element);
   }
}

void deQueue()
{
   if(front==0 && rear==0)
   {
      printf("Underflow\n");
     
   } 
   else if(front==rear)
   {
      printf("front and rear pointer pointing to the same element so set both pointer to -1\n");
      front=rear=0;
   }
   else if(front==n)
   {
     front=1;
   }
   else
   {
      printf("Deleted element from the queue is : %d\n",queue[front]);
      front++;
   }
}
  
void CQInsert()
{
   if(front==1 && rear==n || front==rear+1)
   {
     printf("Circular Queue overflow\n");
     
   }  
   else 
   {
      if(rear==0)
      {
        rear++;
        front++;
      }
      else if(rear==n && front>1)
      {
        rear=1;
      }
      else
      {
        rear++;
      }
      printf("Enter an element : ");
      scanf("%d",&element);
      queue[rear]=element;
  }    
}

void display()
{
   if(front==0)
   {
      printf("Queue is empty\n");
   }

   else if(front>rear)
   {
      printf("Queue elements are :\n");
      for(int i=front;i<=n;i++)
      {
         printf("%d ",queue[i]);
      }
      for(int i=1;i<=rear;i++)
      {
         printf("%d ",queue[i]);
      }
      printf("\n");
   }
   else
   {
      printf("Queue elements are :\n");
      for(int i=front;i<=rear;i++)
      {
         printf("%d ",queue[i]);
      }
      printf("\n");
   }
}

void FrontEnQueue()
{
   if(front==0)
   {
      printf("Queue is empty\n");
   }
   else if(front==1)
   {
      printf("Queue overflow\n");
   }
   else
   {
      printf("Enter an element : ");
      scanf("%d",&element);
      front--;
      queue[front]=element;
   }
}

void RearDeQueue()
{
   if(rear==0)
   {
      printf("Queue Underflow\n");
   }
   else if(front==rear)
   {
      front=rear=0;
   }
   else
   {
       printf("Deleted element from the queue is : %d\n",queue[rear]);
       rear--;  
   }
}
