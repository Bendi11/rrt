#include <iostream>
#include <iterator>
#include <sys/socket.h>
#include <format>

int main(int argc, const char *argv[]) {
    std::ostream_iterator<const char> out{std::cout};
}
