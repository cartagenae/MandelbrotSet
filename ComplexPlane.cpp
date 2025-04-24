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
    m_vArray.setPrimitiveType(Points);
    m_vArray.resize(pixelWidth * pixelHeight);
    m_state = State::CALCULATING;
    Vector2f m_mouseLocation = {0.f, 0.f};
    Vector2i m_pixel_size = {pixelWidth, pixelHeight};
    Vector2f m_plane_center = {0, 0};
    Vector2f m_plane_size = {BASE_WIDTH, BASE_HEIGHT * m_aspectRatio};
    m_zoom_count = 0;
    float m_aspectRatio = static_cast<float>(pixelHeight) / static_cast<float>(pixelWidth);
}

void ComplexPlane::draw(RenderTarget& target, RenderStates states) const
{
    target.draw(m_vArray);
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