#pragma once

#include "AuthorizationHandler.h"
#include "AuthenticationHandler.h"
#include "ValidationHandler.h"

class BaseHandler : public IHandler
{
public:
    virtual void setNext() override
    {
        m_handler = std::make_unique<ValidationHandler>();
    }


    virtual void handle(const IRequest& request) override
    {
        // base handling is always* successful
        setNext();

        m_handler->handle(request);
    }

private:
    std::unique_ptr<IHandler> m_handler;
};