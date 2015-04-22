#include <sstream>
#include <stdexcept>

template<class T>
T parse(const char * s) {
    T value;
    std::stringstream ss(s);
    ss >> value;
    if (ss.fail() || !ss.eof()) {
        throw std::runtime_error("Unable to convert string to the desired type");
    }
    return value;
}
