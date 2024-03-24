int cbinsearch(int* arr, int size, int value) {
    int l = 0, r = size - 1, count = 0;
    while (l <= r) {
        int mid = r / 2;
        if (arr[mid] == value) {
            count++;
            int tp = mid - 1;
            while (tp >= 0 and arr[tp] == value) {
                count++;
                tp--;
            }
            tp = mid + 1;
            while (tp < size and arr[tp] == value) {
                count++;
                tp++;
            }
            break;
        }
        else if (arr[mid] < value) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return count;
}
