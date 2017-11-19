/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2009 Blender Foundation.
 * All rights reserved.
 *
 * 
 * Contributor(s): Blender Foundation
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file UI_icons.h
 *  \ingroup editorui
 */

/* Note: this is included twice with different #defines for DEF_ICON
 * once from UI_resources.h for the internal icon enum and
 * once for interface_api.c for the definition of the RNA enum for the icons */

/*40 icons per row*/

/* ICON_ prefix added */

/* ------------------------- Row 1 ---------------------------*/
DEF_ICON(NONE)
DEF_ICON(QUESTION)
DEF_ICON(ERROR)
DEF_ICON(CANCEL)
DEF_ICON(TRIA_RIGHT)
DEF_ICON(TRIA_DOWN)
DEF_ICON(TRIA_LEFT)
DEF_ICON(TRIA_UP)
DEF_ICON(ARROW_LEFTRIGHT)
DEF_ICON(PLUS)
DEF_ICON(DISCLOSURE_TRI_DOWN)
DEF_ICON(DISCLOSURE_TRI_RIGHT)
DEF_ICON(RADIOBUT_OFF)
DEF_ICON(RADIOBUT_ON)
DEF_ICON(MENU_PANEL)
DEF_ICON(BLENDER)
DEF_ICON(GRIP)
DEF_ICON(DOT)
DEF_ICON(COLLAPSEMENU)
DEF_ICON(X)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(BLANK0021) /* XXX 'DOWNARROW' icon! BFA - no idea why this icon is still there but listed as blank */
	/* BFA - Even more interesting, this icon gets created instead skipped. Most probably because the position is in fact not blank. */

#endif

DEF_ICON(GO_LEFT)
DEF_ICON(PLUG)
DEF_ICON(UI)
DEF_ICON(NODE)
DEF_ICON(NODE_SEL)

DEF_ICON(BLEND_TEX)
DEF_ICON(CLOUD_TEX)
DEF_ICON(DISTORTED_NOISE_TEX)
DEF_ICON(ENVIRONMENT_TEX)

DEF_ICON(CONNECTED)
DEF_ICON(PREFIX)
DEF_ICON(SUFFIX)
DEF_ICON(FLIP)
DEF_ICON(STRING)
DEF_ICON(SET_ROLL)
DEF_ICON(CLEAR_ROLL)
DEF_ICON(ROLL_X_NEG)
DEF_ICON(ROLL_X_POS)
DEF_ICON(ROLL_X_TANG_NEG)

/* ------------------------- Row 2 --------------------------*/
	
	/* ui */
DEF_ICON(FULLSCREEN)
DEF_ICON(SPLITSCREEN)
DEF_ICON(RIGHTARROW_THIN)
DEF_ICON(BORDERMOVE)
DEF_ICON(VIEWZOOM)
DEF_ICON(ZOOMIN)
DEF_ICON(ZOOMOUT)
DEF_ICON(PANEL_CLOSE)
DEF_ICON(COPY_ID)
DEF_ICON(EYEDROPPER)
DEF_ICON(LINK_AREA)
DEF_ICON(AUTO)
DEF_ICON(CHECKBOX_DEHLT)
DEF_ICON(CHECKBOX_HLT)
DEF_ICON(UNLOCKED)
DEF_ICON(LOCKED)
DEF_ICON(UNPINNED)
DEF_ICON(PINNED)
DEF_ICON(SCREEN_BACK)
DEF_ICON(RIGHTARROW)
DEF_ICON(DOWNARROW_HLT)
DEF_ICON(DOTSUP)
DEF_ICON(DOTSDOWN)
DEF_ICON(LINK)
DEF_ICON(INLINK)
DEF_ICON(PLUGIN)

DEF_ICON(MAGIC_TEX)
DEF_ICON(MARBLE_TEX)
DEF_ICON(MUSGRAVE_TEX)
DEF_ICON(NOISE_TEX)

DEF_ICON(ROLL_X_TANG_POS)
DEF_ICON(ROLL_Y_NEG)
DEF_ICON(ROLL_Y_POS)
DEF_ICON(ROLL_Z_NEG)
DEF_ICON(ROLL_Z_POS)
DEF_ICON(ROLL_Z_TANG_NEG)
DEF_ICON(ROLL_Z_TANG_POS)
DEF_ICON(CLEAR_CONSTRAINT)

DEF_ICON(ADD_IK)
DEF_ICON(CLEAR_IK)

/* ------------------------- Row 3 --------------------------*/
	
	/* various ui */
DEF_ICON(HELP)
DEF_ICON(GHOST_ENABLED)
DEF_ICON(COLOR)  /* see COLOR_RED/GREEN/BLUE */
DEF_ICON(LINKED)
DEF_ICON(UNLINKED)
DEF_ICON(HAND)
DEF_ICON(ZOOM_ALL)
DEF_ICON(ZOOM_SELECTED)
DEF_ICON(ZOOM_PREVIOUS)
DEF_ICON(ZOOM_IN)
DEF_ICON(ZOOM_OUT)
DEF_ICON(RENDER_REGION)
DEF_ICON(BORDER_RECT)
DEF_ICON(BORDER_LASSO)
DEF_ICON(FREEZE)
DEF_ICON(STYLUS_PRESSURE)
DEF_ICON(GHOST_DISABLED)
DEF_ICON(NEW)
DEF_ICON(FILE_TICK)
DEF_ICON(QUIT)
DEF_ICON(URL)
DEF_ICON(RECOVER_LAST)
DEF_ICON(DUPLICATE) //bfa, duplicate icon
DEF_ICON(FULLSCREEN_ENTER)
DEF_ICON(FULLSCREEN_EXIT)
DEF_ICON(BLANK1)	// Not actually blank - this is used all over the place

DEF_ICON(OCEAN_TEX)
DEF_ICON(POINT_DENSITY_TEX)
DEF_ICON(STUCCI_TEX)
DEF_ICON(VORONI_TEX)

DEF_ICON(CLEAR)
DEF_ICON(RESET)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_023)
	DEF_ICON(extend_024)
	DEF_ICON(extend_025)
	DEF_ICON(extend_026)
	DEF_ICON(extend_027)
	DEF_ICON(extend_028)
	DEF_ICON(extend_029)
	DEF_ICON(extend_030)

#endif

/* ------------------------- Row 4 --------------------------*/
	
	/* BUTTONS */
DEF_ICON(LAMP)
DEF_ICON(MATERIAL)
DEF_ICON(TEXTURE)
DEF_ICON(ANIM)
DEF_ICON(WORLD)
DEF_ICON(SCENE)
DEF_ICON(EDIT)
DEF_ICON(GAME)
DEF_ICON(RADIO)
DEF_ICON(SCRIPT)
DEF_ICON(PARTICLES)
DEF_ICON(PHYSICS)
DEF_ICON(SPEAKER)
DEF_ICON(TEXTURE_SHADED)

/*bfa - view icons*/
DEF_ICON(VIEW_FRONT)
DEF_ICON(VIEW_BACK)
DEF_ICON(VIEW_LEFT)
DEF_ICON(VIEW_RIGHT)
DEF_ICON(VIEW_TOP)
DEF_ICON(VIEW_BOTTOM)
DEF_ICON(VIEW_RESET)
DEF_ICON(VIEW_SWITCHTOCAM)
DEF_ICON(VIEW_SWITCHACTIVECAM)
DEF_ICON(DELETE) // bfa
DEF_ICON(PERSP_ORTHO)
DEF_ICON(WIREFRAME)

DEF_ICON(WOOD_TEX)

DEF_ICON(RENDERBORDER_CLEAR)
DEF_ICON(RENDERBORDER)
DEF_ICON(CLIPPINGBORDER)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_031)
	DEF_ICON(extend_032)
	DEF_ICON(extend_033)
	DEF_ICON(extend_034)
	DEF_ICON(extend_035)
	DEF_ICON(extend_036)
	DEF_ICON(extend_037)
	DEF_ICON(extend_038)
	DEF_ICON(extend_039)
	DEF_ICON(extend_040)

#endif

/* ------------------------- Row 5 --------------------------*/

