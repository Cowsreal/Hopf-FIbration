# Hopf Fibration

## About this Program

This is a 3D visualization of the Hopf Fibration, a mapping of points on $S^3 \to S^2$ visualized with "fibers". This program is written in C++ and is rendered in OpenGL.

## Theory

 The usual three dimensional sphere, $S^2$, is an object said to live in $\mathbb{R}^3$ described by 

 $$S^2 = \{(x, y, z) \in \mathbb{R}^3 \vert x^2 + y^2 + z^2 = r^2\}$$

 For some $r\in \mathbb{R}$. Similarly, the four dimensional sphere, $S^3$, is defined as

$$S^3 = \{(x, y, z, w) \in \mathbb{R}^4 \vert x^2 + y^2 + z^2 + w^2 = r^2\}$$

Notice that coordinates in $\mathbb{R}^4$ may be written as coordinates in $\mathbb{C}^2$ and coordinates in $\mathbb{R}^3$ may be written as coordinates in $\mathbb{C}\times \mathbb{R}$.

$$(x_1, x_2, x_3, x_4) = (z_0, z_1)$$

Similarly,

$$(x_1, x_2, x_3) = (z, x)$$

Then, the Hopf Map satisfies

$$p(z_0, z_1) = (2z_0z_1^*, |z_0|^2 - |z_1|^2)$$

It can be verified that $p(z_0, z_1) \in S^2$ for all $(z_0, z_1)\in \mathbb{C}^2$.

A possible inverse Hopf Map is then given by the following. Let $(a, b, c) \in \mathbb{R}^3 \backslash {(0, 0, -1)}$. Then, the inverse Hopf Map $f$ of $(a, b, c)$ is given by

$$f(a, b, c) = \frac{1}{\sqrt{2(1 + c)}}((1 + c)\cos(\theta), a \sin(\theta)\cdots$$

$$\cdots- b \cos(\theta), a\cos(\theta) + b\sin(\theta), (1 + c)\sin(\theta))$$

As $\theta$ changes, we sweep out a great circle of $S^3$. However, we cannot visualize this and thus we must stereographically project the set of points from $\mathbb{R}^4 \to \mathbb{R}^3$.

In summary, this project samples various points in $S^2$ and via the inverse Hopf Map and stereographic projection, returns fibers which we can render in 3D space.

## To Do

* Clean up code
* Figure out optimizations for calculating new points
* Create more initial point distributions on $S^2$

## Acknowledgements

This project uses OpenGL abstraction classes from "The Cherno"'s [tutorial series](https://www.youtube.com/playlist?list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2). Also, the [Wikipedia Article](https://en.wikipedia.org/wiki/Hopf_fibration) on the subject was a very helpful resource.
