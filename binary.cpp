#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter No: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter No. Wnts to find: ";
    cin>>key;
    
    int start = 0, end = n-1, mid;
    int pos= -1;
    
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(arr[mid]==key){
            pos = mid;
            break;
        }
        else if(arr[mid]>key)
            end = mid -1;   
        else
            start = mid + 1;
    }
    
    
    if(pos == -1){
        cout<<key<<" is not Present in array"<<endl;
    }else{
        cout<<key<<" is present at "<<pos<<endl;
    }

    return 0;
}
