#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdint>
#include "ComplexPlane.h"
#include <complex>

using namespace std;
using namespace sf;

ComplexPlane::ComplexPlane(int pixelWidth, int pixelHeight)
{
    
}

void ComplexPlane::draw(RenderTarget& target, RenderStates states)
{

}

void ComplexPlane::updateRender()
{
    
}

void ComplexPlane::zoomIn()
{

}

void ComplexPlane::zoomOut()
{

}

void ComplexPlane::setCenter(Vector2i mousePixel)
{

}

void ComplexPlane::setMouseLocation(Vector2i mousePixel)
{

}

void ComplexPlane::loadText(Text& text)
{

}

size_t ComplexPlane::countIterations(Vector2f coord)
{
    return 0;
}

void ComplexPlane::iterationsToRGB(size_t count, uint8_t& r, uint8_t& g, uint8_t& b)
{

}

Vector2f ComplexPlane::mapPixelToCoords(Vector2i mousePixel)
{
    Vector2f mouseVector;
    
    mouseVector.x = 0;
    mouseVector.y = 0;

    return mouseVector;
}