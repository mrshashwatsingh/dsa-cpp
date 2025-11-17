#include<iostream>

// WAF to print intersection of 2 arrays.
// Time Complexity O(n^2)
void print_intersection(int arr1[], size_t sz1, int arr2[], size_t sz2);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    size_t sz1 = 5;
    int arr2[] = {6, 7, 3, 1};
    size_t sz2 = 4;

    print_intersection(arr1, sz1, arr2, sz2);

    return 0;
}

void print_intersection(int arr1[], size_t sz1, int arr2[], size_t sz2) {
    for(size_t i=0; i<sz1; i++) {
        for(size_t j=0; j<sz2; j++) {
            if(arr1[i]==arr2[j]) {
                std::cout << arr1[i] << ' ';
                break;
            }
        }
    }
    std::cout << '\n';
}