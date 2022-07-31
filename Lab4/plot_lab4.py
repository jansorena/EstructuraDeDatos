import matplotlib.pyplot as plt

import pandas as pd

data = pd.read_csv(r'C:\Users\Jaime\Documents\GitHub\CS\EstructuraDeDatos\Lab4\plot.csv',sep=',')
x = data['n']

plt.figure()
plt.plot(x, data['al.insert'], 'r--', label='ArrayList insert')
plt.plot(x, data['ll.insert'], 'k--', label='LinkedList insert')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('insert')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.legend()

plt.figure()
plt.plot(x, data['al.at'], 'r--', label='ArrayList at')
plt.plot(x, data['ll.at'], 'k--', label='LinkedList at')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('at')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.legend()

plt.figure()
plt.plot(x, data['al.pop'], 'r--', label='ArrayList pop')
plt.plot(x, data['ll.pop'], 'k--', label='LinkedList pop')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.title('pop')
plt.xlabel('n')
plt.ylabel('t(n)')
plt.legend()

plt.show()