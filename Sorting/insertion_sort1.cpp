// straight insertion sort  
#include<iostream>
using namespace std;
void sort(int *a, int n);

int main(){
    int N;
    cout<<"Enter the number of elements : ";
    cin>>N;
    int A[N];
    cout<<"Enter the elements - ";
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    sort(A, N);
    cout<<"Elements after sorted are - ";
    for(int i=0; i<N; i++){
        cout<<" "<<A[i];
    }
    cout<<endl;
    return 0;
}

// insertion sort
void sort(int *a, int n){
    for(int i=0; i<n; i++){
        int temp = a[i];
        int j = i;
        while(j>0 && temp<a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}
