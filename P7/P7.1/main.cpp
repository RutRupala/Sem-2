#include<iostream>
class calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        float add(float a,float b){
            return a+b;
        }
        float add(float a,int b){
            return a+b;
        }
        int subtract(int a,int b){
            return a-b;
        }
        float subtract(float a,float b){
            return a-b;
        }
        float subtract(float a,int b){
            return a-b;
        }

};

int main(){
    calculator c;
    std::cout<<"Addition of 2 integers: "<<c.add(5,10)<<std::endl;
    std::cout<<"Addition of 2 floats: "<<c.add(5.5f,10.5f)<<std::endl;
    std::cout<<"Addition of a float and an integer: "<<c.add(5.5f,10)<<std::endl;
    std::cout<<"Subtraction of 2 integers: "<<c.subtract(10,5)<<std::endl;
    std::cout<<"Subtraction of 2 floats: "<<c.subtract(10.5f,5.5f)<<std::endl;
    std::cout<<"Subtraction of a float and an integer: "<<c.subtract(10.5f,5)<<std::endl;

    return 0;
}