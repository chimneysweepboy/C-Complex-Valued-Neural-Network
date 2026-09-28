# C-Complex-Valued-Neural-Network

Defined complex scalars, vectors, and matrices with Eigen cpp library.

Using ModReLU as the default activation function (subject to change later on).
ModReLU is defined as follows:
$$
\operatorname{ModReLU}(z,\, b) =
\begin{cases}
0, & |z| = 0 \\[4pt]
\max\!\left(0,\; |z| + b\right)\dfrac{z}{|z|}, & |z| \neq 0
\end{cases}
$$
