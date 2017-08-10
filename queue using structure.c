/*NAME: BHAVESH KUMAR VASNANI
REG. No: 15BCE0617
SLOT: G2*/

#include <stdio.h>
struct queue//For decclaring variables that are used for creating a queue
{
	int rear,front,q[10];
};
void main()
{
	int i;
	struct queue a;
	a.front = -1;//Initialising front of the queue
	a.rear = -1;//Initialising rear of the queue
void enqueue(int x)//To enter values to the queue from the rear end
{
	if (a.rear<9)
	{
	if (a.front == -1)//At this instant there is no element in the queue
	{
		a.front++;//Incrementing front
		a.rear++;//Incrementing rear
		a.q[a.rear]=x;//Assigning value x to the queue a from the rear end
	}
	else
	{
		a.rear++;//Incrementing rear
		a.q[a.rear]=x;//Assigning value x to the queue a from the rear end when there are elements in the queue already
	}
	}
	else
	{
		printf("Overflow\n");//When the rear reaches the maximum size of the array declared and no element can be inserted from the rear end
	}
}
void dequeue()//To remove an element from the front
{
	if (a.front!=-1)
	{
		if(a.front==a.rear) a.front=a.rear=-1;//It means there was only one element to remove before dequeue
		else a.front++;//It increments front and hence removing element
	}
	else
	{
		printf("Underflow\n");//When the queue is empty and no element to remove in the front
	}
}
void peek()//To print the first element in the queue
{
	if(a.front!=-1)
	printf("%d\n",a.q[a.front]);//Prints only when there is some element in the queue
}
enqueue(9);
enqueue(13);
peek();
dequeue();
for (i=a.front;i<=a.rear;i++)//For printing queue from front to rear when some elements are present
	{
		printf("%d\n",a.q[i]);
	}
}
