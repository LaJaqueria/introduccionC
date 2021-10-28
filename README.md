# Taller de Introducción a C

En este repositorio, encontrarás ejercicios de repaso de la primera sesión del taller de desarrollo de juegos retro. En este caso, ejercicios de repaso de C.

## Compilar

Para poder compilar y ejecutar cada ejercicio, se requiere tener instalado Docker. Para ello, ve a la siguiente [dirección](https://docs.docker.com/engine/install/) y sigue las instrucciones de tu Sistema Operativo.

Una vez instalado docker, ejecuta el siguiente comando en una línea de comandos que este en la carpeta del ejercicio:

```bash
docker build -t <ejercicio> .
```

## Ejecutar

Una vez compilado, ya podras ejecutar el programa usando docker:

```bash
docker run --rm <ejercicio>
```

**NOTA:** Debe de coincidir el nombre de < ejercicio > tanto el build como en run.

## VSCode

En cada ejercicio se ha creado una carpeta .vscode con distintas tareas que se puede ejecutar para compilar y ejecutar usando el Editor Visual Studio Code.

Para ejecutar pulsar ctrl+Mayus+B y seleccionar Build para compilar o Run para ejecutar.