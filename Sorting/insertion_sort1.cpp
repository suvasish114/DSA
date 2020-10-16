#include<iostream>
void insertion_sort ( int *A , int n) 
{
    for( int i = 0 ;i < n ; i++ ) {
    /*storing current element whose left side is checked for its 
             correct position .*/

      int temp = A[ i ];    
      int j = i;

       /* check whether the adjacent element in left side is greater or
            less than the current element. */

          while(  j > 0  && temp < A[ j -1]) {

           // moving the left side element to one position forward.
                A[ j ] = A[ j-1];   
                j= j - 1;

           }
         // moving current element to its  correct position.
           A[ j ] = temp;       
     }  
}
int main(){
    int N;
    std::cin>>N;
    int *A;
    A=(int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++){
        std::cin>>A[i];
    }
    insertion_sort(A,N);
    for(int i=0; i<N; i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}