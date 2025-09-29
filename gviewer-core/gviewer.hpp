#pragma once
#include <string>
class gviewer
{
public:
    static gviewer& get(const std::string& title)
    {
        static gviewer instance(title);
        return instance;
    }
    std::string& getTitle();
private:
    gviewer(const std::string& title);
    // Delete copy, move constructors and copy, move assignment operators.
    gviewer(const gviewer& copy) = delete;
    gviewer(gviewer&& move) = delete;
    gviewer& operator=(const gviewer& copy) = delete;
    gviewer& operator=(gviewer&& move) noexcept = delete;
    std::string m_title;
};