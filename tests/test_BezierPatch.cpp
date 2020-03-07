#include <catch2/catch.hpp>
#include <iostream>

#include <nanospline/BezierPatch.h>

#include "validation_utils.h"

TEST_CASE("BeizerPatch", "[nonrational][bezier_patch]") {
    using namespace nanospline;
    using Scalar = double;

    SECTION("Bilinear patch") {
        BezierPatch<Scalar, 3, 1, 1> patch;
        Eigen::Matrix<Scalar, 4, 3> control_grid;
        control_grid <<
            0.0, 0.0, 0.0,
            1.0, 0.0, 0.0,
            0.0, 1.0, 0.0,
            1.0, 1.0, 0.0;
        patch.set_control_grid(control_grid);

        REQUIRE(patch.get_degree_u() == 1);
        REQUIRE(patch.get_degree_v() == 1);

        const auto corner_00 = patch.evaluate(0.0, 0.0);
        const auto corner_01 = patch.evaluate(0.0, 1.0);
        const auto corner_11 = patch.evaluate(1.0, 1.0);
        const auto corner_10 = patch.evaluate(1.0, 0.0);
        REQUIRE((corner_00 - control_grid.row(0)).norm() == Approx(0.0));
        REQUIRE((corner_10 - control_grid.row(1)).norm() == Approx(0.0));
        REQUIRE((corner_01 - control_grid.row(2)).norm() == Approx(0.0));
        REQUIRE((corner_11 - control_grid.row(3)).norm() == Approx(0.0));

        const auto p_mid = patch.evaluate(0.5, 0.5);
        REQUIRE(p_mid[0] == Approx(0.5));
        REQUIRE(p_mid[1] == Approx(0.5));
        REQUIRE(p_mid[2] == Approx(0.0));

        validate_derivative(patch, 10, 10);
    }

    SECTION("Bilinear patch non-planar") {
        BezierPatch<Scalar, 3, 1, 1> patch;
        Eigen::Matrix<Scalar, 4, 3> control_grid;
        control_grid <<
            0.0, 0.0, 0.0,
            1.0, 0.0, 1.0,
            0.0, 1.0, 1.0,
            1.0, 1.0, 0.0;
        patch.set_control_grid(control_grid);

        REQUIRE(patch.get_degree_u() == 1);
        REQUIRE(patch.get_degree_v() == 1);

        const auto corner_00 = patch.evaluate(0.0, 0.0);
        const auto corner_01 = patch.evaluate(0.0, 1.0);
        const auto corner_11 = patch.evaluate(1.0, 1.0);
        const auto corner_10 = patch.evaluate(1.0, 0.0);
        REQUIRE((corner_00 - control_grid.row(0)).norm() == Approx(0.0));
        REQUIRE((corner_10 - control_grid.row(1)).norm() == Approx(0.0));
        REQUIRE((corner_01 - control_grid.row(2)).norm() == Approx(0.0));
        REQUIRE((corner_11 - control_grid.row(3)).norm() == Approx(0.0));

        const auto p_mid = patch.evaluate(0.5, 0.5);
        REQUIRE(p_mid[0] == Approx(0.5));
        REQUIRE(p_mid[1] == Approx(0.5));
        REQUIRE(p_mid[2] == Approx(0.5));

        validate_derivative(patch, 10, 10);
    }

    SECTION("Cubic patch") {
        BezierPatch<Scalar, 3, 3, 3> patch;
        Eigen::Matrix<Scalar, 16, 3> control_grid;
        for (int i=0; i<4; i++) {
            for (int j=0; j<4; j++) {
                control_grid.row(i*4+j) << j, i, ((i+j)%2==0)?-1:1;
            }
        }
        patch.set_control_grid(control_grid);

        const auto corner_00 = patch.evaluate(0.0, 0.0);
        const auto corner_01 = patch.evaluate(0.0, 1.0);
        const auto corner_11 = patch.evaluate(1.0, 1.0);
        const auto corner_10 = patch.evaluate(1.0, 0.0);
        REQUIRE((corner_00 - control_grid.row(0)).norm() == Approx(0.0));
        REQUIRE((corner_10 - control_grid.row(3)).norm() == Approx(0.0));
        REQUIRE((corner_01 - control_grid.row(12)).norm() == Approx(0.0));
        REQUIRE((corner_11 - control_grid.row(15)).norm() == Approx(0.0));

        SECTION("Isocurves") {
            for (int i=0; i<=10; i++) {
                for (int j=0; j<=10; j++) {
                    const Scalar u = 0.1 * i;
                    const Scalar v = 0.1 * j;
                    auto u_curve = patch.compute_iso_curve_u(v);
                    auto v_curve = patch.compute_iso_curve_v(u);
                    auto p = patch.evaluate(u, v);
                    auto p1 = u_curve.evaluate(u);
                    auto p2 = v_curve.evaluate(v);
                    REQUIRE((p-p1).norm() == Approx(0.0).margin(1e-6));
                    REQUIRE((p-p2).norm() == Approx(0.0).margin(1e-6));
                }
            }
        }

        validate_derivative(patch, 10, 10);
    }
}
