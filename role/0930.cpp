#include <iostream>
#include <string>
using namespace std;



struct Role{ //struct�w�]�Opublic class�h private
char *name;
int level,hp,ap,dp,sp;

};



void dump_role(Role&role){
	cout<<"�W�١G"<<role.name<<"\n";
	cout<<"���šG"<<role.level<<"\n";
	cout<<"��q�G"<<role.hp<<"\n";
	cout<<"�����G"<<role.ap<<"\n";	
	cout<<"���m�G"<<role.dp<<"\n";
	cout<<"�믫�G"<<role.sp<<"\n"; 
	 
}

void test_role(){
	char name[]="���H��";
	struct Role role;
	role.name=name;
	role.level=1;
	role.hp=10;
	role.ap=1;
	role.dp=1;
	role.sp=5;
	dump_role(role); 
}

int main(){
	 test_role();
}


