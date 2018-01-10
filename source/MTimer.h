//
// Created by huihut on 2018/1/10.
//

#ifndef MINER_MTIMER_H
#define MINER_MTIMER_H

#include "MUnknown.h"

namespace miner
{
    //! Interface for getting the current time
    class MTimer : public MUnknow
    {
    public:
        //! destructor
        virtual ~MTimer() {}

        //! returns current time in milliseconds. This value does not start
        //! with 0 when the application starts. For example in one implementation
        //! the value returne could be the amount of milliseconds which
        //! have elapsed since the system was started.
        virtual u32 getTime() = 0;

    };
} // end namespace

#endif //MINER_MTIMER_H
