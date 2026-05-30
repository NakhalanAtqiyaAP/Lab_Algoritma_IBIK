#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Queue {
	private:
		int size = 0;
		Node* front;
		Node* rear;
		
	public:
		Queue() {
			front = NULL;
			rear = NULL;
		}
		
		void enqueue(int data) {
			Node* node = new Node();
			node->data = data;
			node->next = NULL;
			if (front == NULL) {
				front = node;
				rear = node;
			}
			else {
				rear->next = node;
				rear = node;
			}
			size++;
		}
		
		int dequeue() {
			if (front == NULL) {
				return -1;
			}
			Node* temp = front;
			int val = temp->data;
			
			front = front->next;
			if (front == NULL) {
				rear = NULL;
			}
			size--;
			return val;
		}
		
		int peek() {
			return front->data;
		}
		
		int queue_size() {
			return size;
		}
};

int main() {
	Queue* queue = new Queue();
	queue->enqueue(10);
	queue->enqueue(25);
	cout << queue->dequeue() << endl;
			
	queue->enqueue(11);
	queue->enqueue(15);
	
	cout << queue->queue_size() << endl;
	
	cout << queue->peek() << endl;
	
	return 0;
}