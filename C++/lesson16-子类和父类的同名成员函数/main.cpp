#include <cstdlib>
#include <iostream>

using namespace std;


class Parent
{
protected:
    int i;
    int f;
};

class Child : public Parent
{
protected:
    int i;
    
    void f()
    {
        cout<<"Parent::i = "<<Parent::i<<endl;
        cout<<"Child::i = "<<Child::i<<endl;
        cout<<"Parent::f = "<<Parent::f<<endl;
    }
public:
    Child(int i, int j)
    {
		this->i = i;
        //Parent::i = i;
        //Child::i = j;
        //Parent::f = i + j;
        
        f();
    }
};

void run()
{
    Child child(1, 3);
}

int main(int argc, char *argv[])
{
    run();
    
    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}

