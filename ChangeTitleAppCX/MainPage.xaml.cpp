//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace ChangeTitleAppCX;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

	auto const btn1 = ref new Button(); 
	btn1->Content = L"AAA"; 
	btn1->Click += ref new RoutedEventHandler([](Object^, RoutedEventArgs^) { 
		Windows::UI::ViewManagement::ApplicationView::GetForCurrentView()->Title = L"AAA"; 
		}); 
	auto const btn2 = ref new Button(); 
	btn2->Content = L"aaa"; 
	btn2->Click += ref new RoutedEventHandler([](Object^, RoutedEventArgs^) { 
		Windows::UI::ViewManagement::ApplicationView::GetForCurrentView()->Title = L"aaa"; 
		}); 
	auto const btn3 = ref new Button(); 
	btn3->Content = L"123"; 
	btn3->Click += ref new RoutedEventHandler([](Object^, RoutedEventArgs^) { 
		Windows::UI::ViewManagement::ApplicationView::GetForCurrentView()->Title = L"123"; 
		}); 
	auto const panel = ref new StackPanel(); 
	panel->Children->Append(btn1); 
	panel->Children->Append(btn2); 
	panel->Children->Append(btn3); 
	Content = panel;
}
