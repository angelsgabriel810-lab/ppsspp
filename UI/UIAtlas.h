#pragma once

#include "Common/UI/Context.h"
#include "Common/Render/TextureAtlas.h"

const Atlas *GetFontAtlas();
Atlas *GetUIAtlas();
// --- BOUTONS XBOX ---
extern int I_XBOX_BTN_A;
extern int I_XBOX_BTN_B;
extern int I_XBOX_BTN_X;
extern int I_XBOX_BTN_Y;
extern int I_XBOX_LB;
extern int I_XBOX_LT;
extern int I_XBOX_RB;
extern int I_XBOX_RT;
extern int I_XBOX_GUIDE;
AtlasData AtlasProvider(Draw::DrawContext *draw, AtlasChoice atlas, float dpiScale, bool invalidate);
