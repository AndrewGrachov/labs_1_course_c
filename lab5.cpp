#include <iostream>
using namespace std;
//variant 5

const int iListSize = 10;

struct Node {
	float fValue;
	bool last;
	Node *Next;
};

struct List {
	Node *nStorage[iListSize];
	int iSize;
};

void add(List *&list, float fValue) {
	Node *node = new Node;
	node->fValue = fValue;
	node->last = true;
	int curSize = list->iSize;
	if (curSize != 0) {
		list->nStorage[curSize - 1]->Next = node;
		list->nStorage[curSize - 1]->last = false;
	}
	list->nStorage[curSize] = node;
	list->iSize = curSize + 1;
}


struct Stack {
	int iCurrent;
	Stack *Next;
	Stack *Head;
};

void push(Stack *&stack, int iValue) {
	Stack *temp = new Stack;
	temp->iCurrent = iValue;
	temp->Next = stack->Head;
	stack->Head = temp;
}

int pop(Stack *&stack) {
	Stack *temp = stack->Head->Next;
	int iReturnValue = stack->Head->iCurrent;
	delete stack->Head;
	stack->Head=temp;
	return iReturnValue;
}


int main() {
	//part1

	List *myList = new List;
	add(myList, 2.3);
	add(myList, 4.3);
	add(myList, 6.7);
	add(myList, 9.2);
	add(myList, 5.6);

	Node *fIterableValue = myList->nStorage[0];
	cout << "Iterable value: " << fIterableValue->fValue << "\n";

	while (fIterableValue->last != true) {
		fIterableValue = fIterableValue->Next;
		cout << "List item: " << fIterableValue->fValue << "\n";
	}

	//variant 5
	Stack *myStack = new Stack;
	push(myStack, 0);
	push(myStack, 2);
	push(myStack, 4);
	push(myStack, 6);
	push(myStack, 7);
	push(myStack, 10);
	push(myStack, 1);

	int iPoppedVal = pop(myStack);
	while(iPoppedVal != 0) {
		iPoppedVal = pop(myStack);
		cout << "My stack value: " << iPoppedVal << "\n";
	}

}