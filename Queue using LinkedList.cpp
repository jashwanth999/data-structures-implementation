#include<bits/stdc++.h>
using namespace std;

class QueueNode {


public:
	int val;

	QueueNode *next;

	QueueNode(int x) {

		val = x;
		next = NULL;
	}

};

QueueNode *front, *rear;


void enque(int val) {

	QueueNode* newNode = new QueueNode(val);

	if (rear == NULL) {

		front = rear = newNode;

		cout<<front->val<<" is pushed"<<endl;

		return;
	}

	rear->next = newNode;

	rear = newNode;

	cout<<rear->val<<" is pushed"<<endl;
}

void dequee() {

	QueueNode * temp = front;

	cout<<front->val<<" is popped"<<endl;

	front = front->next;

	if (front == NULL)
		rear = NULL;

	delete temp;
}


int isEmpty()
{
	return !front;
}


int main() {


	for (int i = 1; i <= 5; i++) {

		enque(i);
	}

   cout<<endl;
   
	while (!isEmpty()) {
		dequee();
	}

	return 0;
}