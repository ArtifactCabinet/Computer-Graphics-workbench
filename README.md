# Computer Graphics

## Technical Details

### 2d-drawing

+ cross-platform -> Cairo (nice and ez) | Skia (Hard to use outside of Chromium)
+ Windows -> Direct2D/GDI+ (both are creepy)
+ MacOS -> quartz

### Shader languages:

+ Vulkan ->  SPIR-V (Support both GLSL and HLSL)
+ OpenGL/WebGL -> GLSL
+ Metal -> MSL
+ DirectX -> HLSL

### OpenGL

+ openGL/GLSL 4.1 for MacOS since 2010, and still available on Apple Silicon.

#### Libraries
+ glew -> glad (cross-platform openGL loader)
+ glut -> glfw (utility library: Window management,mouse, keyboard)

## books & reviews

<https://docs.microsoft.com/en-us/windows/win32/opengl/opengl>

<https://thebookofshaders.com/>

All official documents -> Khronos OpenGL® Registry <https://www.khronos.org/registry/OpenGL/index_gl.php#apispecs>

Microsoft's documents on Graphics Pipeline<https://docs.microsoft.com/en-us/windows/win32/direct3d11/overviews-direct3d-11-graphics-pipeline>

<https://paroj.github.io/gltut/Positioning/Tutorial%2005.html>

# to-do

+ Texture
+ shader loading!
+ <https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glBindBuffer.xhtml>
+ Shaders -> review <https://docs.microsoft.com/en-us/windows/win32/direct3d11/overviews-direct3d-11-graphics-pipeline>