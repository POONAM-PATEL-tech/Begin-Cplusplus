#include <iostream>
using namespace std;
void merge(int a[],int beg,int mid,int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int LeftArray[n1],RightArray[n2];
    //Copy data to temporary Arrays
     for(int i=0;i<n1;i++)
     LeftArray[i]=a[beg+i];
     for(int j=0;j<n2;j++)
     RightArray[j]=a[mid+j+1];

     i=0;
     j=0;
     k=beg;

     while(i<n1 && j<n2){
         if(LeftArray[i]<=RightArray[j]){
             a[k]=LeftArray[i];
             i++;
         }else{
             a[k]=RightArray[j];
             j++;
         }
        k++;

     }
     while(i<n1){
         a[k]=LeftArray[i];
         i++;
         k++;

     }
     while(j<n2){
         a[k]=RightArray[j];
         j++;
         k++;
     }

}
void mergeSort(int a[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);


    }
}
void printArray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={12,31,45,67,2,8,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Before Sorting Array"<<endl;
    printArray(a,n);
    cout<<endl;
    mergeSort(a,0,n-1);
    cout<<"After Sorting Array"<<endl;
    printArray(a,n);
    return 0;
}