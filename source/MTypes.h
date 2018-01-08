//
// Created by huihut on 2018/1/9.
//

#ifndef MINER_MINERTYPES_H
#define MINER_MINERTYPES_H

/** minerType ensures portability of the engine. */

namespace miner
{
    //! 8 bit unsigned variable, a typedef for unsigned char.
    typedef unsigned char u8;

    //! 8 bit signed variable, a typedef for signed char.
    typedef signed char s8;

    //! 8 bit character variable, a typedef for char.
    typedef char c8;

    //! 16 bit unsigned variable, a typedef for unsigned short.
    typedef unsigned short u16;

    //! 16 bit signed variable, a typedef for signed short.
    typedef signed short s16;

    //! 32 bit unsigned variable, a typedef for unsigned int
    typedef unsigned int u32;

    //! 32 bit signed variable, a typedef for signed int.
    typedef signed int s32;

    // 64 bit signed variable, a typedef for __int64.
    // This type is currently not used by the engine and not supported by
    // compilers other than Microsoft Compilers, so it is outcommented.
    //typedef __int64 s64;

    //! 32 bit floating point variable, a typedef for float.
    typedef float f32;

    //! 64 bit floating point variable, a typedef for double.
    typedef double	 f64;
} // end namespace

// define the wchar_t type if not already built in.
#ifdef _MSC_VER
#ifndef _WCHAR_T_DEFINED
//! A 16 bit wide character type.
/**
	Defines the wchar_t-type.
	In VS6, its not possible to tell
	the standard compiler to treat wchar_t as a built-in type, and
	sometimes we just don't want to include the huge stdlib.h or wchar.h,
	so we'll use this.
*/
typedef unsigned short wchar_t;
#define _WCHAR_T_DEFINED
#endif
#endif

#endif //MINER_MINERTYPES_H
