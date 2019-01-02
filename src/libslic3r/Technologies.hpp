#ifndef _technologies_h_
#define _technologies_h_

//============
// debug techs
//============

// Shows camera target in the 3D scene
#define ENABLE_SHOW_CAMERA_TARGET 0
// Log debug messages to console when changing selection
#define ENABLE_SELECTION_DEBUG_OUTPUT 0

//=============
// 1.42.0 techs
//=============
#define ENABLE_1_42_0 1

// Uses a unique opengl context
#define ENABLE_USE_UNIQUE_GLCONTEXT (1 && ENABLE_1_42_0)
// Disable synchronization of unselected instances
#define DISABLE_INSTANCES_SYNCH (0 && ENABLE_1_42_0)
// Keeps objects on bed while scaling them using the scale gizmo
#define ENABLE_ENSURE_ON_BED_WHILE_SCALING (1 && ENABLE_1_42_0)
// All rotations made using the rotate gizmo are done with respect to the world reference system
#define ENABLE_WORLD_ROTATIONS (1 && ENABLE_1_42_0)
// Scene's GUI made using imgui library
#define ENABLE_IMGUI (1 && ENABLE_1_42_0)
#define DISABLE_MOVE_ROTATE_SCALE_GIZMOS_IMGUI (1 && ENABLE_IMGUI)
// Modified Sla support gizmo
#define ENABLE_SLA_SUPPORT_GIZMO_MOD (1 && ENABLE_1_42_0)
// Removes the wxNotebook from plater
#define ENABLE_REMOVE_TABS_FROM_PLATER (1 && ENABLE_1_42_0)
// Use wxDataViewRender instead of wxDataViewCustomRenderer
#define ENABLE_NONCUSTOM_DATA_VIEW_RENDERING (0 && ENABLE_1_42_0)
// Renders a small sphere in the center of the bounding box of the current selection when no gizmo is active
#define ENABLE_RENDER_SELECTION_CENTER (0 && ENABLE_1_42_0)
// Show visual hints in the 3D scene when sidebar matrix fields have focus
#define ENABLE_SIDEBAR_VISUAL_HINTS (1 && ENABLE_1_42_0)
// Separate rendering for opaque and transparent volumes
#define ENABLE_IMPROVED_TRANSPARENT_VOLUMES_RENDERING (1 && ENABLE_1_42_0)

//====================
// 1.42.0.alpha1 techs
//====================
#define ENABLE_1_42_0_ALPHA1 1

#define ENABLE_IMPROVED_SIDEBAR_OBJECTS_MANIPULATION (1 && ENABLE_1_42_0_ALPHA1)

#endif // _technologies_h_


