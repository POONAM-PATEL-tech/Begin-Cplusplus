#include<iostream>
using namespace std;
int main()
{
    //C++ provides two type of string representation one with creating char arrays and treat them like string and second 
    //is to make string objects.

    //by making an char array we can initialize it
    char str1[10]={'W','E','L','C','O','M','E','\0'};
     for(int i=0;i<10;i++){
        cout<<str1[i];
     }
     cout<<endl;

     //initialize with direct by " ".
     char str2[8]="Welcome";
     
        cout<<str2;
     
     cout<<endl;

     //Taking Input from the user
    /* char str[10];
     cout<<"Enter a String:";
     cin>>str;//If you entered Hi this is Poonam
     cout<<"You entered:";
     cout<<str;      //Then it will give Hi only and terminate all the text.
     cout<<endl;*/
    
    //if you write something at str if there will be space between that then it will go to str3 and if there memory
    //will be available it will go and print there all remaining part without taking any input.
     //Use of cin.get() with it you will get all the text which you are inserting
     /*char str3[40];
     cout<<"Enter a String:";
     cin.get(str3,40);//If you entered Hi this is Poonam
     cout<<"You entered:";
     cout<<str3;      //Then it will give all the text.
     cout<<endl;
     */
    
    //we have many types of disadvantage of above method because there will be size of string will be given and there will be memory space problem
    //So memory can be waste and can be short to display the output.



    //Now I am going to introduce new method to initialize string
    //here we do not need to give size of string and it will also print all the string without terminating.
    string str4="Hi this is Poonam";
    cout<<str4;
    cout<<endl;
    
    //If we take user input and give space between them then you will have to use getline
    //Best thing to use this method that the memory will not waste . So this is the best memory management.
     string str5;
     cout<<"Give string with geline function:";
     getline(cin,str5);
     cout<<"Entered String:";
     cout<<str5;
   


    return 0;
}