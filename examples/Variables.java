// --------------
// Variables.java
// --------------

final class Variables {
    public static void main (String[] args) {
        System.out.println("Variables.java");

        {
        int i = 2;
        int v = i;
        ++v;
        assert i == 2;
        assert v == 3;
        }

        {
        Integer i = 2;
        Integer v = i;
        ++v;
        assert i == 2;
        assert v == 3;
        }

        {
        final int[] a = {2, 3, 4};
        assert a.length == 3;
        assert a[1]     == 3;
        try {
            assert a[3] == 0;
            assert false;}
        catch (ArrayIndexOutOfBoundsException e)
            {}
        }

        System.out.println("Done.");}}
