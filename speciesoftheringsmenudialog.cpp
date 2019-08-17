#include "speciesoftheringsmenudialog.h"

#include <cassert>
#include <iostream>

#include <boost/lexical_cast.hpp>

ribi::SpeciesOfTheRingsMenuDialog::SpeciesOfTheRingsMenuDialog()
{

}

int ribi::SpeciesOfTheRingsMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 1;
  }
  std::cout << GetHelp() << '\n';
  return 1;
}

ribi::About ribi::SpeciesOfTheRingsMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "SpeciesOfTheRings",
    "simulation ring species",
    "the 27th of May 2015",
    "2015-2015",
    "http://www.richelbilderbeek.nl/ToolSpeciesOfTheRings.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

ribi::Help ribi::SpeciesOfTheRingsMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {
      //Help::Option('b',"bin","decimal number to be converted to/from Gray code"),
      //Help::Option('d',"dec","decimal number to be converted to/from Gray code")
    },
    {
      //"GrayCoder -d 123456",
      //"GrayCoder -b 010101"
    }
  );
}
