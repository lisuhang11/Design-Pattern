#pragma once

#ifndef _BLACKMANBUILDER_H_
#define _BLACKMANBUILDER_H_
#include "HumanBuilder.h"
#include "../Human.h"

namespace bp{
    class BlackManBuilder : public HumanBuilder{
    public:
        bp::HumanBuilder* buildType() override ;
        bp::HumanBuilder* buildRegion() override;


    };




}


#endif