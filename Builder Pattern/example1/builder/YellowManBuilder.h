#pragma once

#ifndef _WHILEMANBUILDER_H_
#define _WHILEMANBUILDER_H_
#include "HumanBuilder.h"
#include "../Human.h"

namespace bp{
    class YellowManBuilder : public HumanBuilder{
    public:
        bp::HumanBuilder* buildType() override ;
        bp::HumanBuilder* buildRegion() override;


    };




}


#endif