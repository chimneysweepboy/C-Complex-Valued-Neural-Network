# C-Complex-Valued-Neural-Network

Defined complex scalars, vectors, and matrices with Eigen cpp library.

Using ModReLU as the default activation function (subject to change later on).
ModReLU is defined as follows:

$$
\operatorname{ModReLU}(z, b) =
\begin{cases}
\left(|z| + b\right)\dfrac{z}{|z|}, & |z| > 0 \ \text{and}\ |z| + b > 0 \\[6pt]
0, & \text{otherwise}
\end{cases}
$$
