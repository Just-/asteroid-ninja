/*
 Copyright (C) 2013 by Anton Gaenko 
 Mail anton.gaenko@yahoo.com
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#ifndef LASER_H
#define LASER_H

#include "SpaceObject.h"

class Plasmoid : public SpaceObject<1> {
public:
  Plasmoid(const Geometry<float, 1> &geometry, const ColorRGB &color, const Vector &initPos);
  /*Plasmoid operator=(const Plasmoid a) {
    _initialGeometry = a._initialGeometry;
    _transformedGeometry = a._transformedGeometry;
    _color = a._color;
    _position = a._position;
    _angle = a._angle;
    _geomVboID = a._geomVboID;
    _colorVboID = a._colorVboID;
    _velocity = a._velocity;
    return *this;

  } */
  ~Plasmoid();
};


#endif /* LASER_H */

