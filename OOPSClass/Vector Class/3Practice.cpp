#include<iostream>
using namespace std;

template <class T1=int,class T2=double>
class ABC{
    public:
    T1 data1;
    T2 data2;

    ABC(T1 a,T2 b){
        data1=a;
        data2=b;
    } 
    void display(){

}
};
void ABC<T1,T2>::display(){
    cout<<"data1"<<data<<endl;
    cout<<"data2"<<data<<endl;
}

int main()
{

    ABC<> A(2,3.4);
    ABC<double,int> B(3.1,4);
    A.display();
    B.display();
    return 0;
}