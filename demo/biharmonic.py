from lfa_lab import *
import matplotlib.pyplot as mpp

grid = Grid(2)
Laplace = gallery.poisson_2d(grid)
I = operator.identity(grid)
Z = operator.zero(grid)

A = SystemNode([[Laplace, I],
                [Z      , Laplace]])

II = SystemNode([[I, Z], [Z, I]])

D = A.diag()

E = II - D.inverse() * A

E00 = E[0,0]

symbol = E.symbol()

print("Spectral radius: {}".format(symbol.spectral_radius()))
print("Spectral norm: {}".format(symbol.spectral_norm()))

plot.plot_2d(symbol[0,0])
plot.plot_2d(symbol[0,1])
plot.plot_2d(symbol[1,0])
plot.plot_2d(symbol[1,1])

plot.plot_2d(E00.symbol())

mpp.show()

