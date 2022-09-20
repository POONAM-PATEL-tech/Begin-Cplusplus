#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class samay{
	
	int hr,min;
	
	
	
	public:
		
		samay(int hr,int min){
			this->hr=hr;
			this->min=min;
			
		}
		
		samay operator ++(){
			min ++;  //by postfix;
			if(min>59){
				hr++;
				min=0;
			}
				return samay(hr,min);
		}
	
	
	
/*	samay operator ++(){
		
		
		++min;
		if(min>=60){
			++hr;
			min-=60;
		}
		
		return samay(hr,min);
	}
	*/
	samay operator ++(int){
		samay t(hr,min);
		
		++min;
		if(min>=60){
			++hr;
			min-=60;
	
	}
	
	return t;
}
	
	void display(){
        if(min<10 && hr==12){
            cout <<"00" <<":0"<<min<<endl;
        }
		
        
	}	
	
	
};

int main(){
	
	
	int hr,min;
	cin>>hr>>min;
	
	samay time(hr,min);
	time.display();
	time.operator ++();
	time.display();
	
	
	
	
	samay time1(11,59), time2(11,40);
	
	++time1;
	time1.display();
	time1++;
	time1.display();  
	time2++;
	time2.display();
	return 0;
}