#include <iostream>
using namespace std;
void shell_sort(int *a, int n);

// driving code
int main()
{
    int N;
    cout << "Enter the number of elements : ";
    cin >> N;
    int A[N];
    cout << "Enter the elements - ";
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    shell_sort(A,N);
    cout<<"Elements after sorted are - ";
    for(int i=0; i<N; i++){
        cout<<" "<<A[i];
    }
    cout<<endl;
    return 0;
}

// shell sort
void shell_sort(int *a, int n){
    for(int gap=n/2; gap>=1; gap /=2){
        for(int j=gap; j<n; j++){
            for(int i=j-gap; i>=0; i -=gap){
                if(a[i+gap] > a[i])
                    break;
                else{
                    int temp;
                    temp = a[i+gap];
                    a[i+gap] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
}