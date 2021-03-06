#ifndef _HadronSpectra_PlotSimTracks_h_
#define _HadronSpectra_PlotSimTracks_h_

#include <fstream>

namespace edm { class Event; class EventSetup; }
class TrackingRecHit;
class TrackerGeometry;
class CaloGeometry;
class PSimHit;

class PlotSimTracks
{
  public:
    explicit PlotSimTracks(const edm::EventSetup& es, std::ofstream& file_);
    ~PlotSimTracks();
    void printSimTracks(const edm::Event& ev);

  private:
    std::ofstream& file;
    const TrackerGeometry* theTracker;
    const CaloGeometry* theCaloGeometry;
};

#endif
