#include<iostream>

//functions used
void bubble_sort(int *a, int n);
void modified_bubble_sort(int *a, int n);

//main method
int main(){
    int N;
    std::cin>>N;
    int A[N];
    for(int i=0; i<N; i++){
        std::cin>>A[i];
    }
    modified_bubble_sort(A,N);
    //bubble_sort(A,N);
    for(int i=0; i<N; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

//normal bubble sort
void bubble_sort(int *a, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
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
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                //swap
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
}
/*
NOTE: in modified bubble sort, if the array get sorted after k'th pass then in (k+1)'th pass the if condition become true and the outer for loop will stop from unnecessary checking process
*/
