#include "UndeadAI.h"
#include "HumanAI.h"

#include <forward_list>

int main()
{
    HumanAI humanAI;
    UndeadAI undeadAI;

    std::forward_list<RTSGameAI*> aiList;
    aiList.push_front(&humanAI);
    aiList.push_front(&undeadAI);

    [&aiList]() {
        for (auto ai : aiList)
        {
            ai->start();
            std::cout << "-----\n";
        }
    }();
}