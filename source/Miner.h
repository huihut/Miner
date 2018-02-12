//
// Created by huihut on 2018/1/8.
//

#pragma once

#if defined(WIN32) || defined(_WIN32) || defined(_WIN64)
#  ifdef MINER_API_EXPORTS
#    define MINER_API __declspec(dllexport)
#  else
#    define MINER_API __declspec(dllimport)
#  endif
#else
#  define MINER_API
#endif

//! Everything in the Miner Engine can be found in this namespace.
namespace miner
{
    MINER_API void hello();

    template <typename T>
    T add(T x1, T x2)
    {
        return x1 + x2;
    }

    //! In this namespace can be found basic classes like vectors, planes, arrays, lists and so on.
    namespace core
    {
    }

    //! The gui namespace contains useful classes for easy creation of a graphical user interface.
    namespace gui
    {
    }

    //! This namespace provides interfaces for input/output: Reading and writing files, accessing zip archives, and so on.
    namespace io
    {
    }

    //! All scene management can be found in this namespace: Mesh loading, special scene nodes like octrees and billboards, and so on.
    namespace scene
    {
    }

    //! The video namespace contains classes for accessing the video driver. All 2d and 3d rendering is done here.
    namespace video
    {
    }
}