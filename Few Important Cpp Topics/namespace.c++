
/*
        Namespace provide the space where we can define or declare identifier i.e. variable,  method, classes.

        syntax :
            namespace  namespace_name 
            {
                // code declarations i.e. variable  (int a;)
                method (void add();)
                classes ( class student{};)
            }

            Utilizing Identifiers
            We can utilize identifiers of the namespace in our program with:

            the :: operator
            the using declaration
            the using directive
*/

#include<iostream>
using namespace std;

namespace sonu{
    void hello(){
        cout<<"Hello sonu, How Are You !!"<<endl;
    }
    void hellor(){
        cout<<"Hello Ruchu, You Are so sweet <3  !!"<<endl;
    }
    int add(int a,int b){
        cout<<a+b<<endl;
    }
}
// 2nd namespace 
namespace floatAddition {
    float sum(float a , float b){
        cout<<a+b<<endl;
    }
}


namespace msg{
        void show(){
            cout<<"\nYou are a very good coder Ruchuu Stay sticked to your path \nKeep Studying <3 \nI'm always there to make u happy and keep u motivated <3 \n"<<endl;
        }
}
// using namespace namespace_name 
// by using this kind of declaration outside of the main and in global scope we are declaring the scope of a namespace globally..
using namespace sonu;

int main(){


/*
1st way to use namespace identifier
    using namespace sonu;
    // using namespace namespace_name 
    // by using this kind of declaration inside main we are declaring the scope of a namespace for inside the main function only ..
*/
    hello();
    hellor();

    // 2nd way to use namespace identifier
    // using the using declaration for the only identifier in the namespace 
    // using namespace_name :: identifier
    using msg::show;
    show();

    add(7,5);

    /* Specifying the scope of the sum() i.e, it belongs from namespace floatAdditon*/
    
    /* 3rd way to use namespace identifier
    usig the :: operator (scope resolution operator )*/
    floatAddition::sum(10.14,25.78);
}

