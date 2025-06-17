#pragma once

#ifndef _WHITEMANBUILDER_H_
#define _WHITEMANBUILDER_H_
#include "HumanBuilder.h"
#include "../Human.h"

namespace bp{
    class WhiteManBuilder : public HumanBuilder{
    public:
        bp::HumanBuilder* buildType() override ;
        bp::HumanBuilder* buildRegion() override;


    };




}


#endif