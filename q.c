#include<stdio.h>
#include<stdlib.h>
#define size 3

void enqueue(int q[], int * r) {
  int item;
  if ( * r == size - 1)
    printf("Queue is full\n");
  else {
    printf("value to be inserted:");
    scanf("%d", & item);
    ( * r) ++;
    q[ * r] = item;
  }
}


void dequeue(int q[], int * r, int * f) {
  if ( * f > * r)
    printf("Queue empty!\n");
  else {
    printf("deleted element is: %d\n", q[ * f]);
    ( * f) ++;
  }
}


void display(int q[], int * r, int * f) {
  int i;
  if ( * f > * r)
    printf("Queue empty!\n");

  for (i = * f; i <= * r; i++) {
    printf("%d, ", q[i]);
  }
 
}


void main() {
  int q[20];
  int r = -1;
  int f = 0;
  int a;
  while (1) {
	
    printf("\n1.enqueue \n2.dequeue\n3.display\n4.exit\n");
    scanf("%d", & a);
    switch (a) {
    case 1:
      enqueue(q, & r);
      break;
    case 2:
      dequeue(q, & r, & f);
      break;
    case 3:
      display(q, & r, & f);
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("wrong CHOICE\n");
    }
  }
}
