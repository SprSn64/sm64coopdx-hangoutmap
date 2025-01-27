-- name: Cool hangout map stuff
-- description: gamble

E_MODEL_CACTUS = smlua_model_util_get_id("cactus_geo")
E_MODEL_JELLYFISH = smlua_model_util_get_id("jellyfish_geo")

function cactus_init(obj)
	obj_set_billboard(obj)
	obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	obj.oInteractType = INTERACT_DAMAGE
	obj.hitboxDownOffset = 0
	obj.oDamageOrCoinValue = 1
	obj.oHealth = 0
	obj.oNumLootCoins = 0
	cur_obj_set_hitbox_radius_and_height(180, 400)
	cur_obj_set_hurtbox_radius_and_height(0, 0)
	cur_obj_update_floor_and_walls()
	cur_obj_enable_rendering()
	cur_obj_become_tangible()
	
	network_init_object(obj, true, nil)
end

function cactus_loop(obj)
	bhv_pole_base_loop()
	cur_obj_enable_rendering()
    cur_obj_become_tangible() 
end

function jellyfish_init(obj)
    obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	obj.oInteractType = INTERACT_SHOCK
	obj.hitboxDownOffset = 0
	obj.oDamageOrCoinValue = 2
    obj.oHealth = 1
    obj.oNumLootCoins = 5
	cur_obj_become_tangible()
	cur_obj_enable_rendering()
	 
	network_init_object(obj, true, nil)
end

function jellyfish_loop(obj)	
	--bhv_blue_fish_movement_loop()
	smlua_anim_util_set_animation(obj, "jellyfish_swim")
end

id_bhvcactus = hook_behavior(nil, OBJ_LIST_DESTRUCTIVE, false, cactus_init, cactus_loop, "bhvcactus")
id_bhvjellyfish = hook_behavior(nil, OBJ_LIST_DEFAULT, false, jellyfish_init, jellyfish_loop, "bhvjellyfish")