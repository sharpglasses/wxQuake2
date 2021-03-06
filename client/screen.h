/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// screen.h

void	SCR_Init (void);

void	SCR_UpdateScreen (void);

void	SCR_SizeUp (void);
void	SCR_SizeDown (void);
void	SCR_CenterPrint (char *str);

#ifdef __WXWINDOWS__
// This routines are are used to implement "background" level-loading in
// wxQuake2.  As long as SCR_IsLoadingInBackground is true, Quake 2 will be
// allowed to run, even if backgrounded.  SCR_EndLoadingInBackground is
// automatically called by SCR_EndLoadingPlaque.
void    SCR_BeginLoadingInBackground();
void    SCR_EndLoadingInBackground();
qboolean SCR_IsLoadingInBackground();
#endif // __WXWINDOWS__

void	SCR_BeginLoadingPlaque (void);
void	SCR_EndLoadingPlaque (void);

void	SCR_DebugGraph (float value, int color);

void	SCR_TouchPics (void);

void	SCR_RunConsole (void);

extern	float		scr_con_current;
extern	float		scr_conlines;		// lines of console to display

extern	int			sb_lines;

extern	cvar_t		*scr_viewsize;
extern	cvar_t		*crosshair;

extern	vrect_t		scr_vrect;		// position of render window

extern	char		crosshair_pic[MAX_QPATH];
extern	int			crosshair_width, crosshair_height;

#ifdef IML_Q2_EXTENSIONS
#define MAX_R_TEXT (256)
extern  char        scr_r_text[MAX_R_TEXT];
extern  vec3_t      scr_r_origin;
extern  vec3_t      scr_r_angles;
extern  vec3_t      scr_r_mins;
extern  vec3_t      scr_r_maxs;
#endif // IML_Q2_EXTENSIONS

void SCR_AddDirtyPoint (int x, int y);
void SCR_DirtyScreen (void);

//
// scr_cin.c
//
void SCR_PlayCinematic (char *name);
qboolean SCR_DrawCinematic (void);
void SCR_RunCinematic (void);
void SCR_StopCinematic (void);
void SCR_FinishCinematic (void);

