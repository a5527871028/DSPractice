#include <iostream>
using namespace std;

/*
�D�ءG
get(i, j): �Ǧ^�G���}�C�� i �C�A�� j �檺�����ȡC
set(i, j, v): �]�w�G���}�C�� i �C�A�� j �檺�����Ȭ� v�C 
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
	//�Ĥ@�D 
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			cout<<"\n\n"<<"i=2,j=1����}�Ʀr�O:"<<odds[2][1]<<"\t\t";
			break;
		}
	break;
	}
	//�ĤG�D
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			odds[2][1]=12;
			cout<<"����Ai=2,j=1����}�Ʀr�O:"<<odds[2][1];
			break;
		}
	break;
	}
	
}




int main(int argc, char** argv) {
	
	dump();
}
