#include<bits/stdc++.h>
//We have a lot of library but to save our time we write only above header
//And this header contains all the STL of C++
//But at interview you should write all the headers
//Like if you are use pow() then this belong to <math.h>
//So you should write it. 
//using namespace std;
//namespace is a kind of scope
//let's see how namespace works
//10 to the power 7 is a maximum size to define an array when you make like this arr[10000000]
//when
using namespace std;
#include<iostream>

//Here I have declared My own namespace .
//Generally we do all things at one scope  std.
//struct is a self data type

struct node{
    string str;
    int num;
    double doub;
    char x;

    //if you want to drive only three types of data type out of four
    //You can declare constructor
    node()
 
    


};
struct Student{
    int num;
    Student(int x){
        num=x;
    }
};
namespace Poonam{
    int val=0;1
    
}
namespace code{
    int val=20;
    int getVal(){
        return val*10;
    }


}
//max size of array as globally 10^7->int ,double,char 
//int arr7[10000000];

array<int,3> arr1; //If define it as globally then it will be {0,0,0}
int main(){
  //int arr8[1000000];//max sixe of arrat at main function 10^6->int ,double,char  
  //max size of 10^8->bool data type
   // bool arr9[100000000];

    
    int val=20;
   // cout<<val<<endl;
    //you can also remove using namespace std
    //and write below line 
    //std::cout<<val<<endl; 

    cout<<val<<endl;
    cout<<Poonam::val<<endl;
    cout<<code::getVal()<<endl;

    //Wrong way of defining
    //Instead of this you can write constructor
     node Poonam;
    Poonam.str="striver";
    Poonam.num=12;
    Poonam.doub=2.5;
    
   /*node *Poonam=new node("Poonam",12,45,"A");
   cout<<Poonam.num;
   */
   
 
  
  cout<<Poonam.str<<endl;
  struct Student s(2);
  cout<<s.num;

   //container
  //Arrays->int arr[100];
  //array<int,3> arr;
  
   //->(?,?,?) define in int main then it will give any garbage value.
      array<int ,3> ar1;
   for(auto i:ar1)
   cout<<i<<' ';
   cout<<endl;
   for(auto i:arr1)
   cout<<i<<' ';
   cout<<endl;
   array<int ,5>ar2={1,23,3};//{1,23,3,0,0}
   for(auto i:ar2)
   cout<<i<<" ";
   cout<<endl;
    
    //fill function
    array<int ,4>arr4;
    arr4.fill(2);//{2,2,2,2}

    //at function
   // arr4.at(index); it will give the index no.
    for(int i=0;i<4;i++){
        cout<<arr4.at(i)<<" ";
    }
    cout<<endl;
//iterators
//Array is contiguous
//begin(),end(),rbegin(),rend()
//start,right after end,end,right before begin

array<int ,5> arr6={1,7,6,5,65};
//Iteration of array in STL
for(auto i=arr6.begin();i!=arr6.end();i++)
cout<<*i<<" ";
cout<<endl;

//Iteration of array in STL method 2
for(auto i :arr6) //it is like for each loop
//where you do not need to do point anything.
cout<<i<<" ";
cout<<endl;
 //
for(auto j=arr6.rbegin();j!=arr6.rend();j++){
    cout<<*j<<"  ";
}
cout<<endl;
for(auto i=arr6.cbegin();i!=arr6.end();i++){
    cout<<*i<<" ";
}

//Use String in array
array<string,2> Str={{string("a"),"b"}};
cout<<"Sizes of Array"<<endl;
cout<<Str.size()<<endl;
//Iteration of array(String)
for(auto i:Str)
cout<<i<<" ";
cout<<endl;

//Sort array with library
sort(arr6.begin(),arr6.end());
for(auto i:arr6){
    cout<<i<<" ";
}
cout<<endl;
//Functions of Arrays
//1.Operator[]
cout<<Str[0]<<" "<<Str[1];
//2.front() and back()
//Print the ASCI value
cout<<endl;
array<int ,5> name={'P','o','o','n','a'};
cout<<char(name.front())<<" "<<name.back()<<endl;

//Swap function
arr6.swap(name);
for(auto i=arr6.begin();i!=arr6.end();i++){
    
    cout<<char(*i)<<" ";
    cout<<*i<<" ";
}
cout<<endl;

bool x=arr6.empty();
cout<<x<<endl;//->0
cout<<boolalpha<<(x)<<endl;//->false

//at 
//fill
// max_size()or size()->used to get the num of index
//sizeof()->used to get the  total size of array in bytes
cout<<arr6.size()<<endl;
cout<<sizeof(arr6)<<endl;//->5*4=20
array<int,2> s1={1,2};
cout<<sizeof(s1)<<endl;//->8
//---------------------------------------------------------
string s2="Heellllo";
//H e e l l l l o
for(auto c:s2)
cout<<c<<" ";



//Vectors
//Vectors are dynamic it's size is not fixed.
//Segmentation falut if you push back  10^7 at main function
  vector<int>arr10;//->{}   
cout<<arr10.size()<<endl;//push for insert an array
arr10.push_back(0);//{0}
cout<<arr10.size()<<endl;
arr10.push_back(1);//{1}
cout<<arr10.size()<<endl;

arr10.pop_back();//pop for remove array
cout<<arr10.size()<<endl;
arr10.push_back(1);
    arr10.push_back(2);
    arr10.push_back(3);
    arr10.push_back(4);
    arr10.clear();//clear function will clear all the elements from array vector
    cout<<arr10.size()<<endl;

    //if you want to declare a size
    vector<int> vec(4,0);//{0,0,0,0}
    vector<int> vec1(4,10);//{10,10,10,10}
   //copy entire vec2 at  vec3
    vector<int>  vec3(vec.begin(),vec.end());//all the elements of vec 2 will copy at vec3
   // vector<int> vec3(vec2);

    vector<int> vect;
    vect.push_back(1);//vect.emplace_back(1);//emplace_back and push_back are same but it takes less time than push_back
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
   
   //make a subvector or copy some elements
   vector<int> vect1(vect.begin(),vect.begin()+2);//->{1,2}
   cout<<"Elements of vect1 which is sub array of vect"<<endl;
 for(auto i:vect1)
 cout<<i<<endl;



 //lower bound,upper bound
 //swap swap(v1,v2)
 //begin(),end(),rbegin(),rend()

 //defining 2d vector
 vector<vector<int>>vecto;
 vector<int> ke;

 ke.push_back(10);
 vector<int> ke1;
 ke1.push_back(20);

 vecto.push_back(ke);
 vecto.push_back(ke1);

 //Iteration of 2D Array
  
for(auto  i:vecto){    //i is the iterator itself it will go first at vecto's ke arr, and to go at elements we have to  make one more operator and point it on the elements.
    for(auto j:i){
        cout<<j<<" ";
    }
}
cout<<endl;

for(int i=0;i<vecto.size();i++){
    for(int j=0;j<vecto[i].size();j++){
        cout<<vecto[i][j]<<" ";
    }
   // cout<<endl;
}
cout<<endl;

//define 4*5 size
 vector<vector<int>> vec7( 4 , vector<int> (5, 0)); 
  
    for(int i = 0; i < vec7.size(); i++)
    {
        for(int j = 0; j <vec7[i].size() ; j++)
        {
            cout << vec7[i][j] << " ";
        }
        cout<< endl;
    }


//Array of vector
vector<int>arr11[4];
arr11[0].push_back(2);
arr11[1].push_back(1);

//cout<<endl;






    




return 0;









  // cout<<arr1<<endl


   

}

//If you want to store all types of data types like (int,double,char,string) then you can store it at struct
