#pragma once

#include <string_view>

struct IEntity
{
    virtual void sendMessage(const IEntity& entity, std::string_view message) const = 0;
    virtual void receiveMessage(std::string_view message) const = 0;
    virtual void getInfo() const = 0;
};