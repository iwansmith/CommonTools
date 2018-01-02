#include "ROOT_SpecialCout.h"


using namespace std;

std::ostream& operator<< (std::ostream& lhs, TH1* rhs)
{

  using namespace std;


  const int bins = rhs->GetNbinsX();

  const float MinX = rhs->GetXaxis()->GetXmin();
  const float ManX = rhs->GetXaxis()->GetXmax();

  const float MaxY = rhs->GetMaximum();
  const float MinY = rhs->GetMinimum();

  lhs << "Name: " << rhs->GetName() << "  Title: " << rhs->GetTitle() << endl;



  for( int y = bins; y >= 0; y-=2)
  {

    if (y%10 == 0)
      lhs << setw(10) << std::right << MinY + (float)y/bins * (MaxY - MinY) << '|';
    else
      lhs << setw(11) << "|";

    for( int x = 0; x < bins; x++)
    {
      char pixel = '#';
      if ( rhs->GetBinContent(x+1) < (MinY + (float)y/bins * (MaxY - MinY)) )
        pixel = ' ';

      lhs << pixel;
    }
    lhs << endl;

  }

  lhs << setw(11) << '+';
  for( int x = 0; x < bins; x++)
  {
    lhs << '-';
  }

  lhs << endl;

  return lhs;
}


