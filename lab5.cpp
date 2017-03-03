#include <iostream>
using namespace std;

struct Stack {
	float fCurrent;
	Stack *Next;
	Stack *Head;
};

void push(Stack *&stack, float fValue) {
	Stack *temp = new Stack;
	temp->fCurrent = fValue;
	temp->Next = stack->Head;
	stack->Head = temp;
}

float pop(Stack *&stack) {
	Stack *temp = stack->Head->Next;
	float fReturnValue = stack->Head->fCurrent;
	delete stack->Head;
	stack->Head=temp;
	return fReturnValue;
}

const int iMaxQueueSize = 100;

struct Queue {
	int iStorage[iMaxQueueSize];
	int iSize;
};

void enqueue(Queue *&queue, int iValue) {
	cout << "storage size before: " << queue->iSize << "\n";
	queue->iStorage[queue->iSize] = iValue;
	queue->iSize = queue->iSize + 1;
	cout << "storage size after: " << queue->iSize << "\n";
}

int dequeue(Queue *&queue) {
	int iLastIndex = queue->iSize - 1;
	if (iLastIndex <= -1) {
		return 0;
	}
	cout << "storage : " << queue->iStorage[0] << "\n";
	queue->iSize = iLastIndex;
	return queue->iStorage[iLastIndex];
}

int size(Queue *queue) {
	return queue->iSize;
}

int main() {
	//variant 3
	Stack *myStack = new Stack;
	push(myStack, 0);
	push(myStack, 2.5);
	push(myStack, 4.2);
	push(myStack, 6.3);
	push(myStack, 6.2);
	push(myStack, 7.1);
	push(myStack, 8.2);

	float fPoppedVal = pop(myStack);
	while(fPoppedVal != 0) {
		fPoppedVal = pop(myStack);
		cout << "My stack value: " << fPoppedVal << "\n";
	}

	Queue *myQueue = new Queue;

	enqueue(myQueue, 4);
	enqueue(myQueue, 10);
	enqueue(myQueue, 5);
	enqueue(myQueue, 8);

	int iDequeued;
	cout << "My queue size: " << myQueue->iSize << "\n";
	int queueOverallSize = myQueue->iSize;
	for (int i = 0; i < queueOverallSize; i = i + 1) {
		cout << "i: " << i << "\n";
		iDequeued = dequeue(myQueue);
		cout << "My dequeued value: " << iDequeued << "\n";
	}

}