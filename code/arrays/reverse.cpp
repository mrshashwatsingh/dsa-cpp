#include<iostream>

// Time Complexity O(n)
// We will use two pointers approach
void reverse_arr(int arr[], size_t sz);

int main() {
    int arr[] = {132, 23 ,45, 923, 939, 1000};

    reverse_arr(arr, 6);

    for(int i=0; i<6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void reverse_arr(int arr[], size_t sz) {
    size_t start = 0;
    size_t end = sz-1;

    while(start<end) {
        std::swap(arr[start], arr[end]);

        start++;
        end--;
    }
}