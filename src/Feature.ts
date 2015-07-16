// This file is part of Charto, copyright (c) 2016 BusFaster Ltd.
// Released under the MIT license, see LICENSE.

import {Geometry} from './Geometry';

/** (Geo)graphical feature with attributes and geometries. */

export class Feature<Type> {

	fid: number;

	data: Type;

	geometryList: Geometry[];

}
