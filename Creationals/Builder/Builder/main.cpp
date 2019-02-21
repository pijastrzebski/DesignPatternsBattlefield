#include "Director.h"
#include "SfmlRenderingEngineBuilder.h"
#include "SdlRenderingEngineBuilder.h"

int main()
{
    Director director;
    director.makeRenderingEngine(new SfmlRenderingEngineBuilder);
    director.makeRenderingEngine(new SdlRenderingEngineBuilder);

    return 0;
}