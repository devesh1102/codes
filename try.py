x =[]
y = []
z = []
with open("HoleDetectionTestData.txt") as f:
    for line in f:
        # print(map(int,line.split()))
        dum = line.split()
        if dum!= []:
            x.append( float(dum[0]))
            y.append(float (dum[1]))
            z.append(fnloat( dum[2]))
    print(x,y,z)
import plotly.graph_objects as go 
import numpy as np 
  
# x = np.outer(np.linspace(-2, 2, 30), np.ones(30)) 
# y = x.copy().T 
# z = np.cos(x ** 2 + y ** 2) 
  
# fig = go.Figure(data=[go.Surface(x=x, y=y, z=z)]) 
  
# fig.show() 
  
# x = np.array(x)
# y = np.array(y)
# z = np.array(z)
# np.ones(30)
# x = np.outer(np.array(x), np.ones(len(x))) 
x = np.array(x)
y = np.array(y)
z = np.array(z)
fig = go.Figure(data=[go.Scatter3d(x=x, y=y, z=z,
                                   mode='markers')])
fig.show()
# fig = go.Figure(data=(x,y,z)) 
  
# fig.show() 
  
# fig = go.Figure(data=[go.Surface(x=x, y=y, z=z)]) 
  
# fig.show() 