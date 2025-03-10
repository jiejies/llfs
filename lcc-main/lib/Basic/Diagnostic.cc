/***********************************
 * File:     Diagnostic.cc
 *
 *
 *
 ***********************************/

#include "lcc/Basic/Diagnostic.h"

namespace lcc {
namespace {
const char *DiagnosticText[] = {
#define DIAG(ID, Level, Msg) Msg,
#include "lcc/Basic/Diagnostic.def"
};
llvm::SourceMgr::DiagKind DiagnosticKind[] = {
#define DIAG(ID, Level, Msg) llvm::SourceMgr::DK_##Level,
#include "lcc/Basic/Diagnostic.def"
};
}
const char *DiagnosticEngine::getDiagnosticText(unsigned int DiagID) {
  return DiagnosticText[DiagID];
}

llvm::SourceMgr::DiagKind DiagnosticEngine::getDiagnosticKind(unsigned int DiagID) {
  return DiagnosticKind[DiagID];
}
}