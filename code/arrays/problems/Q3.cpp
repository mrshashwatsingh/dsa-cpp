#include<iostream>

// WAF to print all the unique values in an array.
// Time Complexity O(n^2)
void print_unique(int arr[], size_t sz);

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5};
    size_t sz = 8;

    print_unique(arr, sz);

    return 0;
}

void print_unique(int arr[], size_t sz) {
    for(size_t i=0; i<sz; i++) {
        bool unique = true;

        for(size_t j=0; j<sz; j++) {
            if(arr[i]==arr[j] && i!=j) {
                unique = false;
                break;
            }
        }

        if(unique) {
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << '\n';
}