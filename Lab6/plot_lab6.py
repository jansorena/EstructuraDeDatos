import matplotlib.pyplot as plt

import pandas as pd

data = pd.read_csv('plot.csv',sep=',')
x = data['n']

plt.figure()
plt.plot(x, data['SelectionSort'], 'bo-', label='SelectionSort')
plt.plot(x, data['HeapSort'], 'ro-', label='HeapSort')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('Analisis experimental algoritmos ordenamiento')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.legend()

plt.figure()
plt.loglog(x, data['SelectionSort'], 'bo-', label='SelectionSort')
plt.loglog(x, data['HeapSort'], 'ro-', label='HeapSort')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('Analisis experimental algoritmos ordenamiento (log)')
plt.legend()


# plt.figure()
# plt.plot(x, data['SelectionSort'], 'bo-', label='SelectionSort')
# plt.xlabel('n')
# plt.ylabel('t(n)')
# plt.title('Analisis experimental algoritmos ordenamiento')
# plt.xlabel('n')
# plt.ylabel('t(n)')
# plt.legend()
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
