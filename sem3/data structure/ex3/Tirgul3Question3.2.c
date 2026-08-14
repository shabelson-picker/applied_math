#include <stdio.h>
#include "Stack.h"

int isThereSubSet(Stack S1, Stack S2);

void main()
{
	int subSet = 0;
	Stack S1 = CreateStack();
	Stack S2 = CreateStack();

	Push(5, S1);
	Push(4, S1);
	Push(3, S1);
	Push(2, S1);
	Push(1, S1);

	Push(8, S2);
	Push(6, S2);
	Push(4, S2);
	Push(2, S2);

	subSet = isThereSubSet(S1, S2);
	if (subSet != -1) {
		printf("There is a subset, subset equals = %d\n", subSet);
	}
	else {
		printf("There is no subset!\n");
	}
	
	FreeStack(S1);
	FreeStack(S2);
}

int isThereSubSet(Stack S1, Stack S2)
{
	int sum1, sum2;
	if (StackIsEmpty(S1) || StackIsEmpty(S2)) {
		return -1;
	}
	sum1 = Pop(S1);
	sum2 = Pop(S2);
	while (!StackIsEmpty(S1) || !StackIsEmpty(S2)) {
		if (sum1 < sum2) {
			if (StackIsEmpty(S1))
				return -1;
			sum1 += Pop(S1);
		}
		else if (sum1 > sum2) {
			if (StackIsEmpty(S2))
				return -1;
			sum2 += Pop(S2);
		}
		if (sum1 == sum2)
			return sum1;
	}

	return -1;
}