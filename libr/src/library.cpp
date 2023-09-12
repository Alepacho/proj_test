#include "library.hpp"

Library::Library() {
    std::cout << "hello" << std::endl;

}

Library::~Library() {
    std::cout << "goodbye" << std::endl;
    
}

void Library::print() {
    std::cout << "this is a test" << std::endl;
}