/* EDITORS */
DEF_ICON(VIEW3D)
DEF_ICON(IPO) // Graph Editor
DEF_ICON(OOPS) // Outliner
DEF_ICON(BUTS) // Properties
DEF_ICON(FILESEL) // File Browser
DEF_ICON(IMAGE_COL) // UV Image Editor
DEF_ICON(INFO) // Info Editor
DEF_ICON(SEQUENCE) // Sequencer
DEF_ICON(TEXT) // Text 
DEF_ICON(IMASEL) // Image Selector? Not an editor!
DEF_ICON(SOUND) // Sound? Deprecated?
DEF_ICON(ACTION)  // Dope Sheet
DEF_ICON(NLA) // NLA Editor
DEF_ICON(SCRIPTWIN)
DEF_ICON(TIME)
DEF_ICON(NODETREE)
DEF_ICON(LOGIC)
DEF_ICON(CONSOLE)
DEF_ICON(PREFERENCES)
DEF_ICON(CLIP)
DEF_ICON(ASSET_MANAGER)
DEF_ICON(TOOLBAR) // The toolbar editor
DEF_ICON(CIRCLE_SELECT)
DEF_ICON(INVERSE)
DEF_ICON(SELECT_ALL)
DEF_ICON(STROKE_SELECT)

DEF_ICON(FULLSCREEN_AREA)
DEF_ICON(MAXIMIZE_AREA)
DEF_ICON(NEW_WINDOW)
DEF_ICON(QUADVIEW)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_041)
	DEF_ICON(extend_042)
	DEF_ICON(extend_043)
	DEF_ICON(extend_044)
	DEF_ICON(extend_045)
	DEF_ICON(extend_046)
	DEF_ICON(extend_047)
	DEF_ICON(extend_048)
	DEF_ICON(extend_049)
	DEF_ICON(extend_050)

#endif

/* ------------------------- Row 6 --------------------------*/

	/* MODES */
DEF_ICON(OBJECT_DATAMODE)	// XXX fix this up
DEF_ICON(EDITMODE_HLT)
DEF_ICON(FACESEL_HLT)
DEF_ICON(VPAINT_HLT)
DEF_ICON(TPAINT_HLT)
DEF_ICON(WPAINT_HLT)
DEF_ICON(SCULPTMODE_HLT)
DEF_ICON(POSE_HLT)
DEF_ICON(PARTICLEMODE)
DEF_ICON(LIGHTPAINT) // deprecated

/*bfa - select more less icons*/
DEF_ICON(SELECTLESS)
DEF_ICON(SELECTMORE)

/*bfa - Gpencil Edit Panel*/
DEF_ICON(BEND)
DEF_ICON(SHEAR)
DEF_ICON(TOSPHERE)
DEF_ICON(JOINCOPY)

DEF_ICON(SPLITEDGE)
DEF_ICON(VERTEXCONNECTPATH)
DEF_ICON(VERTEXCONNECT)
DEF_ICON(MARKSHARPEDGES)

/* bfa - EDITORS active icons*/
DEF_ICON(BUTS_ACTIVE) // Properties
DEF_ICON(OOPS_ACTIVE) // Outliner
DEF_ICON(NLA_ACTIVE)
DEF_ICON(DOPESHEET_ACTIVE)
DEF_ICON(GRAPH_ACTIVE)
DEF_ICON(TIME_ACTIVE)

DEF_ICON(VIEWALL)
DEF_ICON(VIEWALL_RESETCURSOR)
DEF_ICON(VIEW_GLOBAL_LOCAL)
DEF_ICON(VIEW_SELECTED)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_051)
	DEF_ICON(extend_052)
	DEF_ICON(extend_053)
	DEF_ICON(extend_054)
	DEF_ICON(extend_055)
	DEF_ICON(extend_056)
	DEF_ICON(extend_057)
	DEF_ICON(extend_058)
	DEF_ICON(extend_059)
	DEF_ICON(extend_060)

#endif

/* ------------------------- Row 7  --------------------------*/

	/* DATA */
DEF_ICON(SCENE_DATA)
DEF_ICON(RENDERLAYERS)
DEF_ICON(WORLD_DATA)
DEF_ICON(OBJECT_DATA)
DEF_ICON(MESH_DATA)
DEF_ICON(CURVE_DATA)
DEF_ICON(META_DATA)
DEF_ICON(LATTICE_DATA)
DEF_ICON(LAMP_DATA)
DEF_ICON(MATERIAL_DATA)
DEF_ICON(TEXTURE_DATA)
DEF_ICON(ANIM_DATA)
DEF_ICON(CAMERA_DATA)
DEF_ICON(PARTICLE_DATA)
DEF_ICON(LIBRARY_DATA_DIRECT)
DEF_ICON(GROUP)
DEF_ICON(ARMATURE_DATA)
DEF_ICON(POSE_DATA)
DEF_ICON(BONE_DATA)
DEF_ICON(CONSTRAINT)
DEF_ICON(SHAPEKEY_DATA)
DEF_ICON(CONSTRAINT_BONE)
DEF_ICON(CAMERA_STEREO)
DEF_ICON(PACKAGE)
DEF_ICON(UGLYPACKAGE)

DEF_ICON(SOLIDIFY)
DEF_ICON(VIEWCAMERACENTER)

DEF_ICON(VIEW_ACTIVE_BACK)
DEF_ICON(VIEW_ACTIVE_BOTTOM)
DEF_ICON(VIEW_ACTIVE_FRONT)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_061)
	DEF_ICON(extend_062)
	DEF_ICON(extend_063)
	DEF_ICON(extend_064)
	DEF_ICON(extend_065)
	DEF_ICON(extend_066)
	DEF_ICON(extend_067)
	DEF_ICON(extend_068)
	DEF_ICON(extend_069)
	DEF_ICON(extend_070)

#endif

/* ------------------------- Row 8 --------------------------*/

	/* DATA */
DEF_ICON(BRUSH_DATA)
DEF_ICON(IMAGE_DATA)
DEF_ICON(FILE)
DEF_ICON(FCURVE)
DEF_ICON(FONT_DATA)
DEF_ICON(RENDER_RESULT)
DEF_ICON(SURFACE_DATA)
DEF_ICON(EMPTY_DATA)
DEF_ICON(SETTINGS)
DEF_ICON(RENDER_ANIMATION)
DEF_ICON(RENDER_STILL)
DEF_ICON(LIBRARY_DATA_BROKEN)
DEF_ICON(BOIDS)
DEF_ICON(STRANDS)
DEF_ICON(LIBRARY_DATA_INDIRECT)
DEF_ICON(GREASEPENCIL)
DEF_ICON(LINE_DATA)
DEF_ICON(HIDE_RENDERVIEW)
DEF_ICON(GROUP_BONE)
DEF_ICON(GROUP_VERTEX)
DEF_ICON(GROUP_VCOL)
DEF_ICON(GROUP_UVS)
DEF_ICON(RENDER_STILL_VIEW)
DEF_ICON(RENDER_ANI_VIEW)
DEF_ICON(RNA)
DEF_ICON(RNA_ADD)

DEF_ICON(VIEW_ACTIVE_LEFT)
DEF_ICON(VIEW_ACTIVE_RIGHT)
DEF_ICON(VIEW_ACTIVE_TOP)

DEF_ICON(CENTERTOMOUSE)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_071)
	DEF_ICON(extend_072)
	DEF_ICON(extend_073)
	DEF_ICON(extend_074)
	DEF_ICON(extend_075)
	DEF_ICON(extend_076)
	DEF_ICON(extend_077)
	DEF_ICON(extend_078)
	DEF_ICON(extend_079)
	DEF_ICON(extend_080)

#endif


/* ------------------------- Row 9 --------------------------*/

DEF_ICON(CLEARSHARPEDGES)
DEF_ICON(CONVEXHULL)

DEF_ICON(BLENDFROMSHAPE)
DEF_ICON(SHAPEPROPAGATE)

DEF_ICON(BRIDGE_EDGELOOPS)
DEF_ICON(CLEAR_FS_EDGE)
DEF_ICON(MARK_FS_EDGE)

DEF_ICON(MAKEDUPLIFACE)

