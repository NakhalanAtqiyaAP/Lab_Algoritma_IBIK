#include <iostream>
using namespace std;

struct node {
	string data;
	node* next;
};

class queue {
	private:
		node* front;
		node* rear;
		
	public:
		queue() {
			front = NULL;
			rear = NULL;
		}
		
		void enqueue (string data) {
			node* new_node = new node();
			new_node->data = data;
			new_node->next = NULL;
			
			if (rear == NULL) {
				front = new_node;
				rear = new_node;
				return;
			}
			
			rear->next = new_node;
			rear = new_node;
		}
		
		void dequeue() {
			if(front == NULL) {
				cout << "Queue is empty" << endl;
				return;
			}
			
			node* temp = front;
			front = front->next;
			
			if (front == NULL) 
				rear = NULL;
				
			delete temp;
		}
		
		string front_element() {
			if (front == NULL) {
				cout << "Queue is empty" << endl;
				return 0;
			}
			return front->data;
		}
		
		bool is_empty() {
			return (front == NULL);
		}
};

int main ()
{
	queue q;
	
	// q.enqueue(1);
	// q.enqueue(4);
	// q.enqueue(9);

     q.enqueue("www");
      q.enqueue("LLL");
       q.enqueue("AAA");

	
	cout << "Front element is " << q.front_element() << endl;
	q.dequeue();
	cout << "Front element is " << q.front_element() << endl;
	q.dequeue();
	
	return 0;
}