#include<iostream>

//insertion sort
void insertion_sort(int *a, int n){
    for(int j=0; j<n; j++){
        int i=j-1;
        int key = a[j];
        while(i>=0 && a[i]>key){
            a[i+1] = a[i];
            i -= 1;
        }
        a[i+1] = key;
    }
}

//main method
int main(){
    int N;  // size of the array
    std::cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
        std::cin>>A[i];
    }
    insertion_sort(A,N);
    for(int i=0; i<N; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
}