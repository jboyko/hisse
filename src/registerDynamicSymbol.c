#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>


/* .C calls */
extern void initmod_bisse();
extern void initmod_hisse();
extern void initmod_hisse_null();
extern void initmod_geosse();
extern void initmod_geohisse();
extern void initmod_noclass();
extern void initmod_hinoclass();
extern void initmod_musse();
extern void initmod_muhisse();

extern void maddison_DE_bisse(void *, void *, void *, void *, void *, void *);
extern void maddison_DE_hisse(void *, void *, void *, void *, void *, void *);
extern void maddison_DE_hisse_null(void *, void *, void *, void *, void *, void *);
extern void classe_geosse_equivalent_derivs(void *, void *, void *, void *, void *, void *);
extern void geohisse_derivs(void *, void *, void *, void *, void *, void *);
extern void notclasse_derivs(void *, void *, void *, void *, void *, void *);
extern void notclasse_more_derivs(void *, void *, void *, void *, void *, void *);
extern void musse_derivs(void *, void *, void *, void *, void *, void *);
extern void muhisse_derivs(void *, void *, void *, void *, void *, void *);

extern void set_birth_bisse_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void set_birth_hisse_null_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void set_birth_hisse_void(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"initmod_bisse",                   (DL_FUNC) &initmod_bisse,                   0},
    {"initmod_hisse",                   (DL_FUNC) &initmod_hisse,                   0},
    {"initmod_hisse_null",              (DL_FUNC) &initmod_hisse_null,              0},
    {"initmod_geosse",		            (DL_FUNC) &initmod_geosse,                  0},
    {"initmod_geohisse",		        (DL_FUNC) &initmod_geohisse,                0},
    {"initmod_noclass",		            (DL_FUNC) &initmod_noclass,                 0},
    {"initmod_hinoclass",		        (DL_FUNC) &initmod_hinoclass,               0},
    {"initmod_musse",		            (DL_FUNC) &initmod_musse,                   0},
    {"initmod_muhisse",		            (DL_FUNC) &initmod_muhisse,                 0},
    {"maddison_DE_bisse",               (DL_FUNC) &maddison_DE_bisse,               6},
    {"maddison_DE_hisse",               (DL_FUNC) &maddison_DE_hisse,               6},
    {"maddison_DE_hisse_null",          (DL_FUNC) &maddison_DE_hisse_null,          6},
    {"classe_geosse_equivalent_derivs", (DL_FUNC) &classe_geosse_equivalent_derivs, 6},
    {"geohisse_derivs",                 (DL_FUNC) &geohisse_derivs,                 6},
    {"notclasse_derivs",                (DL_FUNC) &notclasse_derivs,                6},
    {"notclasse_more_derivs",           (DL_FUNC) &notclasse_more_derivs,           6},
    {"musse_derivs",                    (DL_FUNC) &musse_derivs,                    6},
    {"muhisse_derivs",                  (DL_FUNC) &muhisse_derivs,                  6},
    {"set_birth_bisse_void",            (DL_FUNC) &set_birth_bisse_void,           29},
    {"set_birth_hisse_null_void",       (DL_FUNC) &set_birth_hisse_null_void,      54},
    {"set_birth_hisse_void",            (DL_FUNC) &set_birth_hisse_void,           59},
    {NULL, NULL, 0}
};

void R_init_hisse(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
