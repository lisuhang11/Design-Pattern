#include "WhiteManBuilder.h"

bp::HumanBuilder* bp::WhiteManBuilder::buildType(){

    human.setType("白人");
    return this;

}


bp::HumanBuilder* bp::WhiteManBuilder::buildRegion(){

    human.setRegion("美洲");
    return this;

}
