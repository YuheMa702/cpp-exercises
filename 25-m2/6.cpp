#include <iostream>
#include <shared_mutex>
#include <mutex>
#include <thread>
#include <vector>
#include <chrono>

std::shared_mutex mtx;  // Allows multiple readers, one writer
static int count{};      // Shared variable

void reader(int id) {
    while (true) {
        std::shared_lock<std::shared_mutex> lock(mtx);  // Shared read lock
        std::cout << "[Reader " << id << "] count: " << count << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate reading delay
    }
}

void writer(int id) {
    while (true) {
        std::unique_lock<std::shared_mutex> lock(mtx);  // Exclusive write lock
        count++;
        std::cout << "[Writer " << id << "] Updated count to: " << count << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(200));  // Simulate writing delay
    }
}

int main() {
    constexpr int num_readers = 3;
    constexpr int num_writers = 2;

    std::vector<std::thread> threads;

    // Start reader threads
    for (int i = 0; i < num_readers; i++) {
        threads.emplace_back(reader, i);
    }

    // Start writer threads
    for (int i = 0; i < num_writers; i++) {
        threads.emplace_back(writer, i);
    }

    // Join threads (Run indefinitely)
    for (auto &t : threads) {
        t.join();
    }

    return 0;
}
