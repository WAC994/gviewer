#pragma once
struct point
{
    int x, y;
    point(int value) : x(value), y(value) {}
    point(int v0, int v1) : x(v0), y(v1) {}
};
class data
{
public:
    data(unsigned int ID, int v0, int v1) : m_ID(ID), m_point(v0, v1) {}
    ~data()
    {
        m_next = nullptr;
        m_prev = nullptr;
    }
private:
    unsigned int m_ID;
    point m_point;
    data *m_next, *m_prev;
};