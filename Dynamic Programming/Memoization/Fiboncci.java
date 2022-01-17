import java.util.Arrays;
public class Fibonacci{
    private int[] lookup = new int[100];
    Arrays.fill(lookup, -1);
    private int fib(int n){
        if(lookup[n] == -1){
            // base case
            if(lookup[n] <= 1){
                lookup[n] = n;
            }
            // recursion
            else{
                lookup[n] = fib(n-1) + fib(n-2);
            }
        }
        return lookup[n];
    }
    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        System.out.println("The fibonacci number of 20 is: "+f.fib(20));
    }
}