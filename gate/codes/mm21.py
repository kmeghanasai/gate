import numpy as np
import matplotlib.pyplot as plt

# Read phase values from file
phase_X_k = np.loadtxt('mm21.dat')

# Plot the phase of X(k)
plt.stem(range(len(phase_X_k)), phase_X_k)
plt.xlabel('$k$')
plt.ylabel('$Phase$')
plt.grid(True)
plt.savefig('mm21.png')
plt.show()

