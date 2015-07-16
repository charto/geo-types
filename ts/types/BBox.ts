// This file is part of Charto, copyright (C) 2015 BusFaster Ltd.
// Released under the MIT license. There is NO WARRANTY OF ANY KIND.

export default class BBox {

	constructor(x1: number, y1: number, x2: number, y2: number) {
		this.x1 = x1;
		this.y1 = y1;
		this.x2 = x2;
		this.y2 = y2;
	}

	fromJS(output: (x1: number, y1: number, x2: number, y2: number) => void) {
                output(this.x1, this.y1, this.x2, this.y2);
        }

	x1: number;
	y1: number;
	x2: number;
	y2: number;

}
