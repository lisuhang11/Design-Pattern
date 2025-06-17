#pragma once
#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

namespace proto{


    class Prototype{
    public:
        virtual Prototype* clone()=0;
        virtual ~Prototype()=default;
        

    };


}


#endif