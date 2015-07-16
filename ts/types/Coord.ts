// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

export default class Coord {

	constructor(x: number, y: number) {
		this.x = x;
		this.y = y;
	}

	fromJS(output: (x: number, y: number) => void) {
                output(this.x, this.y);
        }

	x: number;
	y: number;

};
