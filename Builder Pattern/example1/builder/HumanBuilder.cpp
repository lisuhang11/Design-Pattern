#include "HumanBuilder.h"

bp::Human* bp::HumanBuilder::build(){

    return new bp::Human(human);


}