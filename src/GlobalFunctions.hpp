#pragma once

#include <vector>
#include <cmath>

#include "glfw/glfw3.h"

#include "Camera.hpp"

class Points;
class Hopf;

#define PI 3.14159265358979323846

void ChangeStates(bool &s1, bool&s2);
void Initialize(std::vector<std::vector<std::vector<double>>>& points,
                const int mode,
                const int numPoints);
std::vector<std::vector<double>> GenerateGreatCircle(float rotationX, float rotationY, float rotationZ, int n);
std::vector<std::vector<double>> GenerateUniform(int n);
std::vector<std::vector<double>> GenerateRandom(int n);
std::vector<std::vector<double>> GenerateElevation(int n, double elevation);
std::vector<double> GetColor(std::vector<double> point);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void SetVsync(bool &vsync);