#include <iostream>
#include <algorithm>
using namespace std;
/*
�D�ءG
get(i, j): �Ǧ^�G���}�C�� i �C�A�� j �檺�����ȡC
set(i, j, v): �]�w�G���}�C�� i �C�A�� j �檺�����Ȭ� v�C 
column��ARow�C�C 
*/
    int i,j,v=3;
    

void dump(){
	int iArray[12] = {1,2,3,4,
	                  5,6,7,8,
					  9,10,11,12};	
	iArray[i,j]=iArray[0];
	cout<<"�D��1:[0,0]="<<iArray[i,j]<<"\n\n";
	
	iArray[i,j]=v;
	cout<<"�D��2:[0,0]="<<iArray[i,j]<<"\n";
	
	
	
	
}

int main(int argc, char** argv) {
	dump();
	return 0;
}
