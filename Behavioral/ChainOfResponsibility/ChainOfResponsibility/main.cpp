#include "BaseHandler.h"
#include "GiveMeAccessToYourSecretResourcesRequest.h"

int main()
{
    GiveMeAccessToYourSecretResourcesRequest giveMeAccess;
    BaseHandler baseHandler;

    baseHandler.handle(giveMeAccess);
}