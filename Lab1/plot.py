import matplotlib.pyplot as plt

import pandas as pd

data = pd.read_csv('datos_plot.csv', sep=',')
x = data['n']
y_lineal = data['t(n)_lineal']

plt.figure()
plt.plot(x, y_lineal, 'r--', label='linear')
plt.plot(x, data['t(n)_binario_recursivo'], 'b--', label='binario recursivo')
plt.plot(x, data['t(n)_binario_iterativo'], 'k--', label='binario iterativo')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('n vs t(n)')
plt.legend()

plt.xlabel('n')
plt.ylabel('t(n)')

plt.figure()
plt.loglog(x, y_lineal, 'r--', label='linear')
plt.loglog(x, data['t(n)_binario_recursivo'], 'b--', label='binario recursivo')
plt.loglog(x, data['t(n)_binario_iterativo'], 'k--', label='binario iterativo')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('log(n) vs log(t(n))')
plt.legend()

plt.show()
