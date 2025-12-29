#include "Particle.hpp"

namespace csc2026 {

Particle::Particle(double px, double py, double pz, double mass)
    : m_px(px), m_py(py), m_pz(pz), m_mass(mass) {}

double Particle::pt() const {
    return std::sqrt(m_px * m_px + m_py * m_py);
}

double Particle::energy() const {
    const double p2 = m_px * m_px + m_py * m_py + m_pz * m_pz;
    return std::sqrt(p2 + m_mass * m_mass);
}

} // namespace csc2026

