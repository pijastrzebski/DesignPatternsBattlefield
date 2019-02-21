#include "TeaFactory.h"
#include "CoffeeFactory.h"
#include <unordered_map>
#include <string>

auto initAllFactories()
{
    std::unordered_map<std::string, std::unique_ptr<IDrinkFactory>> factoryMap; // RVO

    factoryMap["Tea"]    = std::make_unique<TeaFactory>();
    factoryMap["Coffee"] = std::make_unique<CoffeeFactory>();

    return factoryMap;
}

int main()
{
    auto factories = initAllFactories();

    auto tea = factories["Tea"]->make();    
    auto coffee = factories["Coffee"]->make();
}