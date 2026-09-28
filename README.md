# C-Complex-Valued-Neural-Network

Defined complex scalars, vectors, and matrices with Eigen cpp library.

Using ModReLU as the default activation function (subject to change later on).
ModReLU is defined as follows:

$$
\mathrm{ModReLU}(z, b) =
\begin{cases}
\left(|z| + b\right)\frac{z}{|z|}, & |z| > 0 \ \mathrm{and}\ |z| + b > 0 \\
0, & \mathrm{otherwise}
\end{cases}
$$
