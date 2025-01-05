#line 2 "src/App.cpp"

#include <iostream>

#include "VnCrasberry.h"
#include "App.h"

VnCrasberry::App::
~App()
{
//  std::cout << __FILE__ << ":" << __LINE__ << " " << __FUNCTION__ << "(): terminated " << (void*)this << std::endl;

} // end~App()


VnCrasberry::App::
App( const Wt::WEnvironment& env )
: WApplication( env )
{
//  std::cout << __FILE__ << ":" << __LINE__ << " " << __FUNCTION__ << "(): begin " << (void*)this << std::endl;

  setTitle( "VnCrasberry" );

  /*
  ** get the normal theme responsive stuff hooked in
  **
  */
  auto bootstrapTheme = std::make_shared<Wt::WBootstrapTheme>();
  bootstrapTheme-> setVersion( Wt::BootstrapVersion::v3 );
  bootstrapTheme-> setResponsive(true);
  setTheme( bootstrapTheme );
  useStyleSheet( "resources/themes/bootstrap/2/bootstrap-responsive.css" );

  /*
  ** set up the style sheets and resource bundles
  **
  */
  useStyleSheet( "styles/VnCrasberry.css" );
  messageResourceBundle().use( appRoot() + "VnCrasberry" );

  buildSite();

} // endApp( const Wt::WEnvironment& env )

auto VnCrasberry::App::
buildSite()-> void
{
  root()-> clear();
  root()-> setObjectName( "VnCrasberry" );

  auto lw = root()-> setLayout( std::make_unique< Wt::WVBoxLayout >() );

  {
    auto w_ = std::make_unique< Wt::WText >( ".VnCrasberry." );
    w_-> setToolTip( "VNC bridge/forwarder" );
    lw-> addWidget( std::move( w_ ) );
  }

} // endbuildSite()-> void


