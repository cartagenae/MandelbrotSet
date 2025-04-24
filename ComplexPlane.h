#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
#include <vector>
#include <cstdint>
#include <complex>

using namespace std;
using namespace sf;

const unsigned int MAX_ITER = 64;
const float BASE_WIDTH = 4.0;
const float BASE_HEIGHT = 4.0;
const float BASE_ZOOM = 0.5;

enum class State
{
    CALCULATING,
    DISPLAYING
};

class ComplexPlane : public sf::Drawable
{
private:
    VertexArray m_vArray;
    State m_state;
    Vector2f m_mouseLocation;
    Vector2i m_pixel_size;
    Vector2f m_plane_center;
    Vector2f m_plane_size;
    int m_zoom_count;
    float m_aspectRatio;

    ComplexPlane(int pixelWidth, int pixelHeight);

    void draw(RenderTarget& target, RenderStates states) const;

    void updateRender();

    void zoomIn();

    void zoomOut();

    void setCenter(Vector2i mousePixel);

    void setMouseLocation(Vector2i mousePixel);

    void loadText(Text& text);

    size_t countIterations(Vector2f coord);

    void iterationsToRGB(size_t count, uint8_t& r, uint8_t& g, uint8_t& b);

    Vector2f mapPixelToCoords(Vector2i mousePixel);
};