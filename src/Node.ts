// This file is part of Charto, copyright (c) 2016 BusFaster Ltd.
// Released under the MIT license, see LICENSE.

import {Geometry} from './Geometry';
import {PathRef} from './Path';
import {XY} from './XY';

/** Point geometry, possibly belonging to one or more paths. */

export class Node extends Geometry implements XY {

	x: number;
	y: number;

	/** List of paths this node belongs to. */
	pathList: PathRef[];

}
