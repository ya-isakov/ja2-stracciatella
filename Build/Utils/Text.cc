#include "Text.h"

wchar_t ItemNames[MAXITEMS][SIZE_ITEM_NAME];
wchar_t ShortItemNames[MAXITEMS][SIZE_SHORT_ITEM_NAME];

/** Get list of strings which contains sets of characters from many lanuguages. */
std::vector<const wchar_t*> getCharacterSets()
{
  std::vector<const wchar_t*> set;
  set.push_back(L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");                       // English
  set.push_back(L"ÀàÂâÆæÇçÉéÈèÊêËëÎîÏïÔôŒœÙùÛûÜüŸÿ");                                           // French extra
  set.push_back(L"ÄäÖöÜüß");                                                                    // German extra
  set.push_back(L"óèî");                                                                        // Italian extra
  set.push_back(L"ĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUWYZŹŻaąbcćdeęfghijklłmnńoóprsśtuwyzźż");            // Polish
  set.push_back(L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя");         // Russian
  set.push_back(L"01234567890-+=_~`!@#$%^&*()<>,./?':;|");                                      // Symbols
  return set;
}
