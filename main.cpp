#include <iostream>



using namespace std;

int dell();
int add();

int add(){
    dell();
    cout<< "add\n";
}

int dell(){
    add();
    cout<< "dell\n";
}

int main()
{
 int z=99;

 int a = 3;
 int b = 9;


   return 0;
}