DEF_ICON(ROTATECW)
DEF_ICON(SPLIT)
DEF_ICON(SUBDIVEDGELOOP)
DEF_ICON(UNSUBDIVIDE)
DEF_ICON(SUBDIV_EDGERING)

DEF_ICON(REVERSE_COLORS)
DEF_ICON(ROTATE_COLORS)
DEF_ICON(REVERSE_UVS)
DEF_ICON(ROTATE_UVS)

	/*bfa - UV icons */
DEF_ICON(ALIGNAUTO)
DEF_ICON(ALIGNHORIZONTAL)
DEF_ICON(ALIGNVERTICAL)
DEF_ICON(STRAIGHTEN)
DEF_ICON(STRAIGHTEN_X)
DEF_ICON(STRAIGHTEN_Y)
DEF_ICON(UNWRAP_ABF)
DEF_ICON(UNWRAP_LSCM)
DEF_ICON(WELD)

DEF_ICON(DOLLY)
DEF_ICON(FLY_NAVIGATION)
DEF_ICON(VIEW_NAVIGATION)
DEF_ICON(WALK_NAVIGATION)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_081)
	DEF_ICON(extend_082)
	DEF_ICON(extend_083)
	DEF_ICON(extend_084)
	DEF_ICON(extend_085)
	DEF_ICON(extend_086)
	DEF_ICON(extend_087)
	DEF_ICON(extend_088)
	DEF_ICON(extend_089)
	DEF_ICON(extend_090)

#endif

/* ------------------------- Row 10 --------------------------*/
	
	/* OUTLINER */
DEF_ICON(OUTLINER_OB_EMPTY)
DEF_ICON(OUTLINER_OB_MESH)
DEF_ICON(OUTLINER_OB_CURVE)
DEF_ICON(OUTLINER_OB_LATTICE)
DEF_ICON(OUTLINER_OB_META)
DEF_ICON(OUTLINER_OB_LAMP)
DEF_ICON(OUTLINER_OB_CAMERA)
DEF_ICON(OUTLINER_OB_ARMATURE)
DEF_ICON(OUTLINER_OB_FONT)
DEF_ICON(OUTLINER_OB_SURFACE)
DEF_ICON(OUTLINER_OB_SPEAKER)

/* Empties */
DEF_ICON(EMPTY_ARROWS)
DEF_ICON(EMPTY_CIRCLE)
DEF_ICON(EMPTY_CONE)
DEF_ICON(EMPTY_CUBE)
DEF_ICON(EMPTY_IMAGE)
DEF_ICON(EMPTY_SINGLEARROW)
DEF_ICON(EMPTY_SPHERE)

DEF_ICON(RESTRICT_COLOR_ON)

DEF_ICON(RESTRICT_VIEW_OFF)
DEF_ICON(RESTRICT_VIEW_ON)
DEF_ICON(RESTRICT_SELECT_OFF)
DEF_ICON(RESTRICT_SELECT_ON)
DEF_ICON(RESTRICT_RENDER_OFF)
DEF_ICON(RESTRICT_RENDER_ON)

DEF_ICON(RESTRICT_COLOR_OFF)

DEF_ICON(OUTLINER_OB_FORCE_FIELD)
DEF_ICON(OUTLINER_OB_GROUP_INSTANCE)

DEF_ICON(ZOOM_CAMERA)
DEF_ICON(ZOOM_BORDER)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_091)
	DEF_ICON(extend_092)
	DEF_ICON(extend_093)
	DEF_ICON(extend_094)
	DEF_ICON(extend_095)
	DEF_ICON(extend_096)
	DEF_ICON(extend_097)
	DEF_ICON(extend_098)
	DEF_ICON(extend_099)
	DEF_ICON(extend_100)

#endif

/* ------------------------- Row 11 --------------------------*/

	/* OUTLINER */
DEF_ICON(OUTLINER_DATA_EMPTY)
DEF_ICON(OUTLINER_DATA_MESH)
DEF_ICON(OUTLINER_DATA_CURVE)
DEF_ICON(OUTLINER_DATA_LATTICE)
DEF_ICON(OUTLINER_DATA_META)
DEF_ICON(OUTLINER_DATA_LAMP)
DEF_ICON(OUTLINER_DATA_CAMERA)
DEF_ICON(OUTLINER_DATA_ARMATURE)
DEF_ICON(OUTLINER_DATA_FONT)
DEF_ICON(OUTLINER_DATA_SURFACE)
DEF_ICON(OUTLINER_DATA_SPEAKER)
DEF_ICON(OUTLINER_DATA_POSE)

/* bfa - apply */
DEF_ICON(APPLYALL)
DEF_ICON(APPLYMOVE)
DEF_ICON(APPLYROTATE)
DEF_ICON(APPLYSCALE)
DEF_ICON(CLEARMOVE)
DEF_ICON(CLEARORIGIN)
DEF_ICON(CLEARROTATE)
DEF_ICON(CLEARSCALE)
DEF_ICON(MAKEDUPLIREAL)
DEF_ICON(VISUALTRANSFORM)

DEF_ICON(POKEFACES)
DEF_ICON(SPLITBYEDGES)
DEF_ICON(TRIANGULATE)
DEF_ICON(TRISTOQUADS)

DEF_ICON(PAN_DOWN)
DEF_ICON(PAN_LEFT)
DEF_ICON(PAN_RIGHT)
DEF_ICON(PAN_UP)

#ifndef DEF_ICON_BLANK_SKIP

	 DEF_ICON(extend_101)
	 DEF_ICON(extend_102)
	 DEF_ICON(extend_103)
	 DEF_ICON(extend_104)
	 DEF_ICON(extend_105)
	 DEF_ICON(extend_106)
	 DEF_ICON(extend_107)
	 DEF_ICON(extend_108)
	 DEF_ICON(extend_109)
	 DEF_ICON(extend_110)

#endif

/* ------------------------- Row 12 --------------------------*/
	
	/* PRIMITIVES */
DEF_ICON(MESH_PLANE)
DEF_ICON(MESH_CUBE)
DEF_ICON(MESH_CIRCLE)
DEF_ICON(MESH_UVSPHERE)
DEF_ICON(MESH_ICOSPHERE)
DEF_ICON(MESH_GRID)
DEF_ICON(MESH_MONKEY)
DEF_ICON(MESH_CYLINDER)
DEF_ICON(MESH_TORUS)
DEF_ICON(MESH_CONE)
DEF_ICON(MESH_CAPSULE)

DEF_ICON(INTERSECT)

DEF_ICON(LAMP_POINT)
DEF_ICON(LAMP_SUN)
DEF_ICON(LAMP_SPOT)
DEF_ICON(LAMP_HEMI)
DEF_ICON(LAMP_AREA)

DEF_ICON(MARKFSFACE)
DEF_ICON(CLEARFSFACE)

DEF_ICON(META_EMPTY)
DEF_ICON(META_PLANE)
DEF_ICON(META_CUBE)
DEF_ICON(META_BALL)
DEF_ICON(META_ELLIPSOID)
DEF_ICON(META_CAPSULE)

DEF_ICON(BOOLEAN_INTERSECT)

DEF_ICON(ORBIT_DOWN)
DEF_ICON(ORBIT_LEFT)
DEF_ICON(ORBIT_RIGHT)
DEF_ICON(ORBIT_UP)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_111)
	DEF_ICON(extend_112)
	DEF_ICON(extend_113)
	DEF_ICON(extend_114)
	DEF_ICON(extend_115)
	DEF_ICON(extend_116)
	DEF_ICON(extend_117)
	DEF_ICON(extend_118)
	DEF_ICON(extend_119)
	DEF_ICON(extend_120)

#endif

/* ------------------------- Row 13 --------------------------*/
	
	/* PRIMITIVES */
DEF_ICON(SURFACE_NCURVE)
DEF_ICON(SURFACE_NCIRCLE)
DEF_ICON(SURFACE_NSURFACE)
DEF_ICON(SURFACE_NCYLINDER)
DEF_ICON(SURFACE_NSPHERE)
DEF_ICON(SURFACE_NTORUS)

DEF_ICON(BEAUTIFY)
DEF_ICON(FILL)
DEF_ICON(GRIDFILL)

