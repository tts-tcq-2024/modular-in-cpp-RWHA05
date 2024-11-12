#ifndef _GET_COLORPAIR_FUNC_H_
#define _GET_COLORPAIR_FUNC_H_

#include "ColorPair_Class.h"

namespace TelCoColorCoder 
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}

#endif //_GET_COLORPAIR_FUNC_H_