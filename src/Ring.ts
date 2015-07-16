// This file is part of Charto, copyright (c) 2016 BusFaster Ltd.
// Released under the MIT license, see LICENSE.

import {Path} from './Path';

/** Edge of a polygon or hole, with nested holes or islands as children. */

export class Ring {

	path: Path;
	holeList: Ring[];

}
