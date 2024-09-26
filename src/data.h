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
    data(unsigned int ID, int v0, int v1) : m_ID(ID), m_point(v0, v1) {++s_dataStructSize;}
    ~data()
    {
        --s_dataStructSize;
        m_next = nullptr;
        m_prev = nullptr;
    }
    void addDataNext(data *dn)
    {
        (data*)m_next;
        m_next = dn;
    }
    void addDataPrev(data *dn)
    {
        (data*)m_prev;
        m_prev = dn;
    }
private:
    unsigned int m_ID;
    point m_point;
    data *m_next, *m_prev;
    static long int s_dataStructSize;
};
long int data::s_dataStructSize = 0;