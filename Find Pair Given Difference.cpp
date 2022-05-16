

bool findPair(int arr[], int l, int n){
    sort(arr,arr+l);
    for(int i=0;i<l-1;i++){
        if(binary_search(arr,arr+l-i-1,arr[l-i-1]-n)) return true;
    }
    return false;
    
}
