from lfa_lab import *
import matplotlib.pyplot as mpp

grid = Grid(2)
Laplace = gallery.poisson_2d(grid)
I = operator.identity(grid)
Z = operator.zero(grid)

A = SystemNode([[Laplace, I],
                [Z      , Laplace]])
print(A)

II = SystemNode([[I, Z], [Z, I]])
print(II)

D = A.diag()

E = II - D.inverse() * A

