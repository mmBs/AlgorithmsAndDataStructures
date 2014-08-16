//
//  main.cpp
//  BinarySearchCpp
//
//  Created by Michal Bialas on 16/08/14.
//  Based on http://en.wikipedia.org/wiki/Binary_search_algorithm
//

#include <iostream>

int binarySearchRec(int* array, int number, int iMin, int iMax) {
    
    //checking if an array is empty
    if (iMax < iMin) {
        return -1;
    } else {
        //calculate a midpoint to cut set in half
        int iMid = iMin + ((iMax - iMin)/2);
        if(array[iMid] == number) {
            return iMid; //number found!
        } else {
            if (array[iMid] > number) {
                return binarySearchRec(array, number, iMin, iMid - 1);
            } else {
                return binarySearchRec(array, number, iMid + 1, iMax);
            }
        }
    }
}

int binarySearchIter(int* array, int number, int iMin, int iMax) {

    while (iMax > iMin) {
        //calculate a midpoint to cut set in half
        int iMid = iMin + ((iMax - iMin)/2);
        if (array[iMid] == number) {
            // key found at index imid
            return iMid;
        // determine which subarray to search
        } else if (array[iMid] > number) {
            // change max index to search lower subarray
            iMax = iMid - 1;
        } else {
            // change min index to search upper subarray
            iMin = iMid + 1;
        }
    }
    return -1; // number was not found
}



int main(int argc, const char * argv[])
{
    int testArray[10] = {1, 8, 5, 7, 32, 54, 12, 77, 87, 99};
    
    std::cout << "[Recursive] Index of the searched number is: " << binarySearchRec(testArray, 8, 0, 9) << std::endl;
    std::cout << "[Iterative] Index of the searched number is: " << binarySearchIter(testArray, 8, 0, 9) << std::endl;
    return 0;
}



