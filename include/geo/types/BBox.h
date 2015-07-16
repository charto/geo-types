// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

#pragma once

#include "geo/types/types.h"
#include "geo/types/Coord.h"

namespace geo {

class BBox {

public:

	BBox() {}
	explicit BBox(const Coord &xy): sw(xy), ne(xy) {}
	BBox(const Coord &sw, const Coord &ne): sw(sw), ne(ne) {}
	BBox(u32 x1, u32 y1, u32 x2, u32 y2): xy1(x1, y1), xy2(x2, y2) {}

	Coord getXY1() const {return(xy1);}
	Coord getXY2() const {return(xy2);}

	Coord getSW() const {return(xy1);}
	Coord getNE() const {return(xy2);}

	Coord getCenter() const {
		// (a+b)/2 might overflow when a+(b-a)/2 doesn't.
		u32 x = sw.x + ((ne.x - sw.x) >> 1);
		u32 y = sw.y + ((ne.y - sw.y) >> 1);

		return(Coord(x, y));
	}

	double distSquaredTo(Coord &xy) {
		double dx = 0, dy = 0;
		u32 x = xy.x, y = xy.y;

		if(x < sw.x) dx = x - sw.x;
		else if(x >= ne.x) dx = x - ne.x;

		if(y < sw.y) dy = y - sw.y;
		else if(y >= ne.y) dy = y - ne.y;

		return(dx * dx + dy * dy);
	}

	bool contains(Coord xy) const {
		return(getRegion(xy, xy) == 3);
	}

	bool contains(const BBox &other) const {
		return(getRegion(other.sw, other.ne) == 3);
	}

	// Bounding boxes touching each other are considered not to intersect.
	bool intersects(const BBox &other) const {
		return(getRegion(other.ne, other.sw) == 3);
	}

private:

	u32 getRegion(Coord a, Coord b) const {
		u32 bits =
			((static_cast<u32>(a.x - sw.x) >> 28) & 8) |
			((static_cast<u32>(a.y - sw.y) >> 29) & 4) |
			((static_cast<u32>(b.x - ne.x) >> 30) & 2) |
			 (static_cast<u32>(b.y - ne.y) >> 31);
		return(bits);
	}

	union {
		Coord sw;
		Coord xy1;
	};

	union {
		Coord ne;
		Coord xy2;
	};

};

} // namespace
