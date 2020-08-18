#include <iostream>
#include <thread>
#include <vector>
#include <cmath>

auto f = [](double x) {
    std::vector<double> v = {0, 1, 2};
    double s = 0.0;

    // Needed a very big number to confirm that it actually worked
    for (int i = 0; i < 10000000; ++i){
        s+=i*i;
        v.push_back(std::sin(s));
    }

    std::cout << "Thread " << x << " is done!" << "\n";
    std::cout << "Thread " << v[1010] << " is done!" << "\n";
    std::cout << "Thread " << v.size() << " is done!" << "\n";
};

int main() {
    std::cout << "Hello, world!" << "\n";
    std::thread t1(f,1);
    std::thread t2(f,2);
    std::thread t3(f,3);
    std::thread t4(f,4);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    std::cout << "All threads are done!" << "\n";
    return 0;
}
