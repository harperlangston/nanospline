/**
 * This code is automatically generated by scripts/singularity.py
 */

#pragma once
#include <cassert>
#include <vector>

#include <nanospline/internal/auto_singularity_Bezier.h>
#include <nanospline/internal/auto_singularity_RationalBezier.h>

namespace nanospline {
namespace internal {


#if defined(HIGH_DEGREE_SUPPORT) || 2 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_RationalBezier_degree_2_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2,
        Scalar w0, Scalar w1, Scalar w2,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 2 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_RationalBezier_degree_2_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2,
        Scalar w0, Scalar w1, Scalar w2,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 3 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_RationalBezier_degree_3_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3,
        Scalar w0, Scalar w1, Scalar w2, Scalar w3,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 3 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_RationalBezier_degree_3_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3,
        Scalar w0, Scalar w1, Scalar w2, Scalar w3,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 4 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_RationalBezier_degree_4_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4,
        Scalar w0, Scalar w1, Scalar w2, Scalar w3, Scalar w4,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 4 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_RationalBezier_degree_4_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4,
        Scalar w0, Scalar w1, Scalar w2, Scalar w3, Scalar w4,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 2 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_2_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 2 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_2_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 3 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_3_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 3 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_3_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 4 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_4_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 4 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_4_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 5 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_5_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 5 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_5_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 6 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_6_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 6 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_6_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 7 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_7_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 7 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_7_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 8 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_8_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 8 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_8_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 9 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_9_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8, Scalar cx9, Scalar cy9,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 9 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_9_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8, Scalar cx9, Scalar cy9,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


#if defined(HIGH_DEGREE_SUPPORT) || 10 < 5
#define Scalar double
extern template
std::vector<Scalar> compute_Bezier_degree_10_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8, Scalar cx9, Scalar cy9, Scalar cx10, Scalar cy10,
        Scalar t0,
        Scalar t1);
#undef Scalar

#if 10 < 10
#define Scalar float
extern template
std::vector<Scalar> compute_Bezier_degree_10_singularities(
        Scalar cx0, Scalar cy0, Scalar cx1, Scalar cy1, Scalar cx2, Scalar cy2, Scalar cx3, Scalar cy3, Scalar cx4, Scalar cy4, Scalar cx5, Scalar cy5, Scalar cx6, Scalar cy6, Scalar cx7, Scalar cy7, Scalar cx8, Scalar cy8, Scalar cx9, Scalar cy9, Scalar cx10, Scalar cy10,
        Scalar t0,
        Scalar t1);
#undef Scalar
#endif
#endif


} // End internal namespace
} // End nanospline namespace

