typedef struct{char *name; long sig; void (*fn)(void*); int size; int np; uchar map[16];} Runtab;
Runtab Drawmodtab[]={
	"Rect.Xrect",0xd1fbcdc0,Rect_Xrect,64,0,{0},
	"Point.add",0x95a87a7,Point_add,48,0,{0},
	"Rect.addpt",0xbcba91ad,Rect_addpt,56,0,{0},
	"Display.allocate",0x74694470,Display_allocate,40,2,{0x0,0x80,},
	"Screen.allocate",0x1e813b8a,Screen_allocate,48,2,{0x0,0xc0,},
	"Image.arc",0x1685a04e,Image_arc,80,2,{0x0,0x82,},
	"Image.arcop",0x8521de24,Image_arcop,80,2,{0x0,0x82,},
	"Image.arrow",0x7b3fc6d3,Image_arrow,48,0,{0},
	"Font.bbox",0x541e2d08,Font_bbox,40,2,{0x0,0xc0,},
	"Image.bezier",0x5baca124,Image_bezier,96,3,{0x0,0x80,0x8,},
	"Image.bezierop",0xae13ba0e,Image_bezierop,96,3,{0x0,0x80,0x8,},
	"Image.bezspline",0x70f06194,Image_bezspline,64,2,{0x0,0xc4,},
	"Image.bezsplineop",0x94b3bea1,Image_bezsplineop,72,2,{0x0,0xc4,},
	"Image.border",0x59381f67,Image_border,72,2,{0x0,0x82,},
	"Image.bottom",0x642fa8b1,Image_bottom,40,2,{0x0,0x80,},
	"Screen.bottom",0xe2817b5f,Screen_bottom,40,2,{0x0,0xc0,},
	"Font.build",0x7fddba2c,Font_build,48,2,{0x0,0xe0,},
	"bytesperline",0xab1724b2,Draw_bytesperline,56,0,{0},
	"Rect.canon",0xe969971c,Rect_canon,48,0,{0},
	"Rect.clip",0x1ad68a89,Rect_clip,64,0,{0},
	"Display.cmap2rgb",0xda836903,Display_cmap2rgb,40,2,{0x0,0x80,},
	"Display.cmap2rgba",0xa64b341,Display_cmap2rgba,40,2,{0x0,0x80,},
	"Display.color",0xac54c4aa,Display_color,40,2,{0x0,0x80,},
	"Display.colormix",0x9e941050,Display_colormix,48,2,{0x0,0x80,},
	"Rect.combine",0x35d786ac,Rect_combine,64,0,{0},
	"Rect.contains",0x5f13af31,Rect_contains,56,0,{0},
	"Chans.depth",0x90b71a6,Chans_depth,40,0,{0},
	"Point.div",0x7f0ac44e,Point_div,48,0,{0},
	"Image.draw",0xe2951762,Image_draw,72,2,{0x0,0x86,},
	"Image.drawop",0x7e2751d3,Image_drawop,72,2,{0x0,0x86,},
	"Rect.dx",0x8db540cc,Rect_dx,48,0,{0},
	"Rect.dy",0x8db540cc,Rect_dy,48,0,{0},
	"Image.ellipse",0xea6f2000,Image_ellipse,72,2,{0x0,0x82,},
	"Image.ellipseop",0xc0af34c6,Image_ellipseop,72,2,{0x0,0x82,},
	"Chans.eq",0x2ba41fd4,Chans_eq,40,0,{0},
	"Point.eq",0xd0634e59,Point_eq,48,0,{0},
	"Rect.eq",0xd1fbcdc0,Rect_eq,64,0,{0},
	"Image.fillarc",0x784ac6f8,Image_fillarc,72,2,{0x0,0x84,},
	"Image.fillarcop",0xbbcdbdd,Image_fillarcop,80,2,{0x0,0x84,},
	"Image.fillbezier",0x4a07ed44,Image_fillbezier,88,3,{0x0,0x80,0x20,},
	"Image.fillbezierop",0xb3796aa0,Image_fillbezierop,88,3,{0x0,0x80,0x20,},
	"Image.fillbezspline",0x4aac99aa,Image_fillbezspline,56,2,{0x0,0xd0,},
	"Image.fillbezsplineop",0x6288a256,Image_fillbezsplineop,64,2,{0x0,0xd0,},
	"Image.fillellipse",0xc2961c2b,Image_fillellipse,64,2,{0x0,0x84,},
	"Image.fillellipseop",0x9816222d,Image_fillellipseop,72,2,{0x0,0x84,},
	"Image.fillpoly",0x4aac99aa,Image_fillpoly,56,2,{0x0,0xd0,},
	"Image.fillpolyop",0x6288a256,Image_fillpolyop,64,2,{0x0,0xd0,},
	"Image.flush",0xb09fc26e,Image_flush,40,2,{0x0,0x80,},
	"Image.gendraw",0xa30a11c7,Image_gendraw,80,3,{0x0,0x84,0x80,},
	"Image.gendrawop",0x3e8228a,Image_gendrawop,80,3,{0x0,0x84,0x80,},
	"Display.getwindow",0xdfbf1d73,Display_getwindow,56,2,{0x0,0xf0,},
	"icossin",0x10ea0ce,Draw_icossin,40,0,{0},
	"icossin2",0xd07585f7,Draw_icossin2,40,0,{0},
	"Point.in",0xcf69adf9,Point_in,56,0,{0},
	"Rect.inrect",0xd1fbcdc0,Rect_inrect,64,0,{0},
	"Rect.inset",0x1fabb24,Rect_inset,56,0,{0},
	"Image.line",0x7288c7b9,Image_line,80,3,{0x0,0x80,0x80,},
	"Image.lineop",0xe34363b9,Image_lineop,80,3,{0x0,0x80,0x80,},
	"Chans.mk",0xadae6aad,Chans_mk,40,2,{0x0,0x80,},
	"Point.mul",0x7f0ac44e,Point_mul,48,0,{0},
	"Image.name",0xdff53107,Image_name,48,2,{0x0,0xc0,},
	"Display.namedimage",0x47522dfe,Display_namedimage,40,2,{0x0,0xc0,},
	"Display.newimage",0xb8479988,Display_newimage,64,2,{0x0,0x80,},
	"Screen.newwindow",0xcf19f7a8,Screen_newwindow,64,2,{0x0,0x80,},
	"Display.open",0x47522dfe,Display_open,40,2,{0x0,0xc0,},
	"Font.open",0xddcb2ff0,Font_open,40,2,{0x0,0xc0,},
	"Image.origin",0x9171b0bd,Image_origin,56,2,{0x0,0x80,},
	"Image.poly",0x70f06194,Image_poly,64,2,{0x0,0xc4,},
	"Image.polyop",0x94b3bea1,Image_polyop,72,2,{0x0,0xc4,},
	"Display.publicscreen",0x507e0780,Display_publicscreen,40,2,{0x0,0x80,},
	"Display.readimage",0xd38f4d48,Display_readimage,40,2,{0x0,0xc0,},
	"Image.readpixels",0x93d30c7c,Image_readpixels,56,2,{0x0,0x84,},
	"Display.rgb",0x8e71a513,Display_rgb,48,2,{0x0,0x80,},
	"Display.rgb2cmap",0xbf6c3d95,Display_rgb2cmap,48,2,{0x0,0x80,},
	"setalpha",0x6584767b,Draw_setalpha,40,0,{0},
	"Rect.size",0x3ecfd83e,Rect_size,48,0,{0},
	"Display.startrefresh",0xf0df9cae,Display_startrefresh,40,2,{0x0,0x80,},
	"Point.sub",0x95a87a7,Point_sub,48,0,{0},
	"Rect.subpt",0xbcba91ad,Rect_subpt,56,0,{0},
	"Chans.text",0xb20b7b7b,Chans_text,40,0,{0},
	"Image.text",0xa5927686,Image_text,64,2,{0x0,0x93,},
	"Image.textbg",0xbbb55403,Image_textbg,80,3,{0x0,0x93,0x80,},
	"Image.textbgop",0xea84ed21,Image_textbgop,80,3,{0x0,0x93,0x80,},
	"Image.textop",0x22b71b43,Image_textop,72,2,{0x0,0x93,},
	"Image.top",0x642fa8b1,Image_top,40,2,{0x0,0x80,},
	"Screen.top",0xe2817b5f,Screen_top,40,2,{0x0,0xc0,},
	"Font.width",0x1c70cba4,Font_width,40,2,{0x0,0xc0,},
	"Display.writeimage",0x7bd53940,Display_writeimage,48,2,{0x0,0xe0,},
	"Image.writepixels",0x93d30c7c,Image_writepixels,56,2,{0x0,0x84,},
	0
};
#define Drawmodlen	89