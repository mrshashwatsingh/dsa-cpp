#include<iostream>

// Time Complexity O(n)
size_t linear_search(int arr[], size_t size, int target);

int main() {
    int arr[] = {23, 324, 435, 45, 46, 35, 92, 56};

    std::cout << linear_search(arr, 8, 0);

    return 0;
}

size_t linear_search(int arr[], size_t size, int target) {
    for(size_t i=0; i<size; i++) {
        if(arr[i] == target) return i;
    }

    return -1;
}