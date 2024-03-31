# Archivo .gitignore
### ¿Qué es?
 Es un archivo de texto que le dice a Git qué archivos o carpetas ignorar en un proyecto.
### ¿Por qué es conveniente incluirlo?
**Evita la inclusión de archivos no deseados**: Permite evitar que archivos no deseados se incluyan en el repositorio, manteniendo el historial limpio y relevante.
- **Reduce el tamaño del repositorio**: Al evitar la inclusión de archivos innecesarios, se reduce el tamaño del repositorio, facilitando su clonación y gestión.
- **Mejora la colaboración**: Al definir claramente qué archivos deben ser ignorados, se reduce la probabilidad de conflictos relacionados con archivos generados automáticamente, lo que facilita la colaboración entre miembros del equipo.

### ¿Cómo se configura un archivo .gitignore?
1. Crea un archivo de texto y asígnale el nombre `.gitignore` (recuerda incluir el `.` al principio).

2. Edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

3. Las entradas de este archivo también pueden seguir un patrón coincidente:

   - `*` se utiliza como una coincidencia comodín.
   - `/` se usa para ignorar las rutas relativas al archivo `.gitignore`.
   - `#` es usado para agregar comentarios.
# ¿Cómo ignorar un archivo en Git?
Para ignorar un archivo en Git y asegurarte de que no se incluya en los commits ni se rastree en el repositorio, puedes seguir estos pasos:
1. **Abrir o crear el archivo `.gitignore`**: 
   - Abre o crea el archivo `.gitignore` en el directorio raíz de tu repositorio local si aún no existe.

2. **Agregar una regla para el archivo a ignorar**:
   - Agrega una línea al archivo `.gitignore` que indique el nombre del archivo que deseas ignorar. Por ejemplo, si quieres ignorar un archivo llamado `ignorado.txt`, agregarías la siguiente línea al archivo `.gitignore`:

	```plaintext
     ignorado.txt
     ```
3. **Guardar y cerrar el archivo `.gitignore`**:
   - Guarda y cierra el archivo `.gitignore` después de agregar la regla.

