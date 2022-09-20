#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class match{
    public:
      string name,gender,religion,email;
      int age;
      long long mob;
   
      match(string n,string g,string r,string e,int a,long long m){
        name=n;
        gender=g;
        religion=r;
        email=e;
        age=a;
        mob=m;
      }
      
      
};
int main()
{
   
   list<match>li;
    list<match>l2;
      
       li.push_back(match("m1","M","Hindu","m1@gmail.com",27,12345678910));
       li.push_back(match("m2","M","Hindu","m2@gmail.com",28,22345678910));  
        li.push_back(match("m3","M","Sikh","m3@gmail.com",29,32345678910));
           li.push_back(match("m4","M","Muslim","m4@gmail.com",27,42345678910));
              li.push_back(match("m5","M","Hindu","m5@gmail.com",30,52345678910));

        l2.push_back(match("f1","F","Hindu","f1@gmail.com",27,62345678910));
       l2.push_back(match("f2","F","Hindu","f2@gmail.com",28,72345678910));  
        l2.push_back(match("f3","F","Sikh","f3@gmail.com",29,82345678910));
           l2.push_back(match("f4","F","Muslim","f4@gmail.com",27,92345678910));
              l2.push_back(match("f5","F","Hindu","f5@gmail.com",30,13345678910));   






        map<list<match>,string>mapList;
        mapList[l2]="F";
        mapList[li]="M";



        string gen;
    cout<<"Enter the gender: ";
    cin>>gen;
      map<list<match>,string>::iterator it;
      list<match>::iterator it1;
    for(it=mapList.begin();it!=mapList.end();it++){
        
        if((*it).second==gen){
            
            
            for(it1=l2.begin();it1!=l2.end();it1++){
                cout<<it1->name;
            }

        }else if((*it).second==gen){

            for(it1=li.begin();it1!=li.end();it1++){
                cout<<it1->name;
            }

        
        }
    }
   /* list<match> :: iterator it;
    for(it=li.begin(); it!=li.end(); it++){
        if(it->religion==r)cout<<"Name = "<<it->name<<endl;
    }  */     
     

        return 0;
}