// This file is part of Charto, copyright (c) 2016 BusFaster Ltd.
// Released under the MIT license, see LICENSE.

import {XY} from './XY';

/** Reference to a point along a path. */

export interface PathRef {

	path: Path;
	pos: number;

}

/** A sequence of points (nodes or coordinate pairs). */

export class Path {

	xyList: XY[];

}
