#include <iostream>
using namespace std;

/*
題目：
get(i, j): 傳回二維陣列第 i 列，第 j 行的元素值。
set(i, j, v): 設定二維陣列第 i 列，第 j 行的元素值為 v。 
*/

struct Num{
	int i,j;
	int odds[3][4];
};


void dump(){
	struct Num ODDS;
	int i,j;
	int odds[3][4];
	ODDS.i=i;
	ODDS.j=j;
	ODDS.odds[3][4]=odds[3][4];
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			odds[i][j]=(i*4)+j+1;
		
		}
	}	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<odds[i][j]<<"\t";
		}
		cout<<"\n";
	}
	//第一題 
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<"\n\n"<<"i=2,j=1的位址數字是:"<<odds[2][1]<<"\t\t";
			break;
		}
	break;
	}
	//第二題
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			odds[2][1]=12;
			cout<<"更改後，i=2,j=1的位址數字是:"<<odds[2][1];
			break;
		}
	break;
	}
	
}




int main(int argc, char** argv) {
	
	dump();
}
