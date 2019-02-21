#pragma once

#include "IHandler.h"

class AuthorizationHandler : public IHandler
{
public:

    virtual void setNext() override
    {
        // empty next
    }


    virtual void handle(const IRequest& request) override
    {
        // if authorization is successful
        std::cout << "Authorization passed\n";
        std::cout << "Your secret resource:\n";
        std::cout << m_secretResource << std::endl;

        // else
        // return;
    }

private:
    std::unique_ptr<IHandler> m_handler;

    std::string m_secretResource{R"(
        "Try and be nice to people, avoid eating fat,
        read a good book every now and then,
        get some walking in, and try and live together
        in peace and harmony with people of all creeds and nations"

                Monty Python's The Meaning of Life)"};
};
