// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

#include "geo/types/Coord.h"

#include "nbind/Binding.h"

using namespace geo;

void Coord::toJS(nbind::cbOutput output) {
	output(x, y);
}

#include "nbind/BindingShort.h"

#ifdef NBIND_CLASS

NBIND_CLASS(Coord) {
        construct<>();
        construct<u32, u32>();
}

#endif