DEF_ICON(CURVE_BEZCURVE)
DEF_ICON(CURVE_BEZCIRCLE)
DEF_ICON(CURVE_NCURVE)
DEF_ICON(CURVE_NCIRCLE)
DEF_ICON(CURVE_PATH)
/*bfa - uveditor icons*/
DEF_ICON(AVERAGEISLANDSCALE)
DEF_ICON(COPYMIRRORED)
DEF_ICON(MINIMIZESTRETCH)
DEF_ICON(PACKISLAND)
DEF_ICON(SEAMSFROMISLAND)

DEF_ICON(COLOR_RED)
DEF_ICON(COLOR_GREEN)
DEF_ICON(COLOR_BLUE)
DEF_ICON(TRIA_RIGHT_BAR)
DEF_ICON(TRIA_DOWN_BAR)
DEF_ICON(TRIA_LEFT_BAR)
DEF_ICON(TRIA_UP_BAR)

DEF_ICON(ORBIT_OPPOSITE)
DEF_ICON(ROLL_LEFT)
DEF_ICON(ROLL_RIGHT)
DEF_ICON(LAYER)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_121)
	DEF_ICON(extend_122)
	DEF_ICON(extend_123)
	DEF_ICON(extend_124)
	DEF_ICON(extend_125)
	DEF_ICON(extend_126)
	DEF_ICON(extend_127)
	DEF_ICON(extend_128)
	DEF_ICON(extend_129)
	DEF_ICON(extend_130)

#endif

/* ------------------------- Row 14 --------------------------*/

	/* EMPTY */
DEF_ICON(FORCE_FORCE)
DEF_ICON(FORCE_WIND)
DEF_ICON(FORCE_VORTEX)
DEF_ICON(FORCE_MAGNETIC)
DEF_ICON(FORCE_HARMONIC)
DEF_ICON(FORCE_CHARGE)
DEF_ICON(FORCE_LENNARDJONES)
DEF_ICON(FORCE_TEXTURE)
DEF_ICON(FORCE_CURVE)
DEF_ICON(FORCE_BOID)
DEF_ICON(FORCE_TURBULENCE)
DEF_ICON(FORCE_DRAG)
DEF_ICON(FORCE_SMOKEFLOW)
/*bfa - new icons. Tool Shelf - Curve - Edit mode - Tools*/
DEF_ICON(RECALC_NORMALS)
DEF_ICON(RECALC_NORMALS_INSIDE)
/*bfa - new icons. Tool Shelf - Edit mode - Shading UV's */
DEF_ICON(FLIP_NORMALS)
DEF_ICON(MARK_SEAM)
DEF_ICON(CLEAR_SEAM)
/*bfa - new icons. Tool Shelf - Pose mode - Tools */
DEF_ICON(ADD_TO_LIBRARY)
DEF_ICON(PUSH_POSE)
DEF_ICON(RELAX_POSE)
DEF_ICON(BREAKDOWNER_POSE)
DEF_ICON(KEYFRAMES_CLEAR)
/*bfa - new icons. Tool Shelf - two more group icons */
DEF_ICON(REMOVE_FROM_ALL_GROUPS)
DEF_ICON(REMOVE_SELECTED_FROM_ACTIVE_GROUP)

DEF_ICON(FILLBETWEEN)

DEF_ICON(PARENT)
DEF_ICON(CHILD)
DEF_ICON(CHILD_RECURSIVE)
DEF_ICON(SIBLINGS)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_131)
	DEF_ICON(extend_132)
	DEF_ICON(extend_133)
	DEF_ICON(extend_134)
	DEF_ICON(extend_135)
	DEF_ICON(extend_136)
	DEF_ICON(extend_137)
	DEF_ICON(extend_138)
	DEF_ICON(extend_139)
	DEF_ICON(extend_140)

#endif

/* ------------------------- Row 15 --------------------------*/

/*this icons gets created instead skipped. Most probably because the position is in fact not blank. */
#ifndef DEF_ICON_BLANK_SKIP
	/* available */
	DEF_ICON(BLANK0365)
	DEF_ICON(BLANK0366)
	DEF_ICON(BLANK0367)
#endif

DEF_ICON(NODE_INSERT_ON)
DEF_ICON(NODE_INSERT_OFF)
/*bfa - new icons. Tool Shelf - Object mode - Physics Tools*/
DEF_ICON(RIGID_ADD_ACTIVE)
DEF_ICON(RIGID_ADD_PASSIVE)
DEF_ICON(RIGID_REMOVE)
DEF_ICON(RIGID_CHANGE_SHAPE)
DEF_ICON(RIGID_CALCULATE_MASS)
DEF_ICON(RIGID_COPY_FROM_ACTIVE)
DEF_ICON(RIGID_APPLY_TRANS)
DEF_ICON(RIGID_BAKE_TO_KEYFRAME)
DEF_ICON(RIGID_CONSTRAINTS_CONNECT)
/*bfa - new icons. Tool Shelf - Object mode - Animation Tools*/
DEF_ICON(KEYFRAMES_INSERT)
DEF_ICON(KEYFRAMES_REMOVE)
DEF_ICON(MOTIONPATHS_CALCULATE)
DEF_ICON(MOTIONPATHS_CLEAR)
DEF_ICON(BAKE_ACTION)
/*bfa - new icons. Tool Shelf - Edit mode - Surface Tools*/
DEF_ICON(TOGGLE_CYCLIC)
DEF_ICON(SWITCH_DIRECTION)
/*bfa - new icons. Tool Shelf - Curve - Edit mode - Tools*/
DEF_ICON(HANDLE_AUTO)
DEF_ICON(HANDLE_VECTOR)
DEF_ICON(HANDLE_ALIGN)
DEF_ICON(HANDLE_FREE)
DEF_ICON(RADIUS)

DEF_ICON(TYPE)
DEF_ICON(PASS)

DEF_ICON(SELECT_FACES_BY_SIDE)
DEF_ICON(CHECKER_DESELECT)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_141)
	DEF_ICON(extend_142)
	DEF_ICON(extend_143)
	DEF_ICON(extend_144)
	DEF_ICON(extend_145)
	DEF_ICON(extend_146)
	DEF_ICON(extend_147)
	DEF_ICON(extend_148)
	DEF_ICON(extend_149)
	DEF_ICON(extend_150)

#endif

/* ------------------------- Row 16 --------------------------*/

/*bfa - new icons. Tool Shelf - Edit Mode - Tools - Weight Tools*/
DEF_ICON(WEIGHT_GRADIENT)
DEF_ICON(WEIGHT_TRANSFER_WEIGHTS)
/*bfa - new icons. Tool Shelf - Object Mode - Tools - Edit*/
DEF_ICON(JOIN)
DEF_ICON(GEOMETRY_TO_ORIGIN)
DEF_ICON(ORIGIN_TO_GEOMETRY)
DEF_ICON(ORIGIN_TO_CURSOR)
DEF_ICON(ORIGIN_TO_CENTEROFMASS)
DEF_ICON(SHADING_SMOOTH)
DEF_ICON(SHADING_FLAT)
DEF_ICON(TRANSFER_DATA)
DEF_ICON(TRANSFER_DATA_LAYOUT)
/*bfa - new icons. Tool Shelf - Object Mode - Relations*/
DEF_ICON(NEW_GROUP)
DEF_ICON(ADD_TO_ACTIVE)
DEF_ICON(REMOVE_FROM_GROUP)
DEF_ICON(PARENT_SET)
DEF_ICON(PARENT_CLEAR)
DEF_ICON(LINK_DATA)
DEF_ICON(MAKE_SINGLE_USER)
DEF_ICON(MAKE_LOCAL)
DEF_ICON(MAKE_PROXY)
/*bfa - new icons. Tool Shelf - Object Mode - Grease Pencil*/
DEF_ICON(ERASE)

DEF_ICON(EXTRUDESIZE)
DEF_ICON(WIDTH_SIZE)

DEF_ICON(GREASEPENCIL_CONVERT)
DEF_ICON(RULER)

DEF_ICON(VERTEX_PARENT)

