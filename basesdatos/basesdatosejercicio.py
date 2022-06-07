import sqlite3
conn=sqlite3.connect("est.db")
cursor=conn.cursor()

row=cursor.execute('SELECT * FROM alumnos WHERE nombres="andres"')
for item in row:
    print(item)
cursor.close()
conn.close()