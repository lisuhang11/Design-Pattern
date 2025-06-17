#pragma once
#ifndef _HUMANBUILDER_H_
#define _HUMANBUILDER_H_

#include "../Human.h"
#include <memory>

namespace bp{
    class HumanBuilder{
    protected:
        Human human;

    public:
        virtual bp::HumanBuilder* buildType()=0 ;
        virtual bp::HumanBuilder* buildRegion()=0 ;
        bp::Human* build();
        
    };




}


#endif