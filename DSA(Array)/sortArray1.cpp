vector<int> sortArr(vector<int>arr, int n){
    //complete the function here

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
            
        }
        }
    }
int main[]{
    vector<int>arr;
    arr.push_back(5);
      arr.push_back(1);  
      arr.push_back(2); 
       arr.push_back(4);
       sortArr
}