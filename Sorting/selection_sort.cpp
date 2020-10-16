#include<iostream>
void selection_sort(int* a, int n);
int main(){
    int T;  //number of test cases
    std::cin>>T;
    int N;  //array size
    while(T--){
        std::cin>>N;
        int* A=(int*)malloc(sizeof(int)*N); // N element allocated array
        for(int i=0; i<N; i++){
            std::cin>>A[i];
        }
        selection_sort(A,N);
        for(int i=0; i<N; i++){
            std::cout<<A[i]<<" ";
        }
    }
    return 0;
}
void selection_sort(int* a, int n){ //using minimum process
    for(int i=0; i<n; i++){
        int minimum=i;
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]) minimum=j;
        }
        //swap
        int temp=a[i];
        a[i]=a[minimum];
        a[minimum]=temp;
    }
}