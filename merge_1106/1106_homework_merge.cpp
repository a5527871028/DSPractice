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

list::list(void){ //���@�ΰ�Alist������list(void) 
	front=new node;
	rear=new node;
	front->link=NULL;
	rear->link=NULL;
}

void list::insert(int key){
	node *new_node,*temp_node;  //���`�Inew_node & temp_node 
	
	new_node=new node;
	
	new_node->data=key;
	new_node->link=NULL;
	
	if(front->link==NULL){
		front->link=new_node; //��^�h 
		rear->link=new_node;
	}
	else{
		temp_node=rear->link;
		temp_node->link=new_node;
		rear->link=new_node;
	}
	
}
//L&M L=x M=y�AL�]�O�e��z 
void cancatenate(node *front_x,node *rear_x,
                 node *front_y,node *rear_y,
				 node *front_z,node *rear_z)
{
	node *this_node;
	if(front_x->link==NULL){  //x=�Ŧ� 
		front_z->link=front_y->link;
		rear_z->link=rear_y->link;
	}			 	
	else{
		if(front_y->link==NULL){ //y=�Ŧ� 
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
		cout<<"��C���e:";
		
		while(this_node->link!=NULL){ //��`�I�W��this_node���V��C�A�åB���O�Ū��ɭԦL�X 
			cout<<this_node->data<<">";
			this_node=this_node->link; //���V�U�@�Ӹ`�Ithis_node
		}
		cout<<this_node->data<<"\n";
		
	}
	else
	   cout<<"�o�O�Ŧ�C��!"<<"\n"; 
	
}

int main(void){
	
	int i;
	int L[N]={0,1,2,3,4,5};
	int M[N]={10,11,12,13,14,15};
	
	list queue1,queue2,queue3;
	
	for(i=0;i<N;i++){
		queue1.insert(L[i]);
	}
	cout<<"\n"<<"��CL";
	queue1.print();
	
	for(i=0;i<N;i++){
		queue2.insert(M[i]);
	}
	cout<<"\n"<<"��CM";
	queue2.print();
	
	cancatenate(queue1.front,queue1.rear,
	            queue2.front,queue2.rear,
				queue3.front,queue3.rear);
	
	queue2=queue3;
	
	
	cout<<"\n"<<"�X�֫��CL";
	queue2.print();
	
	
}







