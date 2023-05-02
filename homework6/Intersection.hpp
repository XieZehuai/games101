//
// Created by LEI XU on 5/16/19.
//

#ifndef RAYTRACING_INTERSECTION_H
#define RAYTRACING_INTERSECTION_H
#include "Material.hpp"
#include "Vector.hpp"

class Object;
class Sphere;

struct Intersection
{
    Intersection()
    {
        happened = false;
        coords   = Vector3f();
        normal   = Vector3f();
        time     = std::numeric_limits<double>::max();
        obj      = nullptr;
        material = nullptr;
    }

    bool      happened;
    Vector3f  coords;
    Vector3f  normal;
    double    time;
    Object*   obj;
    Material* material;
};
#endif // RAYTRACING_INTERSECTION_H
