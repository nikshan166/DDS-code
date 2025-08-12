#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low =0;
    int high =n-1;
    int val=50;
    int index=-1;
    while(low <=high){
        int mid = (low+high)/2;
        if (arr[mid] == val){
            index=mid;
            break;
        }
        else if(arr[mid] < val){
        low= mid+1;
        }
        else
        {
            high=mid-1;
        }}
        if(index ==-1){
            cout<<"not found"<<endl;
            
        }
            else{
                cout<<"found of index"<<index;
            }
            
        }
       
