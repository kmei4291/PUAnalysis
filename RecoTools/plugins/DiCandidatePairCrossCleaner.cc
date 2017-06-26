#include "PUAnalysis/RecoTools/interface/CompositePtrCandidateT1T2MEtCrossCleaner.h"

#include "DataFormats/Candidate/interface/Candidate.h" 

//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATJetPair> PATMuMuJJQuadCrossCleaner; 
typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATDiTauPair> PATMuMuTauTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATMuTauPair> PATMuMuMuTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATElecTauPair> PATMuMuEleTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATElecMuPair> PATMuMuEleMuQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATElecPair> PATMuMuEleEleQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATMuPair, PATMuPair> PATMuMuMuMuQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATElecTauPair> PATEleEleEleTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATDiTauPair> PATEleEleTauTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATElecPair> PATEleEleEleEleQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATMuTauPair> PATEleEleMuTauQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATElecMuPair> PATEleEleEleMuQuadCrossCleaner;
//typedef CompositePtrCandidateT1T2MEtCrossCleaner<PATElecPair, PATMuPair> PATEleEleMuMuQuadCrossCleaner;

#include "FWCore/Framework/interface/MakerMacros.h"

//DEFINE_FWK_MODULE(PATMuMuJJQuadCrossCleaner); 
//DEFINE_FWK_MODULE(PATMuMuMuTauQuadCrossCleaner);
DEFINE_FWK_MODULE(PATMuMuTauTauQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATMuMuEleTauQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATMuMuEleMuQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATMuMuEleEleQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATMuMuMuMuQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleEleTauQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleTauTauQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleEleEleQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleMuTauQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleEleMuQuadCrossCleaner);
//DEFINE_FWK_MODULE(PATEleEleMuMuQuadCrossCleaner);