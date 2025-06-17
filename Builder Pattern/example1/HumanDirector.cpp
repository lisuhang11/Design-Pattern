#include "HumanDirector.h"


bp::Human* bp::HumanDirector::build(){
    return m_Builder->buildType()->buildRegion()->build();


}