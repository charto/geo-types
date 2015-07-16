geo-types
=========

[![build status](https://travis-ci.org/charto/types.svg?branch=master)](http://travis-ci.org/charto/types)
[![npm version](https://img.shields.io/npm/v/geo-types.svg)](https://www.npmjs.com/package/geo-types)

`geo-types` is a collection of data types for storing geographical or other vector data.

It allows other libraries to interchange JavaScript objects with consistent semantics.
It has several benefits compared to using GeoJSON internally in an application:

- Polygons and polylines may share points to preserve topology like in OpenStreetMap.
- Complex WFS features are supported: attributes can be nested and contain geometries.

License
=======

[The MIT License](https://raw.githubusercontent.com/charto/types/master/LICENSE)

Copyright (c) 2016 BusFaster Ltd
