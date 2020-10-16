#include <iostream>
using namespace std;

stract Role{
char *name;
int level,hp,ap,dp,sp;

}

void test role(){
	char name[]="路人甲";
	stract Role role;
	role.name=name;
	role.level=1;
	role.hp=10;
	role.ap=1;
	role.dp=1;
	role.sp=5;
	dump_role(role); 
}
void dump_role(Role&role){
	cout<<"名稱："<<role.name<<"\n";
	cout<<"等級："<<role.level<<"\n";
	cout<<"血量："<<role.hp<<"\n";
	cout<<"攻擊："<<role.ap<<"\n";	
	cout<<"防禦："<<role.dp<<"\n";
	cout<<"精神："<<role.sp<<"\n"; 
	 
}
