bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || *matrixColSize == 0) {
        return false;
    }
    int m = matrixSize;       
    int n = *matrixColSize;  
    int low = 0;
    int high = (m * n) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        int row = mid / n; 
        int col = mid % n; 
        int mid_element = matrix[row][col];
        if (mid_element == target) {
            return true; 
        } else if (mid_element < target) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    return false;
}
