#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);
    v1.push_back(16);

    //Iterators(begin(),end(),rbegin(),rend(),cbegin(),cend(),crbegin(),crend())
    for(auto i=v1.begin();i!=v1.end();i++){  //begin will point first element and end will point theoratical last element
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v1.rbegin();i!=v1.rend();i++){  //reverse
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v1.cbegin();i!=v1.cend();i++){ //constant which will satrt from first element

        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v1.crbegin();i!=v1.crend();i++){// cnstant reverse begin which will satrt from last element
        cout<<*i<<" ";
    }
    cout<<endl;

    //Capacity
    //size(),max_size(),capacity(),resize(n),empty(),shrink_to_fit(),reserve();
    cout<<"Size of vector v1 "<<v1.size()<<endl;
    cout<<"max_size of vector v1 "<<v1.max_size()<<endl;
    cout<<"Capacity of vector v1 = "<<v1.capacity()<<endl;
    cout<<"Resize the vector to 5 with the help of resize():"<<endl;
    v1.resize(4);
    cout<<"The new size of vector"<<v1.size()<<endl;
    //Check if the vector is empty or not
    if(v1.empty()==false){
        cout<<"Vector is not empty"<<endl;
        
    }else{
        cout<<"Vector is empty"<<endl;
    }
   // v1.shrink_to_fit();
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    //Element Access(v2[],v2.at(),v2.front(),v2.back(),v2.data())
    vector<int> v2;
    for (int i = 1; i <= 10; i++)
        v2.push_back(i * 10);

        cout<<"Reference "<<v2[3]<<endl;
        cout<<"at "<<v2.at(4)<<endl;
        cout<<"first element "<<v2.front()<<endl;
        cout<<"last element "<<v2.back()<<endl;
        //data()
        int *pinter=v2.data();
        cout<<"the second element:"<<*(pinter+1)<<endl;

        //Modifiers
        //assign(),push_back(),pop_back(),insert(),erase(),swap(),clear(),emplace()
       
       vector<int> v3;
       v3.assign(5,10);
       for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " "<<endl;
        v3.push_back(12);
        int n=v3.size();
        cout<<"The last element :"<<v3[n-1]<<endl;
       v3.pop_back();//remove last element
       for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " "<<endl;
        //insert 5 at begin
        v3.insert(v3.begin(),5);
        cout<<"the fist element"<<v3.front()<<endl;
        //removes the first element
        v3.erase(v3.begin());
        cout<<"the first element"<<" "<<v3[0]<<endl;

        //insert at begin
        v3.emplace(v3.begin(),15);
        cout<<"the first element"<<" "<<v3[0]<<endl;

        //Insert any element at the end
        v3.emplace_back(50);
        n=v3.size(); //because size is updated
        cout<<"the first element:"<<v3[n-1]<<endl;

        //iterate whole vector
        cout<<"Element of vector"<<endl;

        for(int i=0;i<v3.size();i++){
            cout<<v3.at(i)<<" ";
        }
        cout<<endl;
    
        v3.clear(); //erases the vector
        cout<<v3.size();
    
        
        cout<<endl;
        //erase the vector

        //Swap two vectors
        vector<int> v4;
        vector<int> v5;
        v4.push_back(10);
        v4.push_back(20);
        v5.push_back(30);

        v5.push_back(40);
        cout<<"Elements of vector 4 ;"<<endl;
        for(auto i=v4.begin();i!=v4.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;
        cout<<"The elements of vector 5;"<<endl;
        for(auto i=v5.begin();i!=v5.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;

        v4.swap(v5);
        cout<<"Swapped Elements of vector 4 ;"<<endl;
        for(auto i=v4.begin();i!=v4.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;
        cout<<"Swapped Elements of vector 5 ;"<<endl;
        for(auto i=v5.begin();i!=v5.end();i++){
            cout<<*i<<" ";
        }
        cout<<endl;

        

  
    return 0;
}