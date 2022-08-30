import java.util.*;

public class ArrayDemo {
    public static void main(String[] args) {
        // declare an array kept in a stack
        int[] arr = null;
        System.out.println(arr);

        // Alocate Space in a Heap
        arr = new int[5];
        System.out.println(arr);
        System.out.println(arr[0]);
        System.out.println(arr[1]);
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 40;
        arr[3] = 50;

        int x = 0, j = 1;
        Collections.swap(arr, x, j);
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        for (int val : arr)
            System.out.println(val);
    }
}
