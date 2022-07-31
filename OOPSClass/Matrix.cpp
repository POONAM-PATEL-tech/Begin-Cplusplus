#include<iostream>
using namespace std;
class Matrix{
  int row;
  int column;
  int arr[][];
  
  public:
  Matrix(int row,int column){
    this->row=row;
    this->column=column;
  }
  
  
  void display(){
    cout<<"Row:"<<row<<endl<<"Column"<<column<<endl;

  }
  void display1(){
     
     for(int i=0;i<row;i++){
      for(int j=0;j<column;j++){
        cout<<
      }
     }
  }
  
  
};
int main()
{

  Matrix M(3,3);
  M.display();

    return 0;
}