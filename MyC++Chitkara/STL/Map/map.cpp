#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> Student_ID;
    Student_ID["A"]=1;
    Student_ID["B"]=2;
     Student_ID["C"]=3;

     Student_ID.insert({{"D",4},{"E",5}});
      map<string,int>::iterator it;
      for(it=Student_ID.begin();it!=Student_ID.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
      }

      
    return 0;
}