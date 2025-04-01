#ifndef WINDOW_H
#define WINDOW_H

#include <GL/gl.h>
#include <SDL2/SDL.h>

typedef struct {
    SDL_GLContext gl_context;
    SDL_Window* window;
    GLuint shader_program;
    GLuint vao;
} Window;

Window create_window();
void run(const Window* window);
void quit(const Window* window);

#endif
