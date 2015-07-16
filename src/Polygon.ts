// This file is part of Charto, copyright (c) 2016 BusFaster Ltd.
// Released under the MIT license, see LICENSE.

import {Geometry} from './Geometry';
import {Ring} from './Ring';

export class Polygon extends Geometry {

	/** Outer edges, containing holes and islands as nested children. */
	outerList: Ring[];

}
