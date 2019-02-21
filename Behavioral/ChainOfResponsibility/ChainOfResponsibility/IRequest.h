#pragma once

#include <tuple>
#include <string>

struct IRequest
{
    virtual void getInfo() const noexcept = 0;
    virtual std::tuple<std::string, std::string> getCredentials() const noexcept = 0;
};
