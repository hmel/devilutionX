#pragma once

namespace devilution {

bool UiSelHeroYesNoDialog(const char *title, const char *body);
void selyesno_Free();
void selyesno_Select(int value);
void selyesno_Esc();

} // namespace devilution
