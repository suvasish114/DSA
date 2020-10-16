#include<iostream>
void insertion_sort(int a[], int _a);
/*MAIN FUNCTION---*/
int main(){
    int N;
    std::cin>>N;
    int A[N];
    //int *A=(int *)malloc(sizeof(int)*N);
    for(int i=1; i<=N; i++){
        std::cin>>A[i];
    }
    insertion_sort(A,N);
    for(int i=1; i<=N; i++){
        std::cout<<A[i]<<" ";
    }
}
/*INSERTION SORT---*/
void insertion_sort(int a[], int _a){
    for(int i=2; i<=_a; i++){
        int j=i-1;
        a[0]=a[i];
        while(a[0]<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=a[0];
    }
}