DEF_ICON(SELECT_NONMANIFOLD)
DEF_ICON(SELECT_BOUNDARY)
DEF_ICON(SELECT_EDGELOOP)
DEF_ICON(SELECT_EDGERING)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_151)
	DEF_ICON(extend_152)
	DEF_ICON(extend_153)
	DEF_ICON(extend_154)
	DEF_ICON(extend_155)
	DEF_ICON(extend_156)
	DEF_ICON(extend_157)
	DEF_ICON(extend_158)
	DEF_ICON(extend_159)
	DEF_ICON(extend_160)

#endif


/* ------------------------- Row 17 --------------------------*/


/*bfa - new icons. Tool Shelf - Edit Mode - Tools - Mesh Tools - Add section  */
DEF_ICON(INSET_FACES)
DEF_ICON(MAKE_EDGEFACE)
DEF_ICON(SUBDIVIDE_EDGES)
DEF_ICON(LOOP_CUT_AND_SLIDE)
DEF_ICON(OFFSET_EDGE_SLIDE)
DEF_ICON(KNIFE)
DEF_ICON(KNIFE_SELECT)
DEF_ICON(KNIFE_PROJECT)
DEF_ICON(BISECT)
DEF_ICON(DISSOLVE_VERTS)
DEF_ICON(DISSOLVE_EDGES)
DEF_ICON(DISSOLVE_FACES)
DEF_ICON(DISSOLVE_LIMITED)
DEF_ICON(DISSOLVE_SELECTION)
DEF_ICON(EDGE_COLLAPSE)
DEF_ICON(REMOVE_DOUBLES)

/*bfa - new icons. Tool Shelf - Edit Mode - Tools - Weight Tools*/
DEF_ICON(WEIGHT_NORMALIZE_ALL)
DEF_ICON(WEIGHT_NORMALIZE)
DEF_ICON(WEIGHT_MIRROR)
DEF_ICON(WEIGHT_INVERT)
DEF_ICON(WEIGHT_CLEAN)
DEF_ICON(WEIGHT_QUANTIZE)
DEF_ICON(WEIGHT_LEVELS)
DEF_ICON(WEIGHT_SMOOTH)
DEF_ICON(WEIGHT_LIMIT_TOTAL)
DEF_ICON(WEIGHT_FIX_DEFORMS)

DEF_ICON(SLEECT_INTERIOR)
DEF_ICON(SELECT_LOOPINNER)
DEF_ICON(SELECT_LOOSE)
DEF_ICON(SELECT_SHARPEDGES)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_161)
	DEF_ICON(extend_162)
	DEF_ICON(extend_163)
	DEF_ICON(extend_164)
	DEF_ICON(extend_165)
	DEF_ICON(extend_166)
	DEF_ICON(extend_167)
	DEF_ICON(extend_168)
	DEF_ICON(extend_169)
	DEF_ICON(extend_170)

#endif

/* ------------------------- Row 18 --------------------------*/

	/* MODIFIERS */
DEF_ICON(MODIFIER)
DEF_ICON(MOD_WAVE)
DEF_ICON(MOD_BUILD)
DEF_ICON(MOD_DECIM)
DEF_ICON(MOD_MIRROR)
DEF_ICON(MOD_SOFT)
DEF_ICON(MOD_SUBSURF)
DEF_ICON(HOOK)
DEF_ICON(MOD_PHYSICS)
DEF_ICON(MOD_PARTICLES)
DEF_ICON(MOD_BOOLEAN)
DEF_ICON(MOD_EDGESPLIT)
DEF_ICON(MOD_ARRAY)
DEF_ICON(MOD_UVPROJECT)
DEF_ICON(MOD_DISPLACE)
DEF_ICON(MOD_CURVE)
DEF_ICON(MOD_LATTICE)
DEF_ICON(CONSTRAINT_DATA)
DEF_ICON(MOD_ARMATURE)
DEF_ICON(MOD_SHRINKWRAP)
DEF_ICON(MOD_CAST)
DEF_ICON(MOD_MESHDEFORM)
DEF_ICON(MOD_BEVEL)
DEF_ICON(MOD_SMOOTH)
DEF_ICON(MOD_SIMPLEDEFORM)
DEF_ICON(MOD_MASK)

DEF_ICON(SELECT_SHORTESTPATH)
DEF_ICON(SELECT_SIDEOFACTIVE)
DEF_ICON(SELECT_UNGROUPED_VERTS)

DEF_ICON(ANGLE)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_171)
	DEF_ICON(extend_172)
	DEF_ICON(extend_173)
	DEF_ICON(extend_174)
	DEF_ICON(extend_175)
	DEF_ICON(extend_176)
	DEF_ICON(extend_177)
	DEF_ICON(extend_178)
	DEF_ICON(extend_179)
	DEF_ICON(extend_180)

#endif

/* ------------------------- Row 19 --------------------------*/

	/* MODIFIERS */
DEF_ICON(MOD_CLOTH)
DEF_ICON(MOD_EXPLODE)
DEF_ICON(MOD_FLUIDSIM)
DEF_ICON(MOD_MULTIRES)
DEF_ICON(MOD_SMOKE)
DEF_ICON(MOD_SOLIDIFY)
DEF_ICON(MOD_SCREW)
DEF_ICON(MOD_VERTEX_WEIGHT)
DEF_ICON(MOD_DYNAMICPAINT)
DEF_ICON(MOD_REMESH)
DEF_ICON(MOD_OCEAN)
DEF_ICON(MOD_WARP)
DEF_ICON(MOD_SKIN)
DEF_ICON(MOD_TRIANGULATE)
DEF_ICON(MOD_WIREFRAME)
DEF_ICON(MOD_DATA_TRANSFER)
DEF_ICON(MOD_NORMALEDIT)

DEF_ICON(DECIMATE)
DEF_ICON(DEGENERATE_DISSOLVE)
DEF_ICON(DELETE_LOOSE)
DEF_ICON(FILL_HOLE)
DEF_ICON(MAKE_PLANAR)
DEF_ICON(SPLIT_CONCAVE)
DEF_ICON(SPLIT_NONPLANAR)

DEF_ICON(MERGE)
DEF_ICON(SEPARATE)

DEF_ICON(CREASE)
DEF_ICON(FACEREGIONS)
DEF_ICON(PERIMETER)
DEF_ICON(POLYGONSIDES)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_181)
	DEF_ICON(extend_182)
	DEF_ICON(extend_183)
	DEF_ICON(extend_184)
	DEF_ICON(extend_185)
	DEF_ICON(extend_186)
	DEF_ICON(extend_187)
	DEF_ICON(extend_188)
	DEF_ICON(extend_189)
	DEF_ICON(extend_190)

#endif

/* ------------------------- Row 20 --------------------------*/
	
	/* ANIMATION */
DEF_ICON(REC)
DEF_ICON(PLAY)
DEF_ICON(FF)
DEF_ICON(REW)
DEF_ICON(PAUSE)
DEF_ICON(PREV_KEYFRAME)
DEF_ICON(NEXT_KEYFRAME)
DEF_ICON(PLAY_AUDIO)
DEF_ICON(PLAY_REVERSE)
DEF_ICON(PREVIEW_RANGE)
DEF_ICON(ACTION_TWEAK)
DEF_ICON(PMARKER_ACT)
DEF_ICON(PMARKER_SEL)
DEF_ICON(PMARKER)
DEF_ICON(MARKER_HLT)
DEF_ICON(MARKER)
DEF_ICON(SPACE2)	// XXX
DEF_ICON(SPACE3)	// XXX
DEF_ICON(KEYINGSET)
DEF_ICON(KEY_DEHLT)
DEF_ICON(KEY_HLT)
DEF_ICON(MUTE_IPO_OFF)
DEF_ICON(MUTE_IPO_ON)
DEF_ICON(VISIBLE_IPO_OFF)
DEF_ICON(VISIBLE_IPO_ON)
DEF_ICON(DRIVER)

DEF_ICON(AREA)
DEF_ICON(MIRROR_VERTEXGROUP)
DEF_ICON(SNAP_SYMMETRY)
DEF_ICON(SYMMETRIZE)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_191)
	DEF_ICON(extend_192)
	DEF_ICON(extend_193)
	DEF_ICON(extend_194)
	DEF_ICON(extend_195)
	DEF_ICON(extend_196)
	DEF_ICON(extend_197)
	DEF_ICON(extend_198)
	DEF_ICON(extend_199)
	DEF_ICON(extend_200)

#endif

/* ------------------------- Row 21 --------------------------*/

	/* ANIMATION */
DEF_ICON(SOLO_OFF)
DEF_ICON(SOLO_ON)
DEF_ICON(FRAME_PREV)
DEF_ICON(FRAME_NEXT)
DEF_ICON(NLA_PUSHDOWN)
DEF_ICON(IPO_CONSTANT)
DEF_ICON(IPO_LINEAR)
DEF_ICON(IPO_BEZIER)
DEF_ICON(IPO_SINE)
DEF_ICON(IPO_QUAD)
DEF_ICON(IPO_CUBIC)
DEF_ICON(IPO_QUART)
DEF_ICON(IPO_QUINT)
DEF_ICON(IPO_EXPO)
DEF_ICON(IPO_CIRC)
DEF_ICON(IPO_BOUNCE)
DEF_ICON(IPO_ELASTIC)
DEF_ICON(IPO_BACK)
DEF_ICON(IPO_EASE_IN)
DEF_ICON(IPO_EASE_OUT)
DEF_ICON(IPO_EASE_IN_OUT)
DEF_ICON(NORMALIZE_FCURVES) /*bfa - Name in icon set: ICON_ROTATE-7*/

DEF_ICON(LIGHT_SIZE)
DEF_ICON(LIGHT_STRENGTH)
DEF_ICON(DOF)
DEF_ICON(LENS_ANGLE)

DEF_ICON(X_ICON)
DEF_ICON(Y_ICON)
DEF_ICON(Z_ICON)
DEF_ICON(EXTEND_VERTICES)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_201)
	DEF_ICON(extend_202)
	DEF_ICON(extend_203)
	DEF_ICON(extend_204)
	DEF_ICON(extend_205)
	DEF_ICON(extend_206)
	DEF_ICON(extend_207)
	DEF_ICON(extend_208)
	DEF_ICON(extend_209)
	DEF_ICON(extend_210)

#endif

/* ------------------------- Row 22 --------------------------*/

	/* EDITING */
DEF_ICON(VERTEXSEL)
DEF_ICON(EDGESEL)
DEF_ICON(FACESEL)
DEF_ICON(LOOPSEL)

DEF_ICON(DRAWSIZE)

DEF_ICON(ROTATE)
DEF_ICON(CURSOR)
DEF_ICON(ROTATECOLLECTION)
DEF_ICON(ROTATECENTER)
DEF_ICON(ROTACTIVE)
DEF_ICON(ALIGN)

DEF_ICON(HIDE_UNSELECTED)

DEF_ICON(SMOOTHCURVE)
DEF_ICON(SPHERECURVE)
DEF_ICON(ROOTCURVE)
DEF_ICON(SHARPCURVE)
DEF_ICON(LINCURVE)
DEF_ICON(NOCURVE)
DEF_ICON(RNDCURVE)
DEF_ICON(PROP_OFF)
DEF_ICON(PROP_ON)
DEF_ICON(PROP_CON)

DEF_ICON(CLEAR_TRACK)

DEF_ICON(PARTICLE_POINT)
DEF_ICON(PARTICLE_TIP)
DEF_ICON(PARTICLE_PATH)

DEF_ICON(RIP)
DEF_ICON(RIP_FILL)
DEF_ICON(HOOK_NEW)
DEF_ICON(HOOK_SELECTED)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_211)
	DEF_ICON(extend_212)
	DEF_ICON(extend_213)
	DEF_ICON(extend_214)
	DEF_ICON(extend_215)
	DEF_ICON(extend_216)
	DEF_ICON(extend_217)
	DEF_ICON(extend_218)
	DEF_ICON(extend_219)
	DEF_ICON(extend_220)

#endif

/* ------------------------- Row 23 --------------------------*/
	
	/* EDITING */
DEF_ICON(MAN_TRANS)
DEF_ICON(MAN_ROT)
DEF_ICON(MAN_SCALE)
DEF_ICON(MANIPUL)
DEF_ICON(SNAP_OFF)
DEF_ICON(SNAP_ON)
DEF_ICON(SNAP_NORMAL)
DEF_ICON(SNAP_GRID)
DEF_ICON(SNAP_VERTEX)
DEF_ICON(SNAP_EDGE)
DEF_ICON(SNAP_FACE)
DEF_ICON(SNAP_VOLUME)
DEF_ICON(SNAP_INCREMENT)
DEF_ICON(STICKY_UVS_LOC)
DEF_ICON(STICKY_UVS_DISABLE)
DEF_ICON(STICKY_UVS_VERT)
DEF_ICON(CLIPUV_DEHLT)
DEF_ICON(CLIPUV_HLT)
DEF_ICON(SNAP_PEEL_OBJECT)
DEF_ICON(GRID)
/*bfa new icons Tool Shelf - History */
DEF_ICON(UNDO)
DEF_ICON(REDO)
DEF_ICON(REPEAT)
DEF_ICON(UNDO_HISTORY)
DEF_ICON(REDO_HISTORY)
DEF_ICON(BEVEL)

DEF_ICON(HOOK_BONE)
DEF_ICON(HOOK_ASSIGN)
DEF_ICON(HOOK_RESET)
DEF_ICON(HOOK_RECENTER)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_221)
	DEF_ICON(extend_222)
	DEF_ICON(extend_223)
	DEF_ICON(extend_224)
	DEF_ICON(extend_225)
	DEF_ICON(extend_226)
	DEF_ICON(extend_227)
	DEF_ICON(extend_228)
	DEF_ICON(extend_229)
	DEF_ICON(extend_230)

#endif

/* ------------------------- Row 24 --------------------------*/

	/* EDITING */
DEF_ICON(PASTEDOWN)
DEF_ICON(COPYDOWN)
DEF_ICON(PASTEFLIPUP)
DEF_ICON(PASTEFLIPDOWN)
// bfa -new icons ool Shelf - Edit Mode - Tools - Mesh Tools - Deform section  */
DEF_ICON(SLIDE_EDGE)
DEF_ICON(SLIDE_VERTEX)
DEF_ICON(SMOOTH_VERTEX)
DEF_ICON(LAPLACIAN_SMOOTH_VERTEX)
// ----------------
DEF_ICON(SNAP_SURFACE)
DEF_ICON(AUTOMERGE_ON)
DEF_ICON(AUTOMERGE_OFF)
DEF_ICON(RETOPO)
DEF_ICON(UV_VERTEXSEL)
DEF_ICON(UV_EDGESEL)
DEF_ICON(UV_FACESEL)
DEF_ICON(UV_ISLANDSEL)
DEF_ICON(UV_SYNC_SELECT)
// bfa -new icons Tool Shelf - Edit Mode - Tools - Mesh Tools - Deform section  */
DEF_ICON(NOISE)
DEF_ICON(RANDOMIZE)
/*bfa - new icons. Tool Shelf - Edit Mode - Tools - Mesh Tools - Add section  */
DEF_ICON(EXTRUDE_REGION)
DEF_ICON(EXTRUDE_INDIVIDUAL)
DEF_ICON(DUPLI_EXTRUDE)
DEF_ICON(DUPLI_EXTRUDE_ROTATE)
DEF_ICON(SPIN)
DEF_ICON(SCREW)
/*bfa - new icons. Tool Shelf - Edit Mode - Tools - Lattice Tools section  */
DEF_ICON(MAKE_REGULAR)

DEF_ICON(HOOK_REMOVE)
DEF_ICON(HOOK_SELECT)
DEF_ICON(BOX_MASK)
DEF_ICON(CLEAR_MASK)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_231)
	DEF_ICON(extend_232)
	DEF_ICON(extend_233)
	DEF_ICON(extend_234)
	DEF_ICON(extend_235)
	DEF_ICON(extend_236)
	DEF_ICON(extend_237)
	DEF_ICON(extend_238)
	DEF_ICON(extend_239)
	DEF_ICON(extend_240)

#endif

/* ------------------------- Row 25 --------------------------*/

	/* 3D VIEW */
DEF_ICON(BBOX)
DEF_ICON(WIRE)
DEF_ICON(SOLID)
DEF_ICON(SMOOTH)
DEF_ICON(POTATO)

DEF_ICON(TRANSFER_UV)

DEF_ICON(ORTHO)
// Bfa, new icons Tool Shelf - Tools - Transform in Edit mode
DEF_ICON(PUSH_PULL)
DEF_ICON(SHRINK_FATTEN)

// -----------
DEF_ICON(LOCKVIEW_OFF)
DEF_ICON(LOCKVIEW_ON)
// Bfa, new icons Tool Shelf - curve edit mode tilt button
DEF_ICON(TILT)

DEF_ICON(AXIS_SIDE)
DEF_ICON(AXIS_FRONT)
DEF_ICON(AXIS_TOP)
DEF_ICON(NDOF_DOM)
DEF_ICON(NDOF_TURN)
DEF_ICON(NDOF_FLY)
DEF_ICON(NDOF_TRANS)
DEF_ICON(LAYER_USED)
DEF_ICON(LAYER_ACTIVE)
// Bfa, new icons Tool Shelf - Tools - Transform
DEF_ICON(TRANSFORM_MIRROR)
DEF_ICON(TRANSFORM_MOVE)
DEF_ICON(TRANSFORM_ROTATE)
DEF_ICON(TRANSFORM_SCALE)

DEF_ICON(VERTEXBEVEL)

DEF_ICON(FILL_MASK)
DEF_ICON(INVERT_MASK)
DEF_ICON(LASSO_MASK)
DEF_ICON(BRIGHTNESS_CONTRAST)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_241)
	DEF_ICON(extend_242)
	DEF_ICON(extend_243)
	DEF_ICON(extend_244)
	DEF_ICON(extend_245)
	DEF_ICON(extend_246)
	DEF_ICON(extend_247)
	DEF_ICON(extend_248)
	DEF_ICON(extend_249)
	DEF_ICON(extend_250)

#endif

/* ------------------------- Row 26 --------------------------*/

// import export icons

DEF_ICON(LOAD_3DS)
DEF_ICON(LOAD_BVH)
DEF_ICON(LOAD_DAE)
DEF_ICON(LOAD_FBX)
DEF_ICON(LOAD_OBJ)
DEF_ICON(LOAD_PLY)
DEF_ICON(LOAD_STL)
DEF_ICON(LOAD_SVG)
DEF_ICON(LOAD_WRL)
DEF_ICON(SAVE_3DS)
DEF_ICON(SAVE_BVH)
DEF_ICON(SAVE_DAE)
DEF_ICON(SAVE_FBX)
DEF_ICON(SAVE_OBJ)
DEF_ICON(SAVE_PLY)
DEF_ICON(SAVE_STL)
DEF_ICON(SAVE_WRL)
DEF_ICON(LOAD_ABC) // alembic
DEF_ICON(SAVE_ABC) // alembic

DEF_ICON(ROTATE_MINUS_90)
DEF_ICON(ROTATE_PLUS_90)
DEF_ICON(MIRROR_X)
DEF_ICON(MIRROR_Y)
DEF_ICON(MIRROR_Z)

DEF_ICON(LIBRARY)
DEF_ICON(LIBRARY_OBJECT)

DEF_ICON(DIRTY_VERTEX)
DEF_ICON(HUESATVAL)
DEF_ICON(LEVELS)
DEF_ICON(SELECT_SIMILAR)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_251)
	DEF_ICON(extend_252)
	DEF_ICON(extend_253)
	DEF_ICON(extend_254)
	DEF_ICON(extend_255)
	DEF_ICON(extend_256)
	DEF_ICON(extend_257)
	DEF_ICON(extend_258)
	DEF_ICON(extend_259)
	DEF_ICON(extend_260)

#endif

/* ------------------------- Row 27  --------------------------*/

	/* FILE SELECT */
DEF_ICON(SORTALPHA)
DEF_ICON(SORTBYEXT)
DEF_ICON(SORTTIME)
DEF_ICON(SORTSIZE)
DEF_ICON(LONGDISPLAY)
DEF_ICON(SHORTDISPLAY)
DEF_ICON(GHOST)
DEF_ICON(IMGDISPLAY)
DEF_ICON(SAVE_AS)
DEF_ICON(SAVE_COPY)
DEF_ICON(BOOKMARKS)
DEF_ICON(FONTPREVIEW)
DEF_ICON(FILTER)
DEF_ICON(NEWFOLDER)
DEF_ICON(OPEN_RECENT)
DEF_ICON(FILE_PARENT)
DEF_ICON(FILE_REFRESH)
DEF_ICON(FILE_FOLDER)
DEF_ICON(FILE_BLANK)
DEF_ICON(FILE_BLEND)
DEF_ICON(FILE_IMAGE)
DEF_ICON(FILE_MOVIE)
DEF_ICON(FILE_SCRIPT)
DEF_ICON(FILE_SOUND)
DEF_ICON(FILE_FONT)
DEF_ICON(FILE_TEXT)

DEF_ICON(SELECT_FIRST)
DEF_ICON(SELECT_LAST)
DEF_ICON(CONTROLPOINTROW)
DEF_ICON(MAKE_CURVESEGMENT)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_261)
	DEF_ICON(extend_262)
	DEF_ICON(extend_263)
	DEF_ICON(extend_264)
	DEF_ICON(extend_265)
	DEF_ICON(extend_266)
	DEF_ICON(extend_267)
	DEF_ICON(extend_268)
	DEF_ICON(extend_269)
	DEF_ICON(extend_270)

#endif

/* ------------------------- Row 28 --------------------------*/

	/* FILE SELECT */
DEF_ICON(RECOVER_AUTO)
DEF_ICON(SAVE_PREFS)
DEF_ICON(LINK_BLEND)
DEF_ICON(APPEND_BLEND)
DEF_ICON(IMPORT)
DEF_ICON(EXPORT)
DEF_ICON(EXTERNAL_DATA)
DEF_ICON(LOAD_FACTORY)

DEF_ICON(APPLYMOVEDELTA)
DEF_ICON(APPLYROTATEDELTA)
DEF_ICON(APPLYSCALEDELTA)
DEF_ICON(APPLYALLDELTA)
DEF_ICON(APPLYANIDELTA)

DEF_ICON(LOOP_BACK)
DEF_ICON(LOOP_FORWARDS)
DEF_ICON(BACK)
DEF_ICON(FORWARD)

DEF_ICON(ALIGNCAMERA_ACTIVE)
DEF_ICON(ALIGNCAMERA_VIEW)
DEF_ICON(CENTERTOCURSOR)
DEF_ICON(LOCK_CLEAR)
DEF_ICON(LOCKTOACTIVE)
DEF_ICON(LOCKTOCENTER)

DEF_ICON(FILE_HIDDEN)
DEF_ICON(FILE_BACKUP)
DEF_ICON(DISK_DRIVE)

DEF_ICON(SMOOTH_RADIUS)
DEF_ICON(SMOOTH_TILT)
DEF_ICON(SMOOTH_WEIGHT)
DEF_ICON(CLEAR_TILT)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_271)
	DEF_ICON(extend_272)
	DEF_ICON(extend_273)
	DEF_ICON(extend_274)
	DEF_ICON(extend_275)
	DEF_ICON(extend_276)
	DEF_ICON(extend_277)
	DEF_ICON(extend_278)
	DEF_ICON(extend_279)
	DEF_ICON(extend_280)

#endif
/* ------------------------- Row 29 --------------------------*/
	
	/* SHADING / TEXT */
DEF_ICON(MATPLANE)
DEF_ICON(MATSPHERE)
DEF_ICON(MATCUBE)
DEF_ICON(MONKEY)
DEF_ICON(HAIR)
DEF_ICON(ALIASED)
DEF_ICON(ANTIALIASED)
DEF_ICON(MAT_SPHERE_SKY)

