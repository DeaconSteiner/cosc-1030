// DArea.hpp
// Kim Buckner
// COSC 1030
// Lecture 09
// Declarations/prototypes for some simple area computation functions.

// These ensure declarations aren't repeated.
// NOTE: it is valid to have multiple *declarations*, given they are identicle
// but it is NOT valid to have multiple definitions.
// Since this header only *declares* functions, it could be inlcuded multiple
// times with no error.  See notes below on when the inlcude guards ARE required.
#ifndef DAREA_HPP
#define DAREA_HPP
// #pragma once

double	discArea(double);
double	ringArea(double, double);
double	DWallVol(double, double,double);

//If this header *declares* a struct or class, e.g.
// struct A;
// class B;
//then the guards aren't needed, but if they declare AND define the struct, e.g.
// struct A {};
// class B {};
//then multiple inlcusions will result in errors.
//The same is true for functions, if the header happens to both declare and define
//a function.
//Note that file scoped "global" variables, e.g.
// int a;
//are both delcared and defined in the statement, so this would require include guards
//as well.

#endif
