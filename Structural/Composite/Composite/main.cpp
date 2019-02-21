#include "Dot.h"
#include "Dot.h"
#include "Line.h"
#include "Polygon.h"
#include "CompoundGraphic.h"

int main()
{
    CompoundGraphic compound;
    compound.add("dot1", std::make_unique<Dot>());
    compound.add("line1", std::make_unique<Line>());
    compound.add("polygon1", std::make_unique<Polygon>());

    auto compound2 = std::make_unique<CompoundGraphic>();
    compound.add("dot2", std::make_unique<Dot>());
    compound.add("line2", std::make_unique<Line>());
    compound.add("polygon2", std::make_unique<Polygon>());

    compound.add("compound2", std::move(compound2));

    compound.draw();
}