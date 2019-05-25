typedef NS_ENUM(NSInteger, GEOCelestialBody) {
    GEOCelestialBodySun,
    GEOCelestialBodyMercury,
    GEOCelestialBodyVenus,
    GEOCelestialBodyEarth, /* many data points will not be valid for this case, trying to observe Earth from Earth is not logical */
    GEOCelestialBodyMoon,
    GEOCelestialBodyMars,
    GEOCelestialBodyJupiter,
    GEOCelestialBodySaturn,
    GEOCelestialBodyUranus,
    GEOCelestialBodyNeptune,
    GEOCelestialBodyPluto
};
