#include<iostream>

// WAF to calculate sum & product of all numbers in an array.
// Time Complexity O(n)
void print_sum_product(int arr[], size_t sz);

int main() {
    int arr[] = {13, 25, 356, 64, 9};
    size_t sz = 5;

    print_sum_product(arr, sz);

    return 0;
}

void print_sum_product(int arr[], size_t sz) {
    int sum = 0;
    long long product = 1;

    for(size_t i=0; i<sz; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    std::cout << "SUM = " << sum << '\n';
    std::cout << "PRODUCT = " << product << '\n';
}