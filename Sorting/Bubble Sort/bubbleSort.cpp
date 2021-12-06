#include<iostream>
using namespace std;
void Sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int flag = 0, temp;
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;
            }
        }
        if(flag != 1) break;
    }
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    Sort(A, n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}