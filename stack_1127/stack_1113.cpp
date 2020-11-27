#include <iostream>
using namespace std;

class Stack{
	private:
		int *data;
		int top_; //堆疊索引 ，第一項作業：int main時要先印出來頂端元素 
	public:
		Stack(int size); //Constructor 
		~Stack();   //Destructor，作業第三項：清空堆疊內容,在解構前main中使用Stack.clear(); 
		
		int peep(int i);//類似top，作業第二項：偷看堆疊第某個元素 

		bool isEmpty(); //空串列，作業第四項：判斷是否為空 
		bool full(int size); //滿溢 
		void push(int key); //DATA放入堆疊 
		int pop(); //將頂端資料取出	
		int top();	
		
}; 

Stack::Stack(int size){
	data = new int[size];
	top_=-1;
	cout<<"產生一個大小為"<<size<<"的物件"; 
}

Stack::~Stack(){
	cout<<"堆疊銷毀"<<"\n"; 
}

bool Stack::isEmpty(void){
	return (top_ < 0)? true:false;
}

bool Stack::full(int size){
	return (top_ >= size-1)? true:false;
}

void Stack::push(int key){
	data[++top_] = key;
}

Stack::top(){
	return data[top_];
}

Stack::pop(){
	int temp;
	temp=data[top_];
	top--;
	return temp;
}

int main(int argc, char** argv){
	int i=0,S=8;
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	
	Stack stack(S);
	
	cout<<"\n"<<"資料放入"<<"\n";
	while(i<10&&!stack.full(S)) {
		cout<<i<<"放"<<i<<"\t";
		stack.push(a[i]);
		i++; 
	}
	
	cout<<"\t"<<"最頂端的值為"<<stack.top();
	
	i=0;
	cout<<"\n\n"<<"取出資料"<<"\n";
	if(!stack.isEmpty())
		cout<<i++<<"取出"<<stack.pop(); 
	else
	    cout<<"空的陣列";
	
	
}


