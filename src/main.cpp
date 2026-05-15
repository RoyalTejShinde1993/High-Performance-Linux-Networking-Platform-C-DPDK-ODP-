
#include <iostream>
#include <thread>
#include <vector>
#include "packet_engine.hpp"

int main() {
    std::cout << "Starting High-Performance Linux Networking Platform\n";

    PacketEngine engine;
    engine.initialize();

    std::vector<std::thread> workers;

    for (int i = 0; i < 4; ++i) {
        workers.emplace_back([&engine, i]() {
            engine.run_worker(i);
        });
    }

    for (auto &t : workers) {
        t.join();
    }

    return 0;
}
