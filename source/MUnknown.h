//
// Created by huihut on 2018/1/9.
//

#ifndef MINER_MUNKNOWN_H
#define MINER_MUNKNOWN_H

#include "minerTypes.h"

namespace miner
{
    //! Base class of most objects of the Miner Engine.

    class MUnknow
    {
    public:
        //! Constructor.
        MUnknow() :ReferenceCounter(1), DebugName(0) {}

        //! Destructor
        virtual ~MUnknow() {}

        //! Grabs the object. Increments the reference counter by one.
        void grab()
        {
            ++ReferenceCounter;
        }

        //! Drops the object. Decrements the reference counter by one.
        bool drop()
        {
            --ReferenceCounter;
            if(!ReferenceCounter)
            {
                delete this;
                return true;
            }
            return false;
        }

        //! Returns the debug name of the object. The Debugname may only be set and
        //! changed by the object itself. This method should only be used in Debug mode.
        //! \return Returns a string, previously set by setDebugName();
        const c8* getDebugName() const
        {
            return DebugName;
        }

    protected:

        //! Sets the debug name of the object. The Debugname may only be set and
        //! changed by the object itself. This method should only be used in Debug mode.
        //! \param newName: New debug name to set.
        void setDebugName(const c8* newName)
        {
            DebugName = newName;
        }

    private:
        s32 ReferenceCounter;
        const c8* DebugName;
    };
}

#endif //MINER_MUNKNOWN_H