DEF_ICON(MOVE_TEXTURESPACE)
DEF_ICON(SCALE_TEXTURESPACE)
DEF_ICON(RANDOMIZE_TRANSFORM)
DEF_ICON(ALIGN_TRANSFORM)

DEF_ICON(WORDWRAP_OFF)
DEF_ICON(WORDWRAP_ON)
DEF_ICON(SYNTAX_OFF)
DEF_ICON(SYNTAX_ON)
DEF_ICON(LINENUMBERS_OFF)
DEF_ICON(LINENUMBERS_ON)
DEF_ICON(SCRIPTPLUGINS)		// XXX CREATE NEW
/*BFA - new icons. Text in 3d view. Tools Panel Edit Mode */
DEF_ICON(BOLD)
DEF_ICON(ITALIC)
DEF_ICON(UNDERLINED)
DEF_ICON(SET_LOWERCASE)
DEF_ICON(SET_UPPERCASE)
DEF_ICON(SMALL_CAPS)
DEF_ICON(SET_FROM_FACES)

DEF_ICON(CUT)
DEF_ICON(PASTEFILE)
DEF_ICON(CIRCLE)
DEF_ICON(COPYRIGHT)

DEF_ICON(YEN)

#ifndef DEF_ICON_BLANK_SKIP

	DEF_ICON(extend_282)
	DEF_ICON(extend_283)
	DEF_ICON(extend_284)
	DEF_ICON(extend_285)
	DEF_ICON(extend_286)
	DEF_ICON(extend_287)
	DEF_ICON(extend_288)
	DEF_ICON(extend_289)
	DEF_ICON(extend_290)

#endif

	/* ------------------------- Row 30 --------------------------*/
	
	/* SEQUENCE / IMAGE EDITOR */
DEF_ICON(SEQ_SEQUENCER)
DEF_ICON(SEQ_PREVIEW)
DEF_ICON(SEQ_LUMA_WAVEFORM)
DEF_ICON(SEQ_CHROMA_SCOPE)
DEF_ICON(SEQ_HISTOGRAM)
DEF_ICON(SEQ_SPLITVIEW)

DEF_ICON(NEXTACTIVE)
DEF_ICON(PREVIOUSACTIVE)
DEF_ICON(BRUSH_RESET)

DEF_ICON(IMAGE_RGB)	// XXX CHANGE TO STRAIGHT ALPHA, Z ETC
DEF_ICON(IMAGE_RGB_ALPHA)
DEF_ICON(IMAGE_ALPHA)
DEF_ICON(IMAGE_ZDEPTH)
DEF_ICON(IMAGEFILE)

/*bfa -snap icons */
DEF_ICON(CURSORTOACTIVE)
DEF_ICON(CURSORTOCENTER)
DEF_ICON(CURSORTOGRID)
DEF_ICON(CURSORTOSELECTION)
DEF_ICON(SELECTIONTOCURSOROFFSET)
DEF_ICON(SELECTIONTOACTIVE)
DEF_ICON(SELECTIONTOCURSOR)
DEF_ICON(SELECTIONTOGRID)
DEF_ICON(CURSOR_TO_PIXELS)
DEF_ICON(SNAP_TO_ADJACENT)
DEF_ICON(SNAP_TO_PIXELS)
DEF_ICON(PATTERN)

DEF_ICON(DEGREE)
DEF_ICON(DOUBLE_LEFT)
DEF_ICON(DOUBLE_RIGHT)
DEF_ICON(DUTCH_FLORIN)

DEF_ICON(GERMAN_S)
DEF_ICON(MULTIPLICATION)
DEF_ICON(POUND)
DEF_ICON(PROMILLE)
DEF_ICON(SPANISH_EXCLAMATION)
DEF_ICON(SPANISH_QUESTION)
DEF_ICON(SUPER_ONE)
DEF_ICON(SUPER_TWO)
DEF_ICON(SUPER_THREE)
DEF_ICON(TRADEMARK)

/*----------------- newline END OF ICONSHEET -------------------------------------*/

	/* brush icons */

DEF_ICON(BRUSH_ADD)
DEF_ICON(BRUSH_BLOB)
DEF_ICON(BRUSH_BLUR)
DEF_ICON(BRUSH_CLAY)
DEF_ICON(BRUSH_CLAY_STRIPS)
DEF_ICON(BRUSH_CLONE)
DEF_ICON(BRUSH_CREASE)
DEF_ICON(BRUSH_DARKEN)
DEF_ICON(BRUSH_FILL)
DEF_ICON(BRUSH_FLATTEN)
DEF_ICON(BRUSH_GRAB)
DEF_ICON(BRUSH_INFLATE)
DEF_ICON(BRUSH_LAYER)
DEF_ICON(BRUSH_LIGHTEN)
DEF_ICON(BRUSH_MASK)
DEF_ICON(BRUSH_MIX)
DEF_ICON(BRUSH_MULTIPLY)
DEF_ICON(BRUSH_NUDGE)
DEF_ICON(BRUSH_PINCH)
DEF_ICON(BRUSH_SCRAPE)
DEF_ICON(BRUSH_SCULPT_DRAW)
DEF_ICON(BRUSH_SMEAR)
DEF_ICON(BRUSH_SMOOTH)
DEF_ICON(BRUSH_SNAKE_HOOK)
DEF_ICON(BRUSH_SOFTEN)
DEF_ICON(BRUSH_SUBTRACT)
DEF_ICON(BRUSH_TEXDRAW)
DEF_ICON(BRUSH_TEXFILL)
DEF_ICON(BRUSH_TEXMASK)
DEF_ICON(BRUSH_THUMB)
DEF_ICON(BRUSH_ROTATE)
DEF_ICON(BRUSH_VERTEXDRAW)

	/* Matcaps */
DEF_ICON(MATCAP_01)
DEF_ICON(MATCAP_02)
DEF_ICON(MATCAP_03)
DEF_ICON(MATCAP_04)
DEF_ICON(MATCAP_05)
DEF_ICON(MATCAP_06)
DEF_ICON(MATCAP_07)
DEF_ICON(MATCAP_08)
DEF_ICON(MATCAP_09)
DEF_ICON(MATCAP_10)
DEF_ICON(MATCAP_11)
DEF_ICON(MATCAP_12)
DEF_ICON(MATCAP_13)
DEF_ICON(MATCAP_14)
DEF_ICON(MATCAP_15)
DEF_ICON(MATCAP_16)
DEF_ICON(MATCAP_17)
DEF_ICON(MATCAP_18)
DEF_ICON(MATCAP_19)
DEF_ICON(MATCAP_20)
DEF_ICON(MATCAP_21)
DEF_ICON(MATCAP_22)
DEF_ICON(MATCAP_23)
DEF_ICON(MATCAP_24)

/* vector icons, VICO_ prefix added */
DEF_VICO(SMALL_TRI_RIGHT_VEC)

DEF_VICO(KEYTYPE_KEYFRAME_VEC)
DEF_VICO(KEYTYPE_BREAKDOWN_VEC)
DEF_VICO(KEYTYPE_EXTREME_VEC)
DEF_VICO(KEYTYPE_JITTER_VEC)
DEF_VICO(KEYTYPE_MOVING_HOLD_VEC)

DEF_VICO(COLORSET_01_VEC)
DEF_VICO(COLORSET_02_VEC)
DEF_VICO(COLORSET_03_VEC)
DEF_VICO(COLORSET_04_VEC)
DEF_VICO(COLORSET_05_VEC)
DEF_VICO(COLORSET_06_VEC)
DEF_VICO(COLORSET_07_VEC)
DEF_VICO(COLORSET_08_VEC)
DEF_VICO(COLORSET_09_VEC)
DEF_VICO(COLORSET_10_VEC)
DEF_VICO(COLORSET_11_VEC)
DEF_VICO(COLORSET_12_VEC)
DEF_VICO(COLORSET_13_VEC)
DEF_VICO(COLORSET_14_VEC)
DEF_VICO(COLORSET_15_VEC)
DEF_VICO(COLORSET_16_VEC)
DEF_VICO(COLORSET_17_VEC)
DEF_VICO(COLORSET_18_VEC)
DEF_VICO(COLORSET_19_VEC)
DEF_VICO(COLORSET_20_VEC)
