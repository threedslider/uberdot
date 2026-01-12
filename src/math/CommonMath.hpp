/* 
This file is part of Uberdot
Copyright (C) 2026 Laurent Le Flem


This program is free software: you can redistribute it and/or modify it under 
the terms of the GNU General Public License as published by the Free Software Foundation, 
either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. 
If not, see <https://www.gnu.org/licenses/>.
*/


/*
  CommonMath.hpp

  General C++ Definitions

  January 12 2026
*/

#ifndef __CommonMath_hpp
#define __CommonMath_hpp

#include <cmath>

namespace Uberdot

{

    #ifndef M_2PI
    #define M_2PI (2.*M_PI)
    #endif

    //extern double doubleTolerance;
    //extern double distanceTolerance;
    //extern double angleTolerance;

    template<class T>
    inline T DEGtoRAD(T d) {d  * (M_PI/180.);}

    template<class T>
    inline T RADtoDEG(T d) {d * (180./M_PI);}

    template<class T>
    inline T sqr( T k ) { return k * k; }

    inline float cube( float k ) { return k * k * k; }
    inline double cube( double k ) { return k * k * k; }

    template<class T>
    inline bool sameSign(T d1, T d2) { return (d1>=(T)(0)) ? (d2>=(T)(0)) : (d2<=(T)(0));}


}
