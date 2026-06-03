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
		int count;
		
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
			count++;
		}
		
		string dequeue() {
			if(front == NULL) {
				cout << "Queue is empty" << endl;
				return "";
			}
			string result = front->data;
			node* temp = front;
			front = front->next;
			
			if (front == NULL) 
				rear = NULL;
				
			delete temp;
			count--;
            return result;
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

		int size(){
			return count;
		}

        void display(){
            if(front == NULL) {
				cout << "Queue is empty" << endl;
				return;
			}
            node* current = front;
            while(current != NULL){
                cout<<current->data<<endl;
                current = current->next;
            }
			cout<<"Total peserta :"<<size();
        }

};

int main ()
{
	queue q;
    int user_input;
    cout<<"Selamat Datang Di Program Sederhana Antrian"<<endl<<endl;
    
    do
    {
      
        cout<<"Silakan Pilih Perintah :"<<endl;
        cout<<"(1) Enqueue"<<endl;
        cout<<"(2) Desqueue"<<endl;
        cout<<"(3) Menampilkan Antrian"<<endl;
        cout<<"(0) Exit"<<endl;
        cin>>user_input;
        cin.ignore();

        if (user_input == 1)
        {
            string nama;
            cout<<"Masukan peserta :";
            getline(cin, nama);
            q.enqueue(nama);
        }
        else if(user_input == 2){
            cout<<"Peserta yang sudah masuk antrian :"<<q.dequeue()<<endl;
        }
        else if(user_input == 3){
            q.display();
        }
        
    } while (user_input != 0);
    
	
	// q.enqueue(1);
	// q.enqueue(4);
	// q.enqueue(9);

    //  q.enqueue("www");
    //   q.enqueue("LLL");
    //    q.enqueue("AAA");

	
	// cout << "Front element is " << q.front_element() << endl;
	// q.dequeue();
	// cout << "Front element is " << q.front_element() << endl;
	// q.dequeue();


	
	return 0;
}