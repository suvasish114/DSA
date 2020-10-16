#include<iostream>

//used functions
void insertion_sort(int *a, int n);

//main method
int main(){
    int N;
    std::cin>>N;
    int A[N];
    for(int i=1; i<=N; i++){
        std::cin>>A[i];
    }
    insertion_sort(A,N);
    for(int i=1; i<=N; i++){
        std::cout<<A[i]<<" ";
    }
}

//insertion sort
void insertion_sort(int *a, int n){
    for(int i=2; i<=n; i++){
        int j=i-1;
        a[0]=a[i];
        while(a[0]<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=a[0];
    }
}