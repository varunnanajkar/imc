#include <iostream>
#include <vector>

int main() {
    const int SIZE = 16;
    // Allocate large vectors that exceed typical CPU cache sizes (~32MB+,
    std::vector<int> A(SIZE * SIZE, 1);
    std::vector<int> B(SIZE * SIZE, 0);

    // Memory-intensive loop: Streaming data across the bus
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            B[j * SIZE + i] = A[i * SIZE + j]; // Transposition forces noi
        }
    }
    return 0;
}
