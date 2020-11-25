#include <iostream>
#define N 6
using namespace std;

class node{
	friend class list;
	friend void cancatenate(node *front_x,node *rear_x,
	                        node *front_y,node *rear_y,
							node *front_z,node *rear_z);
	int data;
	node *link;
};

class list{
	public:
		node *front;
		node *rear;
	public:
		list();
		void insert(int key);
		void print(void);
};

list::list(void){ //類作用域，list類中的list(void) 
	front=new node;
	rear=new node;
	front->link=NULL;
	rear->link=NULL;
}

void list::insert(int key){
	node *new_node,*temp_node;  //有節點new_node & temp_node 
	
	new_node=new node;
	
	new_node->data=key;
	new_node->link=NULL;
	
	if(front->link==NULL){
		front->link=new_node; //折回去 
		rear->link=new_node;
	}
	else{
		temp_node=rear->link;
		temp_node->link=new_node;
		rear->link=new_node;
	}
	
}
//L&M L=x M=y，L也是容器z 
void cancatenate(node *front_x,node *rear_x,
                 node *front_y,node *rear_y,
				 node *front_z,node *rear_z)
{
	node *this_node;
	if(front_x->link==NULL){  //x=空串 
		front_z->link=front_y->link;
		rear_z->link=rear_y->link;
	}			 	
	else{
		if(front_y->link==NULL){ //y=空串 
			front_z->link=front_x->link;
			rear_z->link=rear_x->link;
		}
		else{
			front_z->link=front_x->link;
			this_node=rear_x->link;
			this_node->link=front_y->link;
			rear_z->link=rear_y->link;
		}
	}
}

void list::print(void){
	node *this_node;
	
	if(front->link!=NULL){
		this_node=front->link;
		cout<<"串列內容:";
		
		while(this_node->link!=NULL){ //當節點名為this_node指向串列，並且不是空的時候印出 
			cout<<this_node->data<<">";
			this_node=this_node->link; //指向下一個節點this_node
		}
		cout<<this_node->data<<"\n";
		
	}
	else
	   cout<<"這是空串列唷!"<<"\n"; 
	
}

int main(void){
	
	int i;
	int L[N]={0,1,2,3,4,5};
	int M[N]={10,11,12,13,14,15};
	
	list queue1,queue2,queue3;
	
	for(i=0;i<N;i++){
		queue1.insert(L[i]);
	}
	cout<<"\n"<<"串列L";
	queue1.print();
	
	for(i=0;i<N;i++){
		queue2.insert(M[i]);
	}
	cout<<"\n"<<"串列M";
	queue2.print();
	
	cancatenate(queue1.front,queue1.rear,
	            queue2.front,queue2.rear,
				queue3.front,queue3.rear);
	
	queue2=queue3;
	
	
	cout<<"\n"<<"合併後串列L";
	queue2.print();
	
	
}







