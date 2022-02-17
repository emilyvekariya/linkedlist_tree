#include<stdio.h>
#include "queue.h"

//void enQueue();
//void deQueue();
//void display();


void main()
{
    int choice;
  
    while(choice!=4)
    {
       printf("Queue Operation :\n");
       printf("1.Insert an element in the Queue\n2.Delete an element from the Queue\n3.Display elements of Queue\n4.Quit\n");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:
            enQueue();
            break;
          case 2:
            deQueue();
            break;
          case 3:
            display();
            break;
          case 4:
            printf("Thank You..\n");
            break;
          default:
            printf("Enter valid choice\n");
       }
    }
}

