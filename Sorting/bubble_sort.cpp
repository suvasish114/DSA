#include<iostream>

void bubble_sort(int *a, int n);
void modified_bubble_sort(int *a, int n);

int main(){
    int N;
    std::cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
        std::cin>>A[i];
    }
    bubble_sort(A,N);
    for(int i=0; i<N; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

//normal bubble sort
void bubble_sort(int *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(a[j]>a[j+1]){
                //swap
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

//modified bubble sort
void modified_bubble_sort(int *a, int n){
    for(int i=0; i<n-1; i++){
    	int flag=0;
        for(int j=0; j<n; j++){
            if(a[j]>a[j+1]){
                //swap
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag) return;
    }
}
