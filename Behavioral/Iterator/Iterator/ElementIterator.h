#pragma once

#include "Iterator.h"
#include "CollectionOfElements.h"

class ElementIterator : public Iterator
{

public:
    ElementIterator(CollectionOfElements& collection) :
        m_collection(collection)
    {}

    virtual Element& getNext() const override
    {
        //TODO: impl
    }


    virtual Element& getPrevious() const override
    {
        //TODO: impl
    }


    virtual unsigned int getCurrentPos() const override
    {
        //TODO: impl
    }


    virtual bool isEnd() const override
    {
        //TODO: impl
    }

private:
    CollectionOfElements& m_collection;

};