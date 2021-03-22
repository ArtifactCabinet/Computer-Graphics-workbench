
# Tehc
> openGL 4.6 api

# Links

GLFW doc <https://www.glfw.org/docs/latest/>


### Notes

+ VBO -> vertex buffer objects ->  a large number of vertices in the GPU's memory
+ VAO -> vertex array object   -> any subsequent vertex attribute calls of VBO on will be stored inside the VAO
+ EBO ->  Element Buffer Objects -> Just an Index for vertices with in VAO (To let GL know which ones to draw from VBO)

> Core OpenGL requires that we use a VAO so it knows what to do with our vertex inputs. If we fail to bind a VAO, OpenGL will most likely refuse to draw anything. 
