from django.contrib import admin

# Register your models here.
from .models import Director,Genero,Pelicula
admin.site.register(Genero)

admin.site.register(Pelicula)
admin.site.register(Director)

