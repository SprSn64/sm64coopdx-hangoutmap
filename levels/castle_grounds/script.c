#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x64, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -4612, -176, -2745, 0, 180, 0, 0x000A0000, bhvInstantActiveWarp),
		MARIO_POS(0x01, 180, -4612, -176, -2745),
		OBJECT(E_MODEL_CACTUS, -12747, 303, 20124, 0, 0, 0, 0x00000000, id_bhvcactus),
		OBJECT(E_MODEL_CACTUS, -6680, 661, 16981, 0, 0, 0, 0x00000000, id_bhvcactus),
		OBJECT(E_MODEL_CACTUS, -2756, 415, 20624, 0, 0, 0, 0x00000000, id_bhvcactus),
		OBJECT(E_MODEL_CACTUS, 1688, 337, 17375, 0, 0, 0, 0x00000000, id_bhvcactus),
		OBJECT(E_MODEL_FISH, -27987, -1814, -15346, 0, 0, 0, 0x00000000, id_bhvManyBlueFishSpawner),
		OBJECT(E_MODEL_JELLYFISH, 26894, -2435, -28279, 0, 0, 0, 0x00000000, id_bhvjellyfish),
		OBJECT(E_MODEL_TREE, -8049, -631, -16028, 0, 0, 0, 0x00000000, id_bhvTree),
		OBJECT(MODEL_NONE, -4612, -256, -2745, 0, 0, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -4612, -256, -2745, 0, 0, 0, (0xF0 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -4612, -256, -2745, 0, 0, 0, (0xF1 << 16), bhvInstantActiveWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MENU_FILE_SELECT),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 180, -4612, -176, -2745),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
