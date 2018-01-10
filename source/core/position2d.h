//
// Created by huihut on 2018/1/10.
//

#ifndef MINER_POSITION2D_H
#define MINER_POSITION2D_H

#include "../MTypes.h"

namespace miner
{
    namespace core
    {
        //! Simple class for holding 2d coordinates.
        /** Not supposed for doing geometric calculations.
        use vector2d instead for things like that.
        */
        template <class T>
        class position2d
        {
            position2d()
                    :X(0), Y(0) {};

            position2d(T x, T y)
                    : X(x), Y(y) {};

            position2d(const position2d<T>& other)
                    : X(other.X), Y(other.Y) {};

            bool operator == (const position2d<T>& other) const
            {
                return X == other.X && Y == other.Y;
            }

            bool operator != (const position2d<T>& other) const
            {
                return X != other.X || Y != other.Y;
            }

            const position2d<T>& operator += (const position2d<T>& other)
            {
                X += other.X;
                Y += other.Y;
                return *this;
            }

            const position2d<T>& operator -= (const position2d<T>& other)
            {
                X -= other.X;
                Y -= other.Y;
                return *this;
            }

            position2d<T> operator - (const position2d<T>& other) const
            {
                return position2d<T> (X - other.X, Y - other.Y);
            }

            position2d<T> operator + (const position2d<T>& other) const
            {
                return position2d<T> (X + other.X, Y + other.Y);
            }

            const position2d<T>& operator = (const position2d<T>& other)
            {
                X = other.X;
                Y = other.Y;
                return *this;
            }

            T X, Y;
        };
    } // end namespace core
} // end namespace miner

#endif //MINER_POSITION2D_H
