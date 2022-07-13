#include <iostream>
using namespace std;
class shop{
    static int count;
    int itemid;
    int price;

    public:
    void setdata(){
        cin>>itemid;
        cin>>price;
        count++;
    }
    void getdata(){
        cout<<itemid<<" "<<price<<endl;
    }
    static void getcount(){
        cout<<"The value of count"<<count<<endl;
    }

};
int shop::count;
int main(){
  /*  shop Poonam,Suhana;//maximum item limit
    Poonam.setdata();
    Poonam.getdata();
    Poonam.getcount();
    Suhana.setdata();
    Suhana.getdata();
    Suhana.getcount();
    */
   
    
    
    
    return 0;
}