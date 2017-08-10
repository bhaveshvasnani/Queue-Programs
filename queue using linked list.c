#include <stdio.h>
struct queuell
{
	int data;
	struct queuell *next;
}*front,*rear;
struct queuell *enqueue(struct queuell *rear)
{
	struct queuell *temp=(struct queuell *)malloc(sizeof(struct queuell *));
	printf("\nEnter number\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if (rear==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	return rear;
}
struct queuell *dequeue(struct queuell *front)
{
	struct queuell *t=front;
	if (front!=NULL)
	{
		front=front->next;
	}
	else
	{
		printf("\nUnderflow\n");
	}
	free(t);
	return front;
}
void display(struct queuell *front,struct queue *rear)
{
	printf("\nDisplaying queue\n");
	struct queuell *temp=front;
	while (temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
main()
{
	front=rear=NULL;
	rear=enqueue(rear);
	rear=enqueue(rear);
	rear=enqueue(rear);
	display(front,rear);
	front=dequeue(front);
	display(front,rear);
}
