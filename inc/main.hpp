#include <iostream>
#include <memory>
#include <string>
#include <vector>

// clang-format off
#include <GL/glew.h>
#include "glm/glm.hpp"
#include "glm/gtx/transform.hpp"
// clang-format on

// clang-format off
#include "imgui.h"
#include "backends/imgui_impl_sdl.h"
#include "backends/imgui_impl_opengl3.h"
// clang-format on

// clang-format off
#include <SDL2/SDL.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL_opengles2.h>
#else
#include <SDL_opengl.h>
#endif
// clang-format on
