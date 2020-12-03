#include <iostream>
using namespace std;

class Queue{
	private:
		int *data;
		int front;
		int back;
	public:
		Queue(int size);
		~Queue(); //�Ѻc�P�� 
		bool isEmpty();//�O�_���� 
		bool full(int size);//�O�_���� 
		void dequeue(int key);//��J 
		int head();//�d�ݫe�ݤ��� 
		int peep(int i);
		int tail();//�d�ݧ��ݤ��� 
		int enqueue();//���X 
};

Queue::Queue(int size){
	data=new int[size];
	front=0;
	back=-1;
	cout<<"���ͤ@�Ӥj�p��"<<size<<"������"; 
}

Queue::~Queue(){
	cout<<"\n\n��C�P��"<<"\n";
}

bool Queue::isEmpty(void){
	return (front > back)? true:false;
}

bool Queue::full(int size){
	return (back >= size-1)? true:false;
}

void Queue::dequeue(int key){
	data[++back] = key;
}

int Queue::head(){
	return data[front];
}

int Queue::peep(int i){
	return data[i]-1;
}

int Queue::tail(){
	return data[back];
}

int Queue::enqueue(){
	return data[front++];
}


int main(int argc, char** argv) {
	int i=0,size=8;
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	
	Queue queue(size);
	
	cout<<"\n��Ʃ�J:\n\n";
	while(i<10&&!queue.full(size)){
		cout<<i<<"��"<<i<<"\n";
		queue.dequeue(a[i]);
		i++; 
	}
	
	cout<<"\n�L�X�̫e�ݭ�:\t"<<queue.head();
	cout<<"\n�L�X�Ĥ��ӭ�:\t"<<queue.peep(a[5]);
	cout<<"\n�L�X�̧��ݭ�:\t"<<queue.tail(); 
	
	i=0;
	cout<<"\n\n\n���X���:\n\n";
	while(!queue.isEmpty())
		cout<<i++<<"���X"<<queue.enqueue()<<"\n" ;
		
		
}
	





