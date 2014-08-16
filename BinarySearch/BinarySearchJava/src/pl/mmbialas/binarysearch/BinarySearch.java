package pl.mmbialas.binarysearch;

/**
 * Based on http://algs4.cs.princeton.edu/11model/BinarySearch.java.html
 */

public class BinarySearch {

    private BinarySearch() {

    }

    public static int binarySearchIter(int[] array, int number) {
        int min = 0;
        int max = array.length - 1;

        while (min <= max) {
            int mid = min + ((max-min)/2);
            if (number < array[mid]) {
                max = mid - 1;
            } else if (number > array[mid]) {
                min = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }

    public static void main(String[] args) {

        int[] testTab = new int[100000];

        //already sorted array  (if not --> Arrays.sort(testTab);)
        for (int i = 0; i < testTab.length; i++) {
            testTab[i] = i;
        }

        System.out.println(binarySearchIter(testTab, 54333));

    }
}
