#include <stdio.h>
#include <stdlib.h>
struct queue
{
	int front,rear,q[10];
}a;
void decqueue();
void encqueue(int x);
void main()
{
	int i;
	a.front=-1;
	a.rear=-1;
	encqueue(1);
	encqueue(2);
	encqueue(3);
	encqueue(4);
	encqueue(5);
	encqueue(6);
	encqueue(7);
	encqueue(8);
	encqueue(9);
	encqueue(10);
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	decqueue();
	if ((a.front>-1 && a.front<10) && (a.rear>-1 && a.rear<10))
	{
			for (i=a.front;;i=(i+1)%10)
			{
				printf("%d\t",a.q[i]);
				if (i==a.rear)
				break;
			}
	}
	else
	{
		printf("Empty");
	}
}
void encqueue(int x)
{
	if (a.front==a.rear && a.front==-1)
	{
		a.front=(a.front+1)%10;
		a.rear=(a.rear+1)%10;
		a.q[a.rear]=x;
		//printf("%da\n",a.q[a.rear]);
	}
	else if((a.rear+1)%10==a.front && a.front!=-1)
	{
		printf("Overflow: List is already full\n");
		exit(0);
	}
	else
	{
		a.rear=(a.rear+1)%10;
		a.q[a.rear]=x;
		//printf("%db\n",a.q[a.rear]);
	}
}
void decqueue()
{
	if ((a.front>-1 && a.front<10) && (a.rear>-1 && a.rear<10))
	{
		if (a.front==a.rear)
		a.front=a.rear=-1;
		else
		a.front=(a.front+1)%10;
	}
	else
	{
		printf("Underflow: List is already empty\n");
		exit(0);
	}
}
