#include "Plane.hpp"

Plane::Plane(float width, float height)
    : m_width(width), m_height(height), m_VAO(), m_VBO(), m_IBO(), m_VBL()
{
    m_Vertices = {
        -m_width / 2.0f, 0.0f, -m_height / 2.0f,
         m_width / 2.0f, 0.0f, -m_height / 2.0f,
         m_width / 2.0f, 0.0f,  m_height / 2.0f,
        -m_width / 2.0f, 0.0f,  m_height / 2.0f,
    };

    m_Indices = {
        0, 1, 2,
        2, 3, 0
    };

    m_VBO = VertexBuffer(&m_Vertices[0], m_Vertices.size() * sizeof(float));
    m_IBO = IndexBuffer(&m_Indices[0], m_Indices.size());
    m_VBL.Push<float>(3);
    m_VAO.AddBuffer(m_VBO, m_VBL, false);
}

void Plane::Draw() const
{
    m_VAO.Bind();
    m_IBO.Bind();
    glDrawElements(GL_TRIANGLES, m_IBO.GetCount(), GL_UNSIGNED_INT, nullptr);
}