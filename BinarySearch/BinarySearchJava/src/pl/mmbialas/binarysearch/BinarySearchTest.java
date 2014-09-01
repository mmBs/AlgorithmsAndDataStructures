package pl.mmbialas.binarysearch;


import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Java program to perform binary search in Java collection e.g List, Set
 * Read more: http://javarevisited.blogspot.com/2014/03/binary-search-vs-contains-performance.html
 */

public class BinarySearchTest {

    public static void main(String[] args) {

        List<Integer> testArrayList = new ArrayList<Integer>(2000000);

        for (int i = 0; i < testArrayList.size(); i++) {
            testArrayList.add(new Integer(i));
        }

        //contains search
        long startTime = System.nanoTime();
        boolean isExist = testArrayList.contains(new Integer(2000000));
        long totalTime = System.nanoTime() - startTime;

        System.out.println("Time to search 2M record using contains(): " + totalTime + " nanoseconds");

        //binary search
        startTime = System.nanoTime();
        Collections.sort(testArrayList);
        Integer existingNumber = Collections.binarySearch(testArrayList, new Integer(2000000));
        totalTime = System.nanoTime() - startTime;

        System.out.println("Time to search 2M record using binarySearch(): " + totalTime + " nanoseconds");

    }

}

/**
 * Results:
 * Time to search 2M record using contains(): 16000 nanoseconds
 * Time to search 2M record using binarySearch(): 670000 nanoseconds
 */
