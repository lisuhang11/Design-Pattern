#include "BlackManBuilder.h"

bp::HumanBuilder* bp::BlackManBuilder::buildType(){

    human.setType("黑人");
    return this;

}


bp::HumanBuilder* bp::BlackManBuilder::buildRegion(){

    human.setRegion("非洲");
    return this;

}
