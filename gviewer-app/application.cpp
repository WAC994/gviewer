#include "gviewer.hpp"
#include <iostream>

int main()
{
    auto& window = gviewer::get("New Window");
    std::cout << window.getTitle() << std::endl;
}