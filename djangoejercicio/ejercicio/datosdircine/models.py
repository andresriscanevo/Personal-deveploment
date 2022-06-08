import re
from django.db import models
from django.urls import reverse

# Create your models here.
class Genero(models.Model):
    name=models.CharField(max_length=24,help_text="pon el nombre del genero")
    def __str__(self):
        return self.name
class Director(models.Model):
    named=models.CharField(max_length=24,help_text="pon el nombre del director")
    nacionalidad=models.CharField(max_length=40,help_text="Pais de origen")
    # peli=models.ManyToManyField(Pelicula)
    def __str__(self):
        return self.named
class Pelicula(models.Model):
    titulo=models.CharField(max_length=40)
    direct=models.ManyToManyField(Director)
    descripcion= models.TextField(max_length=500,help_text="Escribe la descripcion")
    año=models.CharField(max_length=5,help_text="digita el año")
    genero=models.ManyToManyField(Genero)
    def __str__(self):
        return self.titulo

