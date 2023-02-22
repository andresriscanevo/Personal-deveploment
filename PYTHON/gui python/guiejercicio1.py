
import tkinter
from tkinter import ttk



window = tkinter.Tk()
monitor = ttk.Label(window)
opcion =tkinter.IntVar()
frm = ttk.Frame(window, padding=10)
frm.grid()
def seleccionar():
    monitor.config(text="{}".format(opcion.get()))

def reset():
    opcion.set(None)
    monitor.config(text="")
ttk.Label(frm, text="Estas son las opciones!").grid(column=0, row=0)
ttk.Radiobutton(window, text="Opción 1", variable=opcion,
                value=1, command=seleccionar).grid(column=3,row=1)
ttk.Radiobutton(window, text="Opción 2", variable=opcion,
                value=2, command=seleccionar).grid(column=4,row=1)
ttk.Radiobutton(window, text="Opción 3", variable=opcion,
                value=3, command=seleccionar).grid(column=5,row=1)
ttk.Button(frm, text="Reinicio", command=reset).grid(column=2, row=1)
ttk.Button(frm, text="Quit", command=window.destroy).grid(column=1, row=0)
ttk.Label(frm, text="Hola mi nombre es Andres!").grid(column=5, row=0)
window.mainloop()
