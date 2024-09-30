bool binarySearch(int arr[], int N, int K) {
    int low = 0, high = N - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid overflow
        
        if (arr[mid] == K) {
            return true; // K is found
        }
        else if (arr[mid] < K) {
            low = mid + 1; // Search in the right half
        }
        else {
            high = mid - 1; // Search in the left half
        }
    }
    return false; // K is not present
}