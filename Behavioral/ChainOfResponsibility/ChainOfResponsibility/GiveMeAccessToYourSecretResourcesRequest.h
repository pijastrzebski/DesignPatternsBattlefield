#pragma once

#include "IRequest.h"
#include <iostream>

class GiveMeAccessToYourSecretResourcesRequest : public IRequest
{
public:
    virtual void getInfo() const noexcept
    {
        std::cout << "Give Me Access To Your Secret Resources Request\n";
    }

    virtual std::tuple<std::string, std::string> getCredentials() const noexcept
    {
        return {m_name, m_password};
    }

private:
    std::string m_name{"admin"};
    std::string m_password{"secret_password"};
};