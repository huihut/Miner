//
// Created by huihut on 2018/1/9.
//

#ifndef MINER_DIMENSION2D_H
#define MINER_DIMENSION2D_H

#include "../MTypes.h"

namespace miner
{
    namespace core
    {

        //! Specifies a 2 dimensional size.
        template <class T>
        class dimension2d
        {
        public:
            dimension2d()
                    : Width(0), Height(0) {};

            dimension2d(T width, T height)
                    : Width(width), Height(height) {};

            dimension2d(const dimension2d<T>& other)
                    : Width(other.Width), Height(other.Height) {};

            bool operator == (const dimension2d<T>& other) const
            {
                return Width == other.Width && Height == other.Height;
            }

            bool operator != (const dimension2d<T>& other) const
            {
                return Width != other.Width || Height != other.Height;
            }

            const dimension2d<T>& operator = (const dimension2d<T>& other)
            {
                Width = other.Width;
                Height = other.Height;
                return *this;
            }

            T Width, Height;
        };

    } // end namespace core
} // end namespace irr

#endif //MINER_DIMENSION2D_H
