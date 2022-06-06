
import tkinter
from tkinter import ttk
window = tkinter.Tk()
monitor = ttk.Label(window)
opciondance =tkinter.BooleanVar()
opcionsing =tkinter.BooleanVar()
opcionplay =tkinter.BooleanVar()
frm = ttk.Frame(window, padding=10)
frm.grid()
def seleccionar():
    monitor.config(text="{}".format(opciondance.get()))

def reset():
    opciondance.set(False)
    opcionsing.set(False)
    opcionplay.set(False)
    monitor.config(text="")
ttk.Label(frm, text="Selecciona los elementos que mas te gusten!").grid(column=0, row=0)
ttk.Checkbutton(window, text="Bailar", variable=opciondance,
                command=seleccionar).grid(column=0,row=1)
ttk.Checkbutton(window, text="Cantar ", variable=opcionsing,
                command=seleccionar).grid(column=0,row=2)
ttk.Checkbutton(window, text="Jugar Play", variable=opcionplay,
                command=seleccionar).grid(column=0,row=3)
ttk.Button(frm, text="Reinicio", command=reset).grid(column=1, row=1)
ttk.Button(frm, text="Quit", command=window.destroy).grid(column=1, row=2)
ttk.Label(frm, text="Hola mi nombre es Andres!").grid(column=5, row=5)

window.mainloop()
