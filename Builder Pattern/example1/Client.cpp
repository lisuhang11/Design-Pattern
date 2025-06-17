#include <iostream>
#include "Human.h"
#include "HumanDirector.h"
#include "builder/HumanBuilder.h"
#include "builder/YellowManBuilder.h"
#include "builder/WhiteManBuilder.h"
#include "builder/BlackManBuilder.h"

using namespace bp;

int main() {
    // Create director
    HumanDirector director;

    // Build and display Yellow human
    YellowManBuilder* buildery = new YellowManBuilder();
    director.setBuilder(buildery);
    auto human1 = director.build();
    human1->printInfo();
    delete human1;
    delete buildery;

    // Build and display White human
    WhiteManBuilder* builderw = new WhiteManBuilder();
    director.setBuilder(builderw);
    auto human2 = director.build();
    human2->printInfo();
    delete human2;
    delete builderw;

    // Build and display Black human
    BlackManBuilder* builderb = new BlackManBuilder();
    director.setBuilder(builderb);
    auto human3 = director.build();
    human3->printInfo();
    delete human3;
    delete builderb;

    return 0;
}