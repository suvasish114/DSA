import java.util.Arrays;
public class MergeSort{
    // Algorithm for merge
    public static void Merge(int[] A, int p, int q,int r){
        // copy the left and right subarray into L[] and R[]
        int[] L = Arrays.copyOfRange(A, p, q-p+1);
        int [] R = Arrays.copyOfRange(A, q+1, r+1);
        // arrange the order
        int i=0;
        int j=0;
        int k=0;
        while(i<L.length && j<R.length){
            if(L[i] <= R[j]){
                A[k] = L[i];
                i++;
            }
            else{
                A[k] = R[j];
                j++;
            }
            k++;
        }
        while(i<L.length){
            A[k] = L[i];
            i++;
            k++;
        }
        while(j<R.length){
            A[k] = R[j];
            j++;
            k++;
        }
    }
    // algorithm for sort
    public static void Sort(int[] A, int p, int r){
        if(p<r){    // condition check
            int q = Math.abs((r+p)/2);
            Sort(A,p,q);
            Sort(A,q+1,r);
            Merge(A,p,q,r);
        }
    }
    public static void main(String[] args){
        int[] arr = {5,4,3,2,1};
        Sort(arr, 0, 4);
        for(int a: arr){
            System.out.println(a+" ");
        }
    }
}