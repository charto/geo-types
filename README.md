geo-types
=========

[![build status](https://travis-ci.org/charto/geo-types.svg?branch=master)](http://travis-ci.org/charto/geo-types)
[![npm version](https://img.shields.io/npm/v/geo-types.svg)](https://www.npmjs.com/package/geo-types)

`geo-types` is a collection of data types for storing geographical or other vector data.
It allows other libraries to interchange vector data as JavaScript objects with consistent semantics,
both server-side and client-side. Only the basic classes needed to represent data are included.

`geo-types` has several benefits compared to using GeoJSON internally in an application:

- Polygons and polylines may share points to preserve topology like in OpenStreetMap.
- Complex WFS features are supported: attributes can be nested and contain geometries.

Other libraries can be used to operate on the data:

- Converting from / to other formats.
- Rendering.
- Efficient storage and querying.
- Boolean operations.

License
=======

[The MIT License](https://raw.githubusercontent.com/charto/geo-types/master/LICENSE)

Copyright (c) 2016 BusFaster Ltd
