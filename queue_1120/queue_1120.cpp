#include <iostream>
using namespace std;

class Queue{
	private:
		int *data;
		int front;
		int back;
	public:
		Queue(int size);
		~Queue(); //解構銷毀 
		bool isEmpty();//是否為空 
		bool full(int size);//是否滿溢 
		void dequeue(int key);//放入 
		int head();//查看前端元素 
		int peep(int i);
		int tail();//查看尾端元素 
		int enqueue();//取出 
};

Queue::Queue(int size){
	data=new int[size];
	front=0;
	back=-1;
	cout<<"產生一個大小為"<<size<<"的物件"; 
}

Queue::~Queue(){
	cout<<"\n\n佇列銷毀"<<"\n";
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
	
	cout<<"\n資料放入:\n\n";
	while(i<10&&!queue.full(size)){
		cout<<i<<"放"<<i<<"\n";
		queue.dequeue(a[i]);
		i++; 
	}
	
	cout<<"\n印出最前端值:\t"<<queue.head();
	cout<<"\n印出第五個值:\t"<<queue.peep(a[5]);
	cout<<"\n印出最尾端值:\t"<<queue.tail(); 
	
	i=0;
	cout<<"\n\n\n取出資料:\n\n";
	while(!queue.isEmpty())
		cout<<i++<<"取出"<<queue.enqueue()<<"\n" ;
		
		
}
	





