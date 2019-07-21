#pragma once

#include <d3d11.h>

#include "stereokit.h"
#include "assets.h"

struct _shader_t {
	asset_header_t      header;
	ID3D11VertexShader *vshader;
	ID3D11PixelShader  *pshader;
	ID3D11InputLayout  *vert_layout;
};

struct shaderargs_t {
	ID3D11Buffer *const_buffer;
	int buffer_slot;
	int buffer_size;
};

void shader_set_active (shader_t shader);

void shaderargs_create    (shaderargs_t &args, size_t buffer_size, int buffer_slot);
void shaderargs_destroy   (shaderargs_t &args);
void shaderargs_set_data  (shaderargs_t &args, void *data);
void shaderargs_set_active(shaderargs_t &args);