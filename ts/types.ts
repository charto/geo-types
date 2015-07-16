// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

/// <reference path="../nbind.d.ts" />

import nbind = require('nbind');
import {default as _Coord} from './types/Coord';

nbind.bind('Coord', _Coord);

export var Coord = _Coord;
export {default as BBox} from './types/BBox';
