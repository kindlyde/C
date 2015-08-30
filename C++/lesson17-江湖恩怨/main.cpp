#include <iostream>

using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Boss{
	
private:
	static Boss* cintance;
	Boss()
	{
		
	}
	
public:
	static Boss* get_boss()
	{
		if(cintance == NULL)
		{
			cout<<"new get_boss()"<<endl;
			cintance = new Boss();	
		}
		
		return cintance;
	}
	
	int fight()
	{
		return 10;	
	}
};

Boss* Boss::cintance = NULL;

class Master{
	
public:
	//声明为虚函数，在运行时才确定调用的哪个函数 
	virtual int eight_sword_kill()
	{
		return 8;	
	}
};

class New_master: public Master
{

public:
	virtual int eight_sword_kill()
	{
		return Master::eight_sword_kill() * 2;	
	}
};

void PK(Master* master, Boss* boss)
{
	int k = master->eight_sword_kill();
	int b = boss->fight();
	
	if(k < b)
	{
		cout<<"master is killed..."<<endl;	
	}
	else
	{
		cout<<"boss is killed..."<<endl;	
	}
}

int main(int argc, char *argv[]) {
	
	Boss* boss = Boss::get_boss();
	Master m;
	
	cout<<"master vs boss"<<endl;
	
	PK(&m, boss);
	
	New_master n;
	cout<<"new master vs boss"<<endl;
	
	PK(&n, boss);
	
	return 0;
}
