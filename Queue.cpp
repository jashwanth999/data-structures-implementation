#include<bits/stdc++.h>
using namespace std;

#define max 100

class Queue {


public:
	int arr[max], front = 0,rear=-1;

	void  enque(int val) {

		rear++;

		if (rear >= max) {

			cout << "Queue Overflow";
			return;
		}

		arr[rear] = val;

		cout << arr[rear] << " is pushed" << endl;

	}

	void  deque() {

		if (front>rear) {

			cout << "Queue is empty";
			return;
		}

		cout << arr[front] << " is popped" << endl;

		front++;


	}

	int peek() {

		return arr[front];
	}

	int isEmpty() {

		return front > rear;
	}

};


int main() {


	Queue obj;


	for (int i = 1; i <= 5; i++) {

		obj.enque(i);
	}

	while (!obj.isEmpty()) {

		cout << "peak value " << obj.peek() << endl;

		obj.deque();
	}


	return 0;
}