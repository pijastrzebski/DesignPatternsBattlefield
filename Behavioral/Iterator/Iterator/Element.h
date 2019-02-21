#pragma once

#include <iostream>

class Element
{
    static int id;
    int m_elementId;
public:
    Element() :
        m_elementId(id++)
    {}

    void getInfo() const { std::cout << "Element ID: " << id; }
};

int Element::id;