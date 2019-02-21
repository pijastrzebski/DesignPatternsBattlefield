#pragma once
#include "IGraphic.h"

#include <string>
#include <unordered_map>

class CompoundGraphic : public IGraphic
{
public:
    CompoundGraphic();
    ~CompoundGraphic();
    
    virtual void draw() const override;
    virtual void move() const override;
    virtual void scale(int amount) override;

    void add(std::string&& name, std::unique_ptr<IGraphic> graphic);
    void remove(std::string&& name);

private:
    std::unordered_map<std::string, std::unique_ptr<IGraphic>> m_graphicMap;
};

