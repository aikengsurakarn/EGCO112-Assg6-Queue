#include "Queue.h"
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
  int i, x;
  Queue Q;
  Q.head = NULL;
  Q.tail = NULL;
  Q.size = 0;
  int cus = 1;
  int n = 0;
  int pay = 0;
  int cash = 0;
  int change = 0;

  for (i = 1; i < argc; i++)
  {
    if (strcmp(argv[i], "x") == 0)
    {
      if(Q.head != NULL)
      {
        printf("Costomer No. : %d \n", cus);
        switch (x)
        {
          case 1 :  printf("Order No. 1 \n");
                    pay = 10*n;
                    break;
          case 2 :  printf("Order No. 2 \n");
                    pay = 15*n;
                    break;
          case 3 :  printf("Order No. 3 \n");
                    pay = 20*n;
                    break;
          default: printf("Wrong order \n");
        }
        
        printf("You have to pay %d \n", pay);

        while (cash < pay)
        {
          printf("Cash : ");
          scanf("%d", &cash);
        }

        printf("Thank you \n");

        change = cash-pay;
        if (change != 0)
        {
          printf("Change : %d \n", change);
        }
        
        cus++;
        n = 0;
        pay = 0;
        cash = 0;
        change = 0;
      }
      x = dequeue(&Q);
      printf("dequeing %d\n", x);
    }
    else
    {
      enqueue(&Q, atoi(argv[i]), atoi(argv[i + 1]));
      i++;
    }
  }
  if (Q.size == 0)
  {
    printf("Empty queue \n");
  }
  else
  {
    printf("There are %d ppl left in the queue \n", Q.size);
  }
  return 0;
}