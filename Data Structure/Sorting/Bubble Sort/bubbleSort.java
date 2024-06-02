import java.util.Scanner;

class bubbleSort{
    public static Scanner scan = new Scanner(System.in);
    static void Sort(int a[]){
        for(int i=0; i<a.length-1; i++){
            Boolean flag = false;
            int temp;   
            for(int j=0; j<a.length-1; j++){
                if(a[j]>a[j+1]){
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    flag = true;
                }
            }
            if(flag == false) break;
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
    }
}