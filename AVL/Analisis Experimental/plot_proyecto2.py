import matplotlib.pyplot as plt

import pandas as pd

data = pd.read_csv('plot_erase.csv',sep=',')
x = data['n']

plt.figure()
plt.plot(x, data['mapsv_erase'], 'bo-', label='erase MapSV')
plt.plot(x, data['maph_erase'], 'ko-', label='erase MapH')
plt.plot(x, data['mapavl_erase'], 'ro-', label='erase MapAVL')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('Método erase')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.legend()


#
# plt.figure()
# plt.plot(x, data['HeapSort'], 'ro-', label='HeapSort')
# plt.xlabel('n')
# plt.ylabel('t(n)')
# plt.title('Analisis experimental algoritmos ordenamiento')
# plt.xlabel('n')
# plt.ylabel('t(n)')
# plt.legend()

plt.show()
