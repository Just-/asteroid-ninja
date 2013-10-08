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




#ifndef __Collider_H_
#define __Collider_H_

#include "Math2D.h"

using namespace math2d;

class Collider {
public:
  // Ray-casting
  // Return 2 if ray intersects a vertex of the edge
  // Return 1 if ray from point to positive X intersects the edge B-E
  // 0 if point belong the edge
  // -1 if point is on the right of the edge
  
  static bool isPointAtLeftOfEdge(Vector point, Vector begin, Vector end);
  
  static int isIntersectionRayCastingWithEdge(const Vector point, Vector begin, Vector end);

  template<int Size>
  static bool isCollision(const Vector point, const Geometry<float, Size> &with);

  template<int SizeFirst, int SizeSecond>
  static bool isCollision(const Geometry<float, SizeFirst> &what, const Geometry<float, SizeSecond> &with);
};


#endif //__Collider_H_