
#ifndef __READINIT_H__
#define __READINIT_H__

#include "revolt.h"
#include "model.h"
#include "Particle.h"
#include "NewColl.h"
#include "Body.h"
#include "Wheel.h"
#include "Aerial.h"
#include "car.h"

/////////////////////////////////////////////////////////////////////
//
// Stuff to read in the initial data for the cars
//
/////////////////////////////////////////////////////////////////////

#define READ_MAX_WORDLEN	256
#define READ_COMMENT_CHAR	';'

static bool ReadWord(char *buf, FILE *fp);
static bool ReadFileName(char *name, FILE *fp);
static bool ReadInt(int *n, FILE *fp);
static bool ReadBool(bool *b, FILE *fp);
static bool ReadReal(REAL *real, FILE *fp);
static bool ReadVec(VEC *vec, FILE *fp);
static bool ReadMat(MAT *mat, FILE *fp);
static int ReadNumberList(int *numList, int maxNum, FILE *fp);

static bool Compare(char *word, char *token);

static void SetCarDefaults(CAR *car);
static bool ReadCarInfo(FILE *fp);
static bool ReadWheelInfo(FILE *fp);
static bool ReadBodyInfo(FILE *fp);
static bool ReadAerialInfo(FILE *fp);
static bool ReadSpringInfo(FILE *fp);
static bool ReadAxleInfo(FILE *fp);
static bool ReadSpinnerInfo(FILE *fp);
static bool ReadPinInfo(FILE *fp);
static int  UnknownWordMessage(char *word);
static void InvalidVariable(char *object);
static void ShowErrorMessage(char *word);
static void InvalidNumberList(char *object);

extern bool ReadAllCarInfo(char *fileName);


#endif
