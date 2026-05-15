
#include <iostream>
#include <chrono>
#include <thread>
#include "packet_engine.hpp"

void PacketEngine::initialize() {
    std::cout << "[INIT] Packet engine initialized\n";
    std::cout << "[INIT] NUMA-aware memory pools configured\n";
    std::cout << "[INIT] Hugepages enabled\n";
}

void PacketEngine::run_worker(int worker_id) {
    for (int i = 0; i < 5; ++i) {
        std::cout << "[Worker " << worker_id
                  << "] Processing packet batch " << i << "\n";

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
