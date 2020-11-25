#include <iostream>
#define N 6
using namespace std;

class node{ //定義單向鏈結節點類別 
	friend class list; //夥伴類別 
	int data;
	node *link;
};

class list{ //定義list為單向鏈結串列類別 
	private:
		node *front; //指向鏈結串列前端 
		node *rear;  //指向鏈結串列尾端 
	public:
		list();
		~list();
		bool empty();
		void insert_node(int key);
		void print();
		void reverse(void);
};


list::list(void){ //建構 
	front=new node;
	rear=new node;
	front->link=NULL;
	rear->link=NULL;
	
}

list::~list(void){//解構 
	node *this_node,*temp_node;
	
	if(front->link!=NULL){
		this_node=front->link;
		while(this_node->link!=NULL){
			temp_node=this_node;
			this_node=this_node->link;
			delete temp_node;
		}
		delete this_node;
	}
	else;
	
	delete front; 
	delete rear;
}

bool list::empty(void){  //判斷是否為空串列 
	if(front->link==NULL)
	return true;
	else
	return false;
}

void list::insert_node(int key){
	node *new_node,*prev_node,*this_node;
	
	new_node=new node;
	
	new_node->data=key;
	new_node->link=NULL;
	
	if(empty()){ //空字串就插入第一個節點到front之後 
		front->link=new_node;
		rear->link=new_node;
	}
	else{        //當前node=front指向鏈結 
		this_node=front->link;
		if(key<this_node->data){  //輸入的小於當前node，他就會是一個data，插入到串列前端 
			front->link=new_node;
			new_node->link=this_node;
		}
		else{
			while(this_node->link!=NULL){ //到串列中間 
				prev_node=this_node;
				this_node=this_node->link;
				if(key<this_node->data){
					prev_node->link=new_node;
					new_node->link=this_node;
					return;
				}
				else;
			}
			this_node->link=new_node; //串列尾端 
			rear->link=new_node;
		}
	}
}

void list::print(void){ //front開始印data 
	node *this_node;
	
	if(!empty()){
		this_node=front->link;
		cout<<"==>串列內容為:";
		
		while(this_node->link!=NULL){
			cout<<this_node->data<<"->";
			this_node=this_node->link;
		}
		cout<<this_node->data<<"\n";
	}
	else
	cout<<"這是空串列唷!";
}

void list::reverse(void){ //單向鏈結反轉 
	node *prev_node,*this_node,*next_node;
	next_node=front->link;
	this_node=NULL;
	while(next_node->link!=NULL){
		prev_node=this_node;
		this_node=next_node;
		next_node=next_node->link;
		this_node->link=prev_node;
	}
	next_node->link=this_node;
	front->link=next_node;
}


int main(int argc, char** argv) {
	int i;
	int a[N]={5,2,1,55,64,111};
	
	list list_1;
	
	for(i=0;i<N;i++){
		cout<<"\n"<<i<<"丟進"<<a[i]<<"\n";
		list_1.insert_node(a[i]);
		list_1.print();
	}
	
	cout<<"\n\n"<<"將串列反轉"<<endl;
	list_1.reverse();
	list_1.print(); 
	
	cout<<"\n\n"<<"將串列反轉回去"<<endl;
	list_1.reverse();
	list_1.print(); 
}
