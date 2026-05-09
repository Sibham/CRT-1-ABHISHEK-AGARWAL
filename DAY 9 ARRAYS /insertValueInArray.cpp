//Insert on element in an array
#include<iostream>
using namespace std;
void print(int arr[], int size){
    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void InsertElement(int arr[],int &size , int index , int value){
    for(int i = size ; i>index ; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    size++;
} 


int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    InsertElement(arr , size , 2,25);
    print(arr , size);
    
}
