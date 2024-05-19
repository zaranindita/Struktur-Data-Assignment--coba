#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n) {
    std::vector<int> sequence;
    if (n > 0) sequence.push_back(0); // elemen pertama
    if (n > 1) sequence.push_back(1); // elemen kedua
    
    for (int i = 2; i < n; ++i) {
        sequence.push_back(sequence[i - 1] + sequence[i - 2]); // elemen berikutnya
    }
    return sequence;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah bilangan Fibonacci yang ingin dihasilkan: ";
    std::cin >> n;
    
    std::vector<int> sequence = fibonacci(n);
    for (int num : sequence) {
        std::cout << num << " ";
    }
    return 0;
}