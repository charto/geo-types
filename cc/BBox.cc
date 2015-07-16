// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

#include "geo/types/BBox.h"

using namespace geo;

#include "nbind/BindingShort.h"

#ifdef NBIND_CLASS

NBIND_CLASS(BBox) {
        construct<>();
        construct<u32, u32, u32, u32>();
}

#endif
