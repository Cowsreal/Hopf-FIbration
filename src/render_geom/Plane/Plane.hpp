#pragma once

#include "../../VertexArray.hpp"
#include "../../VertexBuffer.hpp"
#include "../../IndexBuffer.hpp"
#include "../../VertexBufferLayout.hpp"

class Plane {
public:

    Plane(float width, float height);

    void Draw() const;

private:

    VertexArray m_VAO;
    VertexBuffer m_VBO;
    IndexBuffer m_IBO;
    VertexBufferLayout m_VBL;

    std::vector<float> m_Vertices;
    std::vector<unsigned int> m_Indices;
    float m_width;
    float m_height;
};