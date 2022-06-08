# Generated by Django 4.0.5 on 2022-06-08 22:02

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('datosdircine', '0004_rename_director_pelicula_direct'),
    ]

    operations = [
        migrations.AddField(
            model_name='director',
            name='named',
            field=models.CharField(default='', help_text='pon el nombre del director', max_length=24),
            preserve_default=False,
        ),
        migrations.AlterField(
            model_name='genero',
            name='name',
            field=models.CharField(help_text='pon el nombre del genero', max_length=24),
        ),
        migrations.RemoveField(
            model_name='pelicula',
            name='direct',
        ),
        migrations.AddField(
            model_name='pelicula',
            name='direct',
            field=models.ManyToManyField(to='datosdircine.director'),
        ),
    ]
