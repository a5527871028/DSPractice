#include <iostream>
using namespace std;

class Stack{
	private:
		int *data;
		int top_; //���|���� �A�Ĥ@���@�~�Gint main�ɭn�L�X�ӳ��ݤ��� 
	public:
		Stack(int size); //Constructor 
		~Stack();   //Destructor�A�@�~�ĤT���G�M�Ű��|���e
		
		

		bool isEmpty(); //�Ŧ�C�A�@�~�ĥ|���G�P�_�O�_���� 
		bool full(int size); //���� 
		void push(int key); //DATA��J���| 
		int peek(int i);//����top�A�@�~�ĤG���G���ݰ��|�ĬY�Ӥ��� 
		int top(); //�d�ݳ��ݸ��
		int pop(); //�N���ݸ�ƨ��X	
			
		
}; 



Stack::Stack(int size){
	data = new int[size];
	top_=-1;
	cout<<"���ͤ@�Ӥj�p��"<<size<<"������"; 
}

Stack::~Stack(){
	cout<<"\n"<<"���|�P���C"<<"\n"; 
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

Stack::peek(int i){
	return i;
} 

Stack::top(){
	return data[top_];
}

Stack::pop(){
	int temp;
	temp=data[top_];
	top_--;
	return temp;
}

int main(int argc, char** argv){
	int i=0,S=8;
	int a[10]={0,1,2,3,4,5,6,7,8,9};//data
	
	Stack stack(S);
	
	cout<<"\n"<<"��Ʃ�J"<<"\n";
	while(i<10&&!stack.full(S)) {
		cout<<i<<"��"<<i<<"\t";
		stack.push(a[i]);
		i++; 
	}
	
	cout<<"\n"<<endl;
    cout<<"\t"<<"�L�X�Ĥ��ӭ�"<<stack.peek(a[5]) ;
	cout<<"\t"<<"�̳��ݪ��Ȭ�"<<stack.top();
	
	i=0;
	cout<<"\n\n"<<"���X���:"<<"\t";
	if(!stack.isEmpty())
		cout<<i++<<"��"<<stack.pop()<<"���X"; 
	
	
	
}


