#include<stdio.h>
#include "queue.h"

void main()
{
    int choice;
  
    while(choice!=4)
    {
       printf("Circular Queue Operation :\n");
       printf("1.Insert an element from the rear\n2.Insert an element from the front\n3.Delete an element from the rear\n4.Delete an element from the front\n5.Display elements of Queue\n6.Quit\n");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:
            enQueue();
            break;
          case 2:
            FrontEnQueue();
            break;
          case 3:
            RearDeQueue();
            break;
          case 4:
            deQueue();
            break;
          case 5:
            display();
            break;
          case 6:
            printf("Thank You..\n");
            break;  
          default:
            printf("Enter valid choice\n");
       }
    }
}

