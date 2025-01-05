#line 2 "src/App.h"

#ifndef __VNCRASBERRY_APP_H___
#define __VNCRASBERRY_APP_H___

#include <Wt/Http/Cookie.h>
#include <Wt/WApplication.h>
#include <Wt/WBootstrapTheme.h>
#include <Wt/WBreak.h>
#include <Wt/WDateTime.h>
#include <Wt/WEnvironment.h>
#include <Wt/WHBoxLayout.h>
#include <Wt/WLayout.h>
#include <Wt/WLineEdit.h>
#include <Wt/WServer.h>
#include <Wt/WTabWidget.h>
#include <Wt/WText.h>
#include <Wt/WVBoxLayout.h>

namespace VnCrasberry {

  namespace Gui {
    class MainWidget;
  }

class App
: public Wt::WApplication
{
public:
  App(const Wt::WEnvironment& env);
 ~App();

  static std::unique_ptr< Wt::WApplication > createApplication( const Wt::WEnvironment & env )
  {
    auto retVal = std::make_unique< App >( env );

    return retVal;

  } // endstatic std::unique_ptr< Wt::WApplication > createApplication( const Wt::WEnvironment & env )

  auto buildSite()      -> void;

}; // endclass App

} // endnamespace VnCrasberry {

#endif // __VNCRASBERRY_APP_H___



