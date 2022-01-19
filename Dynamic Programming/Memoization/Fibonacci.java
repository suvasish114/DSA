import java.util.Arrays;

public class Fibonacci{
    // Array to store overlapped values
    private int[] memoize = new int[100];
    public void _init(){
        Arrays.fill(memoize, -1);
    }
    public int fib(int n){
        // if overlapping not occures
        if(memoize[n]==-1){
            // base case
            // changing elemnts: n
            // minimum values: n={0,1}
            if(n <= 1) return memoize[n] = n;
            // recrusive call
            // changing values: n={(n-1), (n-2)}
            return memoize[n] = fib(n-1)+fib(n-2);
        }
        // if ovverlapping occures
        return memoize[n];
    }

    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        f._init();
        System.out.println(f.fib(40));        
    }
}