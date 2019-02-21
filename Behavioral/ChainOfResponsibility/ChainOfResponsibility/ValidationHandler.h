#pragma once

#include "IHandler.h"

class ValidationHandler : public IHandler
{
public:
    
    virtual void setNext() override
    {
        m_handler = std::make_unique<AuthenticationHandler>();
    }


    virtual void handle(const IRequest& request) override
    {
        // if validation is successul
        std::cout << "Validation passed\n";
        setNext();

        m_handler->handle(request);

        // else
        // return;
    }
    
private:
    std::unique_ptr<IHandler> m_handler;
};