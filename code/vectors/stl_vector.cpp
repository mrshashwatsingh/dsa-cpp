#include<iostream>
#include<vector>

/*
    std::vector functions -

    size_t size();          returns no. of elements of a vector
    push_back(int& val);    pushes the value to the end of the vetor.
    pop_back();             removes the last element of the vector.
    int front();            return first element of the vector
    int back();             return last element of the vector.
    int at(size_t i);       similar to vector[i].
*/

int main() {
    std::vector<int> vec;
    vec.reserve(17);

    vec = {1, 2, 4, 5, 6};

    std::cout << "Size = " << vec.size() << '\n';

    for(int val : vec) {
        std::cout << val << ' ';
    }

    return 0;
}