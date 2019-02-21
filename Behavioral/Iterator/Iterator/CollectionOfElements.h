#pragma once

#include <vector> 

#include "Element.h"

struct CollectionOfElements
{
    void addElement() { m_elements.emplace_back(); }

    std::vector<std::unique_ptr<Element>> m_elements;
};