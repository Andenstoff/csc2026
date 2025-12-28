// CSC Latin America 2026 - Particle class
// Header-only declarations. Implementations live in src/Particle.cpp.

#pragma once

#include <cmath>

namespace csc2026 {

class Particle {
public:
    // Default: "empty" particle
    Particle() = default;

    // 3-momentum components (GeV) and rest mass (GeV)
    Particle(double px, double py, double pz, double mass);

    // Accessors
    double px() const { return m_px; }
    double py() const { return m_py; }
    double pz() const { return m_pz; }
    double mass() const { return m_mass; }

    // Derived kinematics
    double pt() const;
    double p() const;
    double energy() const;
    double phi() const;
    double eta() const;

    // Four-vector addition (E computed from (p,m))
    Particle operator+(const Particle& other) const;

private:
    double m_px{0.0};
    double m_py{0.0};
    double m_pz{0.0};
    double m_mass{0.0};
};

// Invariant mass of two particles (GeV)
double invariantMass(const Particle& p1, const Particle& p2);

} // namespace csc2026
