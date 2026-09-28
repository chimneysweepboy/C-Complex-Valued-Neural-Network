# C-Complex-Valued-Neural-Network

Defined complex scalars, vectors, and matrices with Eigen cpp library.

Using ModReLU as the default activation function (subject to change later on).
ModReLU is defined as follows:

$$
\mathrm{ModReLU}(z, b) = \max\left(0, |z| + b\right) \frac{z}{|z|}, \qquad z \neq 0
$$
