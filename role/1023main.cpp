#include <iostream>
using namespace std;
/*
�}�C �G�Ω���޻P��� 
sizeof���I�s�X�x�s�줸 

�D�ءG
get(i)�G���o�}�C�� i �Ӥ������� (value)�C
set(i, v)�G�N�}�C�� i �Ӥ������� (value) �]�� v�C 
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
		cout<<"odds["<<i<<"]="<<hex<<&odds[i]  //�L�X�a�} 
		    <<"\t(odds + "<<i<<")="<<hex<<p+i<<"\n"; //�L�X���� 
	}
	
}
