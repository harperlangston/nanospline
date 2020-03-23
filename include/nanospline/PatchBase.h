#pragma once

#include <cassert>
#include <Eigen/Core>

namespace nanospline {

template<typename _Scalar, int _dim>
class PatchBase {
    public:
        using Scalar = _Scalar;
        using Point = Eigen::Matrix<Scalar, 1, _dim>;
        using ControlGrid = Eigen::Matrix<Scalar, Eigen::Dynamic, _dim>;

    public:
        virtual ~PatchBase() = default;
        virtual Point evaluate(Scalar u, Scalar v) const =0;
        virtual Point evaluate_derivative_u(Scalar u, Scalar v) const=0;
        virtual Point evaluate_derivative_v(Scalar u, Scalar v) const=0;
        virtual void initialize() =0;

    public:
        void set_degree_u(int degree) {
            m_degree_u = degree;
        }

        void set_degree_v(int degree) {
            m_degree_v = degree;
        }

        int get_degree_u() const {
            assert(m_degree_v > 0);
            return m_degree_u;
        }

        int get_degree_v() const {
            assert(m_degree_v > 0);
            return m_degree_v;
        }

        const ControlGrid& get_control_grid() const {
            return m_control_grid;
        }

        template<typename Derived>
        void set_control_grid(const Eigen::PlainObjectBase<Derived>& ctrl_grid) {
            m_control_grid = ctrl_grid;
        }

        template<typename Derived>
        void set_control_grid(Eigen::PlainObjectBase<Derived>&& ctrl_grid) {
            m_control_grid.swap(ctrl_grid);
        }

        template<typename Derived>
        void swap_control_grid(Eigen::PlainObjectBase<Derived>& ctrl_grid) {
            m_control_grid.swap(ctrl_grid);
        }

    protected:
        int m_degree_u = -1;
        int m_degree_v = -1;
        ControlGrid m_control_grid;
};

}
