#include <iostream>
#include <algorithm>
using namespace std;
/*
題目：
get(i, j): 傳回二維陣列第 i 列，第 j 行的元素值。
set(i, j, v): 設定二維陣列第 i 列，第 j 行的元素值為 v。 
column行，Row列。 
*/
    int i,j,v=3;
    

void dump(){
	int iArray[12] = {1,2,3,4,
	                  5,6,7,8,
					  9,10,11,12};	
	iArray[i,j]=iArray[0];
	cout<<"題目1:[0,0]="<<iArray[i,j]<<"\n\n";
	
	iArray[i,j]=v;
	cout<<"題目2:[0,0]="<<iArray[i,j]<<"\n";
	
	
	
	
}

int main(int argc, char** argv) {
	dump();
	return 0;
}
