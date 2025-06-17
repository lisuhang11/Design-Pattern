#pragma once


#ifndef _HUMANDIRECTOR_H_
#define _HUMANDIRECTOR_H_
#include "builder/HumanBuilder.h"
namespace bp{
    class HumanDirector{
    protected:
        HumanBuilder* m_Builder;

    public:
        HumanBuilder* getBuilder(){
            return m_Builder;
        }
        void setBuilder(HumanBuilder* var){
            m_Builder = var;
        }

        Human* build();

    };




}




#endif