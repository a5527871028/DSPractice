#include <iostream>
#define N 6
using namespace std;

class node{ //�w�q��V�쵲�`�I���O 
	friend class list; //�٦����O 
	int data;
	node *link;
};

class list{ //�w�qlist����V�쵲��C���O 
	private:
		node *front; //���V�쵲��C�e�� 
		node *rear;  //���V�쵲��C���� 
	public:
		list();
		~list();
		bool empty();
		void insert_node(int key);
		void print();
		void reverse(void);
};


list::list(void){ //�غc 
	front=new node;
	rear=new node;
	front->link=NULL;
	rear->link=NULL;
	
}

list::~list(void){//�Ѻc 
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

bool list::empty(void){  //�P�_�O�_���Ŧ�C 
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
	
	if(empty()){ //�Ŧr��N���J�Ĥ@�Ӹ`�I��front���� 
		front->link=new_node;
		rear->link=new_node;
	}
	else{        //��enode=front���V�쵲 
		this_node=front->link;
		if(key<this_node->data){  //��J���p���enode�A�L�N�|�O�@��data�A���J���C�e�� 
			front->link=new_node;
			new_node->link=this_node;
		}
		else{
			while(this_node->link!=NULL){ //���C���� 
				prev_node=this_node;
				this_node=this_node->link;
				if(key<this_node->data){
					prev_node->link=new_node;
					new_node->link=this_node;
					return;
				}
				else;
			}
			this_node->link=new_node; //��C���� 
			rear->link=new_node;
		}
	}
}

void list::print(void){ //front�}�l�Ldata 
	node *this_node;
	
	if(!empty()){
		this_node=front->link;
		cout<<"==>��C���e��:";
		
		while(this_node->link!=NULL){
			cout<<this_node->data<<"->";
			this_node=this_node->link;
		}
		cout<<this_node->data<<"\n";
	}
	else
	cout<<"�o�O�Ŧ�C��!";
}

void list::reverse(void){ //��V�쵲���� 
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
		cout<<"\n"<<i<<"��i"<<a[i]<<"\n";
		list_1.insert_node(a[i]);
		list_1.print();
	}
	
	cout<<"\n\n"<<"�N��C����"<<endl;
	list_1.reverse();
	list_1.print(); 
	
	cout<<"\n\n"<<"�N��C����^�h"<<endl;
	list_1.reverse();
	list_1.print(); 
}
