// #include <iostream>
// using namespace std;

// const int MAX = 100;

// class Queue{
//     private:
//     int rear;
//     int front;
//     int arr[MAX];
//     int count;

//     public:
//     Queue(){
//         front = 0;
//         rear = MAX - 1;
//         count = 0;
//     }

//     void enqueue(int x){
//         if(count >= MAX){
//             cout<<"Sudah full"<<endl;
//             return;
//         }

//         rear = (rear + 1) % MAX;
//         arr[rear] = x;
//         count++;
// };
//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Antrian Kosong"<<endl;
//         }
//         int x = arr[front];
//         front = (front + 1) % MAX;
//         count--;
//         return;
//     };

//     int peek(){
//         if(isEmpty()){
//             cout<<"Antrian Kosong"<<endl;
//             return -1;
//         }
//         return arr[front];
//     };

//     int size(){
//         return count;
//     };
//     bool isEmpty(){
//         return count == 0;
//     };
//     bool isFill(){
//         return count == MAX;
//     };
//     int getFront(){
//         return front;
//     }
//     int getRear(){
//         return rear;
//     }
//     int getArray(int index){
//         return arr(index);
//     }

// };
// int main()
// {
//     Queue* queue = new Queue();
//     // queue->enqueue(10);
//     // queue->enqueue(30);
//     // queue->enqueue(20);

//     // cout<<"Ukuran queue: "<<queue->size()<<endl;
//     // cout<<"Dequeue paling depan :"<< queue->dequeue()<<endl;
//     // cout<<"Ukuran queue setelah di dequeue :"<<queue->size()<<endl;

//     int input = -1;
//     do{
//         cout<<"Program Sederhana Queue"<<endl<<endl;
//         cout<<"(0) Exit"<<endl;
//         cout<<"(1) Enqueue"<<endl;
//         cout<<"(2) Dequeue"<<endl;
//         cout<<"(3) Lihat Antrian"<<endl;

//         cin>>input;
//         if (input == 1)
//         {
//             int angka;
//             cout<<"Masukan sebuah angka :";
//             cin >> angka;
//             queue->enqueue(angka);
//         }
//         else if (input == 2)
//         {
//            cout<<"Angka yang di dequeue :";
//            queue->dequeue();
//         }
//         else if(input == 3){
//             for (int i = queue->getFront(); i < queue->getRear(); i++)
//             {
//                cout<<queue->getArray(i)<<' ';
//             }
//             cout<<endl;
            
//         }
        
        
//     } while(input != 0);
    
//     return 0;
// }

#include <iostream>
using namespace std;

const int MAX = 100;

class Queue {
	private:
		int rear;
		int front;
		int arr[MAX];
		int count;
		
	public:
		Queue() {
			front = 0;
			rear = MAX - 1;
			count = 0;
		}
		
		void enqueue(int x) {
			if (count >= MAX) {
				cout << "Queue is full" << endl;
				return;
			}
			rear = (rear + 1) % MAX;
			arr[rear] = x;
			count++;
		}
		
		int dequeue() {
			if (isEmpty()) {
				cout << "Antrian kosong" << endl;
				return -1;
			}
			int x = arr[front];
            front = (front + 1) % MAX;
            count--;
            return x;
		}
		
		int peek()
        {
            if (isEmpty())
            {
                cout << "Antrian kosong." << endl;
                return -1;
            }
            return arr[front];
        }

        int size()
        {
            return count;
        }

        bool isEmpty()
        {
            return count == 0;
        }

        bool isFull()
        {
            return count == MAX;
        }
        int getFront() {
        	return front;
		}
		int getRear() {
			return rear;
		}
		int getArray(int index) {
			return arr[index];
		}
};

int main() {
	Queue* queue = new Queue();
//	queue->enqueue(30);
//	queue->enqueue(14);
//	queue->enqueue(20);
//	
//	cout << "Ukuran queue: " << queue->size() << endl;
//	cout << "Dequeue paling depan: " << queue->dequeue() << endl;
//	cout << "Ukuran queue setelah di dequeue: " << queue->size() << endl;
	
	// cara pake cin ke queue
	int user_input = -1;
	do {
		cout << "Program Sederhana Queue" << endl << endl;
		cout << "(0) Exit" << endl;
		cout << "(1) Enqueue" << endl;
		cout << "(2) Dequeue" << endl;
		cout << "(3) Lihat Antrian" << endl;
		cin >> user_input;
		
		if (user_input == 1) {
			int angka;
			cout << "Masukkan angka: ";
			cin >> angka;
			queue->enqueue(angka);
		}
		else if (user_input == 2) {
			cout << "Angka yang di dequeue: " << queue->dequeue() << endl;
		}
		else if (user_input == 3) {
			for (int i = queue->getFront(); i <= queue->getRear(); i++) {
				cout << queue->getArray(i) << ' ';
			}
			cout << endl;
		}
	} while (user_input != 0);
	return 0;
}