#include "gviewer.hpp"

std::string &gviewer::getTitle()
{
    return m_title;
}

gviewer::gviewer(const std::string &title)
    : m_title{title}
{
}