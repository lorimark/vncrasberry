#line 2 "src/main.cpp"

#include "App.h"

int main( int argc, char ** argv )
{
  Wt::WLayout::setDefaultImplementation( Wt::LayoutImplementation::JavaScript );

  Wt::WRun( argc, argv, &VnCrasberry::App::createApplication );

  return 0;

} // endint main( int argc, char ** argv )


