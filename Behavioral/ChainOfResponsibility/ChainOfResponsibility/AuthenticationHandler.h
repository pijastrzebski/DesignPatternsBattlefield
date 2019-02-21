#pragma once

#include "IHandler.h"

class AuthenticationHandler : public IHandler
{
public:

    virtual void setNext() override
    {
        m_handler = std::make_unique<AuthorizationHandler>();
    }


    virtual void handle(const IRequest& request) override
    {
        // if validation is successful
        std::cout << "Authentication passed\n";
        setNext();

        m_handler->handle(request);

        // else
        // return;
    }
    
private:
    std::unique_ptr<IHandler> m_handler;
};