//error
#include<iostream>
void swap(int &a, int &b);
void quick_sort(int *a, int m, int n);
int main(){
    int T;  //number of test cases
    std::cin>>T;
    int N;  //size of arrays
    while(T--){
        std::cin>>N;
        int A[N];
        for(int i=0; i<N; i++){
            std::cin>>A[i];
        }
        quick_sort(A,0,N);
        for(int i=0; i<N; i++){
            std::cout<<A[i]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void quick_sort(int *a, int m, int n){
    if(m<n){
        int i=m;
        int j=n+1;
        int pivot=a[m];
        do{
            do{
                i=i+1;
            }while(a[i]<pivot);
            do{
                j=j-1;
            }while(a[j]>pivot);
            if(i>j) swap(a[i],a[j]);
        }while(i<j);
        swap(a[m],a[j]);
        quick_sort(a,m,j-1);
        quick_sort(a,j+1,n);
    }
}