#include <iostream>
#include <algorithm>
using namespace std;
/*
�D�ءG
get(i, j): �Ǧ^�G���}�C�� i �C�A�� j �檺�����ȡC
set(i, j, v): �]�w�G���}�C�� i �C�A�� j �檺�����Ȭ� v�C 
column��ARow�C�C 
*/
    


void dump(){
	int iArray[12] = {1,2,3,4,5,6,7,8,9,10,11};
	int i,j,v;
	iArray[i,j]=iArray[1];
	cout<<"�D��1:[0,1]="<<iArray[i,j]<<"\n�H�U�O�Ҧ��ƦC\n\n";
	
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		cout<<iArray[i]<<"\t";
		iArray[i]=iArray[i]+5;
		
		}
		cout<<endl;	
	}
	cout<<endl<<endl;
	
	iArray[i,j]=iArray[2,3]=7;
	cout<<"�D��2�󴫫�[2,3]="<<iArray[i,j]<<"\n\n"; 
	
	
}

int main(int argc, char** argv) {
	dump();
	return 0;
}
