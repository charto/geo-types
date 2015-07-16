// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

#pragma once

#include "geo/types/types.h"

namespace nbind {
	class cbOutput;
}

namespace geo {

/* Coordinate pair. */
class Coord {

public:

	Coord(u32 x = 0, u32 y = 0): x(x), y(y) {}

	bool operator==(const Coord &other) const {
		return(x == other.x && y == other.y);
	}

	void toJS(nbind::cbOutput output);

	union {
		u32 x;
		u32 lat;
	};

	union {
		u32 y;
		u32 lon;
	};
};

} // namespace
