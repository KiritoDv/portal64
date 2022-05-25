#include <ultra64.h>

#include "sk64/skelatool_animator.h"

#include "portal_mask.inc.h"
#include "portal_outline.inc.h"

#include "../../build/assets/models/cube/cube.h"
#include "../../build/assets/models/portal_gun/v_portalgun.h"
#include "../../build/assets/materials/static.h"
#include "../../build/assets/models/props/button.h"
#include "../../build/assets/models/props/door_01.h"

Gfx* cube_gfx = &cube_cube_model_gfx[0];
short cube_material_index = CUBE_INDEX;
Gfx* v_portal_gun_gfx = &portal_gun_v_portalgun_model_gfx[0];

Gfx* button_gfx = &props_button_model_gfx[0];
short button_material_index = BUTTON_INDEX;

Gfx* door_01_gfx = &props_door_01_model_gfx[0];
short door_01_material_index = DOOR_01_INDEX;