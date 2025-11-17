#include<iostream>

// WAF to swap the max & min numbers of an array.
// Time complexity O(n)
void swap_max_min(int arr[], size_t sz);

int main() {
    int arr[] = {13, 25, 356, 64, 9};
    size_t sz = 5;

    swap_max_min(arr, sz);

    for(int i=0; i<sz; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

void swap_max_min(int arr[], size_t sz) {
    int max = 0;
    int min = 0;

    for(size_t i=0; i<sz; i++) {
        if(arr[i]>arr[max]) max=i;
        if(arr[i]<arr[max]) min=i;
    }

    std::swap(arr[max], arr[min]);
}
