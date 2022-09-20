#include<iostream>
using namespace std;
class nstacks{
    public:
    int* arr; //it is the array which we have to divide in n number of stacks
    int* top;
    int size;
    int num_stacks;

    nstacks(int num_stacks,int size){
        this->num_stacks=num_stacks; //number of stacks
        this->size=size;  //size from which we have to make an array
        arr=new int[num_stacks*size];  //3*2 =6 size ka array ban gaya
        top=new int[num_stacks];  //top is the array which has the size of number of stacks
        //when everyting is empty then top is fixed
  //-1=-1+n*size
  
        for(int i=0;i<num_stacks;i++){
            top[i]=-1+i*size;  //-1+0*6=-1 for stack 0, -1+1*6=5 for stack 2 ,-1+2*6=11 for stack 3
        }
        //Now we know the all tops of every stack
    }

    void push(int stack_num,int data){
        if(top[stack_num]<-1+(stack_num+1)*size){  //for stack 0--> top[0]<-1+(0+1)*6=5
            top[stack_num]++;  //top[0]++;
            arr[top[stack_num]]=data;  
        }else{
            cout<<"Overflow in Stack"<<stack_num<<endl;
            return;
        }
        
    }

    void pop(int stack_num){
        if(top[stack_num]>-1+(stack_num)*size){
            cout<<"Popped "<<arr[top[stack_num]]<<endl;
            top[stack_num]--;
        }else{
            cout<<"Underflow in Stack "<<stack_num<<endl;
            return;
        }
        
    }
    
    void peek(int stack_num){
        if(top[stack_num]>-1+stack_num*size){
        cout<<"Top element of Stack "<<stack_num<<"is: "<<top[stack_num]<<endl;
        }else{
            cout<<"No element in Stack"<<endl;
        }
        
    }
};
int main()
{

    nstacks A(3,2);
    A.pop(0);
   A.pop(1);
    A.pop(2);

   A.peek(0);
   A.peek(1);
   A.peek(2);

   A.push(0,1);
   A. push(0,2);
   A.push(0,3);

    A.push(1,1);
    A.push(1,2);
    A.push(1,3);

     A.push(2,1);
   A.push(2,2);
   A.push(2,3);
    



    A.pop(0);
    A.pop(1);
   A. pop(2);



   A. peek(0);
   A. peek(1);
   A. peek(2);
    return 0;
}