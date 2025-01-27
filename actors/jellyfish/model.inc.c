Lights1 jellyfish_Jellyfish_lights = gdSPDefLights1(
	0x33, 0x56, 0x77,
	0x6D, 0xB1, 0xEF, 0x28, 0x28, 0x28);

Lights1 jellyfish_JellyfishTransparent_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 jellyfish_JellyfishEyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx jellyfish_jellyfishlights_ci4_aligner[] = {gsSPEndDisplayList()};
u8 jellyfish_jellyfishlights_ci4[] = {
	#include "actors/jellyfish/jellyfishlights.ci4.inc.c"
};

Gfx jellyfish_jellyfishlights_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jellyfish_jellyfishlights_pal_rgba16[] = {
	#include "actors/jellyfish/jellyfishlights.rgba16.pal"
};

Gfx jellyfish_jellyfisheye_ia8_aligner[] = {gsSPEndDisplayList()};
u8 jellyfish_jellyfisheye_ia8[] = {
	#include "actors/jellyfish/jellyfisheye.ia8.inc.c"
};

Gfx jellyfish_jellyfishtentacle_ci8_aligner[] = {gsSPEndDisplayList()};
u8 jellyfish_jellyfishtentacle_ci8[] = {
	#include "actors/jellyfish/jellyfishtentacle.ci8.inc.c"
};

Gfx jellyfish_jellyfishtentacle_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 jellyfish_jellyfishtentacle_pal_rgba16[] = {
	#include "actors/jellyfish/jellyfishtentacle.rgba16.pal"
};

Vtx jellyfish_Main_mesh_layer_1_vtx_0[45] = {
	{{ {110, 2, -39}, 0, {622, 1008}, {94, 80, 224, 255} }},
	{{ {0, 2, -119}, 0, {878, 1008}, {0, 79, 157, 255} }},
	{{ {0, 95, -130}, 0, {878, 496}, {0, 25, 131, 255} }},
	{{ {121, 95, -42}, 0, {622, 496}, {118, 25, 218, 255} }},
	{{ {0, 173, -81}, 0, {878, -16}, {0, 96, 173, 255} }},
	{{ {74, 173, -27}, 0, {622, -16}, {79, 96, 230, 255} }},
	{{ {0, 188, -3}, 0, {238, -16}, {0, 127, 0, 255} }},
	{{ {46, 173, 60}, 0, {366, -16}, {49, 96, 67, 255} }},
	{{ {-46, 173, 60}, 0, {110, -16}, {207, 96, 67, 255} }},
	{{ {-74, 173, -27}, 0, {-146, -16}, {177, 96, 230, 255} }},
	{{ {0, 173, -81}, 0, {-396, -16}, {0, 96, 173, 255} }},
	{{ {0, 95, -130}, 0, {-396, 496}, {0, 25, 131, 255} }},
	{{ {-121, 95, -42}, 0, {-146, 496}, {138, 25, 218, 255} }},
	{{ {0, 2, -119}, 0, {-396, 1008}, {0, 79, 157, 255} }},
	{{ {-110, 2, -39}, 0, {-146, 1008}, {162, 80, 224, 255} }},
	{{ {-75, 95, 100}, 0, {110, 496}, {183, 25, 101, 255} }},
	{{ {-68, 2, 91}, 0, {110, 1008}, {198, 80, 79, 255} }},
	{{ {75, 95, 100}, 0, {366, 496}, {73, 25, 101, 255} }},
	{{ {68, 2, 91}, 0, {366, 1008}, {58, 80, 79, 255} }},
	{{ {-68, 2, 91}, 0, {112, 1008}, {198, 80, 79, 255} }},
	{{ {0, -28, 125}, 0, {112, 1008}, {0, 195, 111, 255} }},
	{{ {68, 2, 91}, 0, {112, 1008}, {58, 80, 79, 255} }},
	{{ {-93, -12, 125}, 0, {112, 1008}, {182, 245, 102, 255} }},
	{{ {-122, -28, 37}, 0, {112, 1008}, {150, 195, 34, 255} }},
	{{ {-110, 2, -39}, 0, {112, 1008}, {162, 80, 224, 255} }},
	{{ {-150, -12, -52}, 0, {112, 1008}, {136, 245, 217, 255} }},
	{{ {-75, -28, -107}, 0, {112, 1008}, {191, 195, 166, 255} }},
	{{ {0, 2, -119}, 0, {112, 1008}, {0, 79, 157, 255} }},
	{{ {0, -12, -161}, 0, {112, 1008}, {0, 245, 129, 255} }},
	{{ {75, -28, -107}, 0, {112, 1008}, {65, 195, 166, 255} }},
	{{ {110, 2, -39}, 0, {112, 1008}, {94, 80, 224, 255} }},
	{{ {150, -12, -52}, 0, {112, 1008}, {120, 245, 217, 255} }},
	{{ {110, 2, -39}, 0, {112, 1008}, {94, 80, 224, 255} }},
	{{ {122, -28, 37}, 0, {112, 1008}, {106, 195, 34, 255} }},
	{{ {150, -12, -52}, 0, {112, 1008}, {120, 245, 217, 255} }},
	{{ {68, 2, 91}, 0, {112, 1008}, {58, 80, 79, 255} }},
	{{ {93, -12, 125}, 0, {112, 1008}, {74, 245, 102, 255} }},
	{{ {0, -28, 125}, 0, {112, 1008}, {0, 195, 111, 255} }},
	{{ {0, 0, -3}, 0, {112, 1008}, {0, 129, 0, 255} }},
	{{ {-93, -12, 125}, 0, {112, 1008}, {182, 245, 102, 255} }},
	{{ {-122, -28, 37}, 0, {112, 1008}, {150, 195, 34, 255} }},
	{{ {-150, -12, -52}, 0, {112, 1008}, {136, 245, 217, 255} }},
	{{ {-75, -28, -107}, 0, {112, 1008}, {191, 195, 166, 255} }},
	{{ {0, -12, -161}, 0, {112, 1008}, {0, 245, 129, 255} }},
	{{ {75, -28, -107}, 0, {112, 1008}, {65, 195, 166, 255} }},
};

Gfx jellyfish_Main_mesh_layer_1_tri_0[] = {
	gsSPVertex(jellyfish_Main_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
	gsSP2Triangles(10, 9, 6, 0, 11, 9, 10, 0),
	gsSP2Triangles(11, 12, 9, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 14, 12, 0, 14, 15, 12, 0),
	gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
	gsSP2Triangles(16, 18, 17, 0, 18, 3, 17, 0),
	gsSP2Triangles(18, 0, 3, 0, 17, 3, 5, 0),
	gsSP2Triangles(17, 5, 7, 0, 15, 17, 7, 0),
	gsSP2Triangles(15, 7, 8, 0, 12, 15, 8, 0),
	gsSP2Triangles(12, 8, 9, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 22, 20, 0, 19, 23, 22, 0),
	gsSP2Triangles(24, 23, 19, 0, 24, 25, 23, 0),
	gsSP2Triangles(24, 26, 25, 0, 27, 26, 24, 0),
	gsSP2Triangles(27, 28, 26, 0, 27, 29, 28, 0),
	gsSP2Triangles(27, 30, 29, 0, 30, 31, 29, 0),
	gsSPVertex(jellyfish_Main_mesh_layer_1_vtx_0 + 32, 13, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
	gsSP2Triangles(9, 10, 6, 0, 6, 10, 11, 0),
	gsSP2Triangles(11, 12, 6, 0, 6, 12, 2, 0),
	gsSP2Triangles(2, 1, 6, 0, 6, 1, 4, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_Main_mesh_layer_5_vtx_0[16] = {
	{{ {120, -7, -42}, 0, {-16, 1008}, {120, 241, 217, 255} }},
	{{ {0, -7, -129}, 0, {-16, 1008}, {0, 241, 130, 255} }},
	{{ {0, 95, -142}, 0, {-16, 1008}, {0, 25, 131, 255} }},
	{{ {-132, 95, -46}, 0, {-16, 1008}, {138, 25, 218, 255} }},
	{{ {-120, -7, -42}, 0, {-16, 1008}, {136, 241, 217, 255} }},
	{{ {-74, -7, 99}, 0, {-16, 1008}, {182, 241, 102, 255} }},
	{{ {-81, 95, 109}, 0, {-16, 1008}, {183, 25, 101, 255} }},
	{{ {74, -7, 99}, 0, {-16, 1008}, {74, 241, 102, 255} }},
	{{ {81, 95, 109}, 0, {-16, 1008}, {73, 25, 101, 255} }},
	{{ {132, 95, -46}, 0, {-16, 1008}, {118, 25, 218, 255} }},
	{{ {81, 180, -29}, 0, {-16, 1008}, {79, 96, 230, 255} }},
	{{ {0, 180, -88}, 0, {-16, 1008}, {0, 96, 173, 255} }},
	{{ {-81, 180, -29}, 0, {-16, 1008}, {177, 96, 230, 255} }},
	{{ {-50, 180, 66}, 0, {-16, 1008}, {207, 96, 67, 255} }},
	{{ {50, 180, 66}, 0, {-16, 1008}, {49, 96, 67, 255} }},
	{{ {0, 196, -3}, 0, {-16, 1008}, {0, 127, 0, 255} }},
};

Gfx jellyfish_Main_mesh_layer_5_tri_0[] = {
	gsSPVertex(jellyfish_Main_mesh_layer_5_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 0, 8, 7, 0),
	gsSP2Triangles(0, 9, 8, 0, 0, 2, 9, 0),
	gsSP2Triangles(2, 10, 9, 0, 2, 11, 10, 0),
	gsSP2Triangles(2, 12, 11, 0, 2, 3, 12, 0),
	gsSP2Triangles(6, 12, 3, 0, 6, 13, 12, 0),
	gsSP2Triangles(8, 13, 6, 0, 8, 14, 13, 0),
	gsSP2Triangles(8, 10, 14, 0, 8, 9, 10, 0),
	gsSP2Triangles(14, 10, 15, 0, 10, 11, 15, 0),
	gsSP2Triangles(11, 12, 15, 0, 12, 13, 15, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_Main_mesh_layer_5_vtx_1[6] = {
	{{ {-96, 16, 111}, 0, {97, 496}, {234, 0, 125, 255} }},
	{{ {0, 26, 128}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-96, 144, 111}, 0, {97, -16}, {234, 0, 125, 255} }},
	{{ {0, 134, 128}, 0, {496, -16}, {0, 0, 127, 255} }},
	{{ {96, 144, 111}, 0, {97, -16}, {22, 0, 125, 255} }},
	{{ {96, 16, 111}, 0, {97, 496}, {22, 0, 125, 255} }},
};

Gfx jellyfish_Main_mesh_layer_5_tri_1[] = {
	gsSPVertex(jellyfish_Main_mesh_layer_5_vtx_1 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 1, 5, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA1_skinned_mesh_layer_4_vtx_0[1] = {
	{{ {0, 2, -119}, 0, {240, -16}, {0, 0, 129, 255} }},
};

Gfx jellyfish_tentacleA1_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA1_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA1_mesh_layer_4_vtx_0[2] = {
	{{ {7, 250, 0}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-7, 250, 0}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleA1_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA1_mesh_layer_4_vtx_0 + 0, 2, 1),
	gsSP1Triangle(1, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB1_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-7, 250, 0}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {7, 250, 0}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB1_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB1_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB1_mesh_layer_4_vtx_0[2] = {
	{{ {7, 271, 0}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-7, 271, 0}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB1_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB1_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC1_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {7, 271, 0}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-7, 271, 0}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC1_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC1_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC1_mesh_layer_4_vtx_0[2] = {
	{{ {37, 273, 0}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-37, 273, 0}, 0, {-16, 496}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC1_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC1_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA2_skinned_mesh_layer_4_vtx_0[1] = {
	{{ {110, 2, -39}, 0, {240, -16}, {0, 0, 129, 255} }},
};

Gfx jellyfish_tentacleA2_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA2_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA2_mesh_layer_4_vtx_0[2] = {
	{{ {8, 250, 2}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-6, 250, 2}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleA2_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA2_mesh_layer_4_vtx_0 + 0, 2, 1),
	gsSP1Triangle(1, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB2_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-6, 250, 2}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {8, 250, 2}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB2_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB2_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB2_mesh_layer_4_vtx_0[2] = {
	{{ {8, 271, 2}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-6, 271, 2}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB2_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB2_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC2_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {8, 271, 2}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-6, 271, 2}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC2_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC2_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC2_mesh_layer_4_vtx_0[2] = {
	{{ {38, 273, 2}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-36, 273, 2}, 0, {-16, 496}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC2_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC2_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA3_skinned_mesh_layer_4_vtx_0[1] = {
	{{ {68, 2, 91}, 0, {240, -16}, {0, 253, 129, 255} }},
};

Gfx jellyfish_tentacleA3_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA3_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA3_mesh_layer_4_vtx_0[2] = {
	{{ {4, 250, -1}, 0, {332, -16}, {0, 3, 127, 255} }},
	{{ {-10, 250, -1}, 0, {148, -16}, {0, 3, 127, 255} }},
};

Gfx jellyfish_tentacleA3_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA3_mesh_layer_4_vtx_0 + 0, 2, 1),
	gsSP1Triangle(1, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB3_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-10, 250, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {4, 250, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB3_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB3_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB3_mesh_layer_4_vtx_0[2] = {
	{{ {4, 271, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-10, 271, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB3_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB3_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC3_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-10, 271, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {4, 271, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC3_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC3_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC3_mesh_layer_4_vtx_0[2] = {
	{{ {34, 273, -1}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-40, 273, -1}, 0, {-16, 496}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC3_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC3_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA4_skinned_mesh_layer_4_vtx_0[1] = {
	{{ {-68, 2, 91}, 0, {240, -16}, {0, 253, 129, 255} }},
};

Gfx jellyfish_tentacleA4_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA4_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA4_mesh_layer_4_vtx_0[2] = {
	{{ {10, 250, -1}, 0, {332, -16}, {0, 3, 127, 255} }},
	{{ {-4, 250, -1}, 0, {148, -16}, {0, 3, 127, 255} }},
};

Gfx jellyfish_tentacleA4_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA4_mesh_layer_4_vtx_0 + 0, 2, 1),
	gsSP1Triangle(1, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB4_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-4, 250, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {10, 250, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB4_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB4_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB4_mesh_layer_4_vtx_0[2] = {
	{{ {10, 271, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-4, 271, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB4_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB4_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC4_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {10, 271, -1}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-4, 271, -1}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC4_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC4_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC4_mesh_layer_4_vtx_0[2] = {
	{{ {40, 273, -1}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-34, 273, -1}, 0, {-16, 496}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC4_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC4_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA5_skinned_mesh_layer_4_vtx_0[1] = {
	{{ {-110, 2, -39}, 0, {240, -16}, {0, 254, 129, 255} }},
};

Gfx jellyfish_tentacleA5_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA5_skinned_mesh_layer_4_vtx_0 + 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleA5_mesh_layer_4_vtx_0[2] = {
	{{ {8, 250, -2}, 0, {332, -16}, {0, 2, 127, 255} }},
	{{ {-6, 250, -2}, 0, {148, -16}, {0, 2, 127, 255} }},
};

Gfx jellyfish_tentacleA5_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleA5_mesh_layer_4_vtx_0 + 0, 2, 1),
	gsSP1Triangle(1, 2, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB5_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {-6, 250, -2}, 0, {148, -16}, {0, 0, 127, 255} }},
	{{ {8, 250, -2}, 0, {332, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB5_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB5_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleB5_mesh_layer_4_vtx_0[2] = {
	{{ {8, 271, -2}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-6, 271, -2}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleB5_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleB5_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(2, 0, 1, 0, 2, 3, 0, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC5_skinned_mesh_layer_4_vtx_0[2] = {
	{{ {8, 271, -2}, 0, {332, -16}, {0, 0, 127, 255} }},
	{{ {-6, 271, -2}, 0, {148, -16}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC5_skinned_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC5_skinned_mesh_layer_4_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx jellyfish_tentacleC5_mesh_layer_4_vtx_0[2] = {
	{{ {38, 273, -2}, 0, {496, 496}, {0, 0, 127, 255} }},
	{{ {-36, 273, -2}, 0, {-16, 496}, {0, 0, 127, 255} }},
};

Gfx jellyfish_tentacleC5_mesh_layer_4_tri_0[] = {
	gsSPVertex(jellyfish_tentacleC5_mesh_layer_4_vtx_0 + 0, 2, 2),
	gsSP2Triangles(0, 2, 3, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_jellyfish_Jellyfish[] = {
	gsSPSetLights1(jellyfish_Jellyfish_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, jellyfish_jellyfishlights_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 5),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 4, jellyfish_jellyfishlights_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTile(7, 0, 0, 14, 124),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jellyfish_Jellyfish[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_jellyfish_JellyfishTransparent[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(jellyfish_JellyfishTransparent_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 75, 191, 203, 153),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jellyfish_JellyfishTransparent[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jellyfish_JellyfishEyes[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPSetLights1(jellyfish_JellyfishEyes_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, jellyfish_jellyfisheye_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jellyfish_JellyfishEyes[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsSPEndDisplayList(),
};

Gfx mat_jellyfish_JellyfishTentacle[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, jellyfish_jellyfishtentacle_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 54),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, jellyfish_jellyfishtentacle_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_jellyfish_JellyfishTentacle[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx jellyfish_Main_mesh_layer_1[] = {
	gsSPDisplayList(mat_jellyfish_Jellyfish),
	gsSPDisplayList(jellyfish_Main_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_Jellyfish),
	gsSPEndDisplayList(),
};

Gfx jellyfish_Main_mesh_layer_5[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTransparent),
	gsSPDisplayList(jellyfish_Main_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTransparent),
	gsSPDisplayList(mat_jellyfish_JellyfishEyes),
	gsSPDisplayList(jellyfish_Main_mesh_layer_5_tri_1),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishEyes),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA1_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA1_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA1_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA1_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB1_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB1_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB1_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB1_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC1_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC1_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC1_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC1_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA2_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA2_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA2_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA2_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB2_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB2_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB2_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB2_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC2_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC2_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC2_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC2_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA3_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA3_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA3_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA3_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB3_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB3_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB3_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB3_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC3_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC3_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC3_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC3_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA4_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA4_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA4_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA4_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB4_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB4_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB4_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB4_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC4_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC4_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC4_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC4_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA5_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA5_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleA5_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleA5_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB5_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB5_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleB5_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleB5_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC5_skinned_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC5_skinned_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_tentacleC5_mesh_layer_4[] = {
	gsSPDisplayList(mat_jellyfish_JellyfishTentacle),
	gsSPDisplayList(jellyfish_tentacleC5_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_jellyfish_JellyfishTentacle),
	gsSPEndDisplayList(),
};

Gfx jellyfish_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

