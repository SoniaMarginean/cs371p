// ----------------
// StackVsHeap.java
// ----------------

final class StackVsHeap {
    private static int f (int n) {
        if (n == 0)
            return 0;
        return 1 + f(n - 1);}

    public static void main (String[] args) {
        System.out.println("StackVsHeap.java");

        try {
            final int n = 10000;
            assert f(n) == n;}
        catch (StackOverflowError e) {
            assert false;}

        try {
            final int n = 100000;
            assert f(n) == n;
            assert false;}
        catch (StackOverflowError e) {
            assert e.toString().equals("java.lang.StackOverflowError");}

        try {
            final int[] a = new int[10000000];}
        catch (OutOfMemoryError e) {
            assert false;}

        try {
            final int[] a = new int[100000000];
            assert false;}
        catch (OutOfMemoryError e) {
            assert e.toString().equals("java.lang.OutOfMemoryError: Java heap space");}

        System.out.println("Done.");}}
