#include <iostream>
using namespace std;
void rotatearray(int arr[],int N,int K){
    int temp[N];
    int j=0;
    for(int i=K;i<N;i++){
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<K;i++){
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<N;i++){
        cout<<temp[i]<<" ";
    }
}

int main() {
    //Write your code here
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int K;
    cin>>K;
    rotatearray(arr,N,K);
    return 0;
}
