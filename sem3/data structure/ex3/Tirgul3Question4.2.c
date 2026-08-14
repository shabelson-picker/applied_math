#include <stdio.h>
#include "Queue.h"

int isThereMutualMinimum(Queue Q1, Queue Q2);

void main()
{
	int mutualMinimum = 0;
	Queue Q1 = CreateQueue();
	Queue Q2 = CreateQueue();

	Enqueue(3, Q1);
	Enqueue(7, Q1);
	Enqueue(13, Q1);
	Enqueue(20, Q1);
	Enqueue(47, Q1);
	Enqueue(70, Q1);

	Enqueue(12, Q2);
	Enqueue(20, Q2);
	Enqueue(65, Q2);
	Enqueue(70, Q2);
	Enqueue(75, Q2);

	mutualMinimum = isThereMutualMinimum(Q1, Q2);
	if (mutualMinimum != -1) {
		printf("There is a mutual minimum, mutual minimum = %d\n", mutualMinimum);
	}
	else {
		printf("There is no mutual minimum!\n");
	}

	FreeQueue(Q1);
	FreeQueue(Q2);
}

int isThereMutualMinimum(Queue Q1, Queue Q2)
{
	while (!QueueIsEmpty(Q1) && !QueueIsEmpty(Q2)) {
		if (Front(Q1) == Front(Q2)) {
			return Front(Q1);
		}
		if (Front(Q1) < Front(Q2)) {
			Dequeue(Q1);
		}
		else {
			Dequeue(Q2);
		}
	}

	return -1;
}