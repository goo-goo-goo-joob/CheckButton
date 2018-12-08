/* zgl.h -- interface of the 'zgl' general purpose graphics library
  version 0.4.2, November 24th, 2018

  Copyright (C) 2010-2018 Stanislav A. Bulgakov

  This program is freely distributable without licensing fees and is
  provided without guarantee or warrantee expressed or implied. This
  program is -not- in the public domain.
*/

#ifndef ZGL_H
#define ZGL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef    ZGL_SHARED
# define  ZGL_EXTERN extern
# ifndef  ZGL_IMPORT
#  define ZGL_EXPORT __declspec(dllimport)
# else  /*ZGL_IMPORT*/
#  define ZGL_EXPORT __declspec(dllexport)
# endif /*ZGL_IMPORT*/
#endif  /*ZGL_SHARED*/


#ifndef   ZGL_EXTERN
# define  ZGL_EXTERN extern
#endif  /*ZGL_EXTERN*/
#ifndef   ZGL_EXPORT
# define  ZGL_EXPORT
#endif  /*ZGL_EXPORT*/


#define ZGL_VERSION "0.4.2"
#define ZGL_VERNUM 0x0420
#define ZGL_VER_MAJOR 0
#define ZGL_VER_MINOR 4
#define ZGL_VER_REVISION 2
#define ZGL_VER_SUBREVISION 0



ZGL_EXTERN int ZGL_EXPORT zgl_CreateWindow(int width, int height,
                                                      const char *title);
ZGL_EXTERN int ZGL_EXPORT zgl_Main(void);

ZGL_EXTERN void ZGL_EXPORT zgl_LoadFont(const char * name);
ZGL_EXTERN void ZGL_EXPORT zgl_DrawString(int x, int y, const char *str);



enum ZGL_COLORS
{
  ZGL_BLACK		= 0x00,
  ZGL_BLUE		= 0x01,
  ZGL_GREEN		= 0x02,
  ZGL_CYAN		= 0x03,
  ZGL_RED		= 0x04,
  ZGL_MAGENTA		= 0x05,
  ZGL_BROWN		= 0x06,
  ZGL_GRAY		= 0x07,
  ZGL_DARKGRAY		= 0x08,
  ZGL_LIGHTBLUE		= 0x09,
  ZGL_LIGHTGREEN	= 0x0A,
  ZGL_LIGHTCYAN		= 0x0B,
  ZGL_LIGHTRED		= 0x0C,
  ZGL_LIGHTMAGENTA	= 0x0D,
  ZGL_YELLOW		= 0x0E,
  ZGL_BRIGHTWHITE	= 0x0F
};



ZGL_EXTERN void ZGL_EXPORT zgl_SetFontColor(enum ZGL_COLORS color);
ZGL_EXTERN void ZGL_EXPORT zgl_SetWindowColor(enum ZGL_COLORS color);
ZGL_EXTERN void ZGL_EXPORT zgl_SetDrawColor(enum ZGL_COLORS color);

ZGL_EXTERN void ZGL_EXPORT zgl_DrawLine(int x1, int y1, int x2, int y2);
ZGL_EXTERN void ZGL_EXPORT zgl_DrawCircle(int cx, int cy, int r);
ZGL_EXTERN void ZGL_EXPORT zgl_DrawArc(int cx, int cy, int r,
                                                       int deg1, int deg2);
ZGL_EXTERN void ZGL_EXPORT zgl_DrawRect(int x1, int y1, int w, int h);
ZGL_EXTERN void ZGL_EXPORT zgl_FontTable(int x, int y, const char *str);

ZGL_EXTERN void ZGL_EXPORT zgl_SetTimer(unsigned int ms, void (*f)(void));

ZGL_EXTERN void ZGL_EXPORT zgl_SetUserDrawFunction(void (*f)(void));

ZGL_EXTERN void ZGL_EXPORT zgl_SetUserMouseFunction(
                                 void (*f)(unsigned int button, int x, int y));


#ifdef __cplusplus
}
#endif

#endif/*ZGL_H*/

