public class Tabulation {
    static int fib(int n){
        int f[] = new int[n+1];
        // initial values
        f[0] = 0;
        f[1] = 1;
        // iteratate through the whole sequence
        for(int i=2; i<=n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        // returns the last calculated value
        return f[n];
    }
    // driving code
    public static void main(String[] args) {
        System.out.println("Fibonacci of 40 is: "+fib(40));
    }
}
