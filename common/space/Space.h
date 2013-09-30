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

#ifndef SPACE_H
#define SPACE_H

// TODO Try without SpaceObject
#include "SpaceObject.h"
#include "Math2D.h"
#include "Drawable.h"
#include <vector>
#include <memory>
#include <iostream>

// Forward declarations

class Shader;

class Ship;

class Plasmoid;


/**
 * Main container and printer for all game objects.
 * It rules who, when and how.
 */
class Space : public Drawable {

public:
  void moveShip(float dx, float dy, float curAngle);
  void shipAttack();
  Space();
  ~Space();

  virtual void draw(float msSinceLastUpdate) override;
  virtual void setSize(int width, int height) override;

protected:
  Matrix prepareViewMatrix(const int resolutionWidth, const int resolutionHeight);
  SpaceObjectShaderConf prepareShader();
  void compileShader();
  SpaceObjectShaderConf useShader();

private:
  std::unique_ptr<Ship> _ship;
  std::vector<std::unique_ptr<Plasmoid>> _plasmoids;
  std::unique_ptr<Shader> _shader;
  SpaceObjectShaderConf _shaderConf;
  unsigned int _viewMatrixLocation;
  Rectangle _bounds;
  // model view transformation ()
  Matrix _viewMatrix;
};

#endif /* SPACE_H */

