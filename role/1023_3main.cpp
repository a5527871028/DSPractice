#include <iostream>
#include <algorithm>
using namespace std;
/*
題目：
get(i, j): 傳回二維陣列第 i 列，第 j 行的元素值。
set(i, j, v): 設定二維陣列第 i 列，第 j 行的元素值為 v。 
column行，Row列。 
*/
    


void dump(){
	int iArray[12] = {1,2,3,4,5,6,7,8,9,10,11};
	int i,j,v;
	iArray[i,j]=iArray[1];
	cout<<"題目1:[0,1]="<<iArray[i,j]<<"\n以下是所有排列\n\n";
	
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
		cout<<iArray[i]<<"\t";
		iArray[i]=iArray[i]+5;
		
		}
		cout<<endl;	
	}
	cout<<endl<<endl;
	
	iArray[i,j]=iArray[2,3]=7;
	cout<<"題目2更換後[2,3]="<<iArray[i,j]<<"\n\n"; 
	
	
}

int main(int argc, char** argv) {
	dump();
	return 0;
}
