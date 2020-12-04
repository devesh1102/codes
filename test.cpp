// Sample code to read input and write output:

/*
#include <iostream>

using namespace std;

int main() 
{
	char name[20];
	cin >> name;                     // Read input from STDIN
	cout << "Hello " << name;        // Write output to STDOUT
	return 0;
}
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

#include <iostream>
// #include< algorithms>
#include<climits>
#include<vector>
using namespace std;

class A{
    public:
    virtual void f1(){
        cout<<"in A F1"<<endl;
    }
    void f2(){
        cout<<"in A F2"<<endl; 
    }
};

class B: public A{
    public:
    void f1(){
        cout<<"in B F1"<<endl;
    }
     void f2(){
        cout<<"in B F2"<<endl; 
    }
};
int main()

{
    A* ptr;
    B aa;
    ptr = &aa;
    ptr->f1();
    ptr->f2();


    
    
    
    
    
    
    
	return 0;
}