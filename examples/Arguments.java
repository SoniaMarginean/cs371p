// --------------
// Arguments.java
// --------------

import java.util.Arrays;

final class Arguments {
    private static void f (int v, Integer r) {
        ++v;
        ++r;}

    private static void g (int[] p) {
        ++p[1];}

    public static void main (String[] args) {
        System.out.println("Arguments.java");

        {
        int     i = 2;
        Integer j = 3;
        f(i, j);
        assert i == 2;
        assert j == 3;
        }

        {
        int a[] = {2, 3, 4};
        g(a);
        assert a != new int[]{2, 4, 4};
        assert !a.equals(new int[]{2, 4, 4});
        assert Arrays.equals(a, new int[]{2, 4, 4});
        }

        System.out.println("Done.");}}
