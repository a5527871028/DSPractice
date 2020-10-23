#include <iostream>
using namespace std;
/*
陣列 ：用於索引與賦值 
sizeof為呼叫出儲存位元 

題目：
get(i)：取得陣列第 i 個元素的值 (value)。
set(i, v)：將陣列第 i 個元素的值 (value) 設為 v。 
*/
int main(int argc, char** argv) {
	int odds[]={1,3,5,7,9};
	int *p=odds;
	
	cout<<"access odds[] through index:\n";
	for(int i=0;i<sizeof(odds)/sizeof(int);i++){
		cout<<"odds["<<i<<"]="<<odds[i]<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=0;i<sizeof(odds)/sizeof(int);i++){
		cout<<"odds["<<i<<"]="<<*(p+i)<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=0;i<sizeof(odds)/sizeof(int);i++){
		cout<<"odds["<<i<<"]="<<hex<<&odds[i]  //印出地址 
		    <<"\t(odds + "<<i<<")="<<hex<<p+i<<"\n"; //印出指標 
	}
	
}
