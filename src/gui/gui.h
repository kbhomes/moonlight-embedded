#pragma once

#include <SDL2/SDL.h>
#include <switch.h>
#include <stdio.h>

#include <Limelight.h>
#include <client.h>
#include "../config.h"
#include "../connection.h"

typedef struct {
  SDL_Window *window;
  SDL_Renderer *renderer;
  int width;
  int height;
} GUI;

GUI gui;

int gui_init();
void gui_cleanup();

int gui_main_init();
void gui_main_loop();
void gui_main_cleanup();

int gui_stream_init();
void gui_stream_loop();
void gui_stream_cleanup();

SDL_Texture *load_png(void *data, size_t size);

// Client and server configuration
extern CONFIGURATION config;
extern SERVER_DATA server;
