-- name: Cool hangout map stuff
-- description: gamble

E_MODEL_CACTUS = smlua_model_util_get_id("cactus_geo")

function cactus_init(obj)
	obj_set_billboard(obj)
	obj.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
	cur_obj_set_hitbox_radius_and_height(180, 420)
	obj.oInteractType = INTERACT_DAMAGE
end

function cactus_loop(obj)
	bhv_pole_base_loop()
end

--const BehaviorScript bhvTree[] = {
--    BEGIN(OBJ_LIST_POLELIKE),
--    BILLBOARD(),
--    OR_INT(oFlags, OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE),
--    SET_INT(oInteractType, INTERACT_POLE),
--    SET_HITBOX(/*Radius*/ 80, /*Height*/ 500),
--    SET_INT(oIntangibleTimer, 0),
--    BEGIN_LOOP(),
--        CALL_NATIVE(bhv_pole_base_loop),
--    END_LOOP(),
--};

id_bhvcactus = hook_behavior(nil, OBJ_LIST_DEFAULT, false, cactus_init, cactus_loop, "bhvcactus")