import java.util.Scanner;

class insertionSort{
    public static Scanner scan = new Scanner(System.in);
    public static void Sort(int A[]){
        for(int j=1; j<A.length; j++){
            int i=j-1;
            int key=A[j];
            while(i>=0 && A[i]>key){
                A[i+1]=A[i];
                i -= 1;
            }
            A[i+1]=key;
        }
    }
    public static void main(String[] args) {
        int n = scan.nextInt();
        int A[] = new int[n];
        scan.nextLine();
        for(int i=0; i<n; i++){
            A[i] = scan.nextInt();
        }
        scan.close();
        Sort(A);
        for(int i=0; i<n; i++){
            System.out.print(A[i]+" ");
        }
        System.out.println("\n");
    }
}