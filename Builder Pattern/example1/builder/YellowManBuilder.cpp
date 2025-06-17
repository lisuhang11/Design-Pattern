#include "YellowManBuilder.h"

bp::HumanBuilder* bp::YellowManBuilder::buildType(){

    human.setType("黄种人");
    return this;

}


bp::HumanBuilder* bp::YellowManBuilder::buildRegion(){

    human.setRegion("亚洲");
    return this;

}
