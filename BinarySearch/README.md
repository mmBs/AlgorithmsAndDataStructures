Binary Search algorithm
===========================

Generally, to find a value in unsorted array, we should look through elements of an array one by one, until searched value is found. In case of searched value is absent from array, we go through all elements. In average, complexity of such an algorithm is proportional to the length of the array.

Situation changes significantly, when array is sorted. If we know it, random access capability can be utilized very efficiently to find searched value quick. Cost of searching algorithm reduces to binary logarithm of the array length. For reference, log2(1 000 000) ≈ 20. It means, that in worst case, algorithm makes 20 steps to find a value in sorted array of a million elements or to say, that it doesn't present it the array.

Algorithm
---------

Algorithm is quite simple. It can be done either recursively or iteratively:

1. Get the middle element.
2. If the middle element equals to the searched value, the algorithm stops.
3. Otherwise, two cases are possible:
   - searched value is less, than the middle element. In this case, go to the step 1 for the part of the array, before middle element.
   - searched value is greater, than the middle element. In this case, go to the step 1 for the part of the array, after middle element.

Now we should define, when iterations should stop. First case is when searched element is found. Second one is when subarray has no elements. In this case, we can conclude, that searched value doesn't present in the array

The description comes from [AlgoList website.](http://www.algolist.net/Algorithms/Binary_search)

Performance
---------

Worst case performance	O(log2 n)      
Best case performance	O(1)     
Average case performance	O(log2 n)    
Worst case space complexity	O(1)    

More info: [Wikipedia](http://en.wikipedia.org/wiki/Binary_search_algorithm)
