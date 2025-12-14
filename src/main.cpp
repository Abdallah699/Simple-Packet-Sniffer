#include <iostream>
#include "../include/sniffer.h"

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "   SIMPLE PACKET SNIFFER CLI v1.0       " << std::endl;
    std::cout << "========================================" << std::endl;

    // Initialize on a fake interface
    Sniffer mySniffer("eth0");

    // Start the capture loop
    mySniffer.start();

    return 0;
}