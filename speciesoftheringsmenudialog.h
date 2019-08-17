#ifndef SPECIESOFTHERINGSMENUDIALOG_H
#define SPECIESOFTHERINGSMENUDIALOG_H

#include <string>
#include <vector>

#include "about.h"
#include "help.h"
#include "menudialog.h"

namespace ribi {

struct SpeciesOfTheRingsMenuDialog final : public MenuDialog
{
  SpeciesOfTheRingsMenuDialog();
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

};

} //~namespace ribi

#endif // SPECIESOFTHERINGSMENUDIALOG_H
