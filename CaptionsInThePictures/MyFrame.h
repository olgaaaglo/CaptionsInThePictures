///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/menu.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame
{
	private:

	protected:
		wxButton* m_btnChooseDirectory;
		wxRichTextCtrl* m_tbExifInfo;
		wxMenuBar* m_menubar2;
		wxMenu* m_menuSave;
		wxMenu* m_menuLoad;
		wxMenu* m_menuInfo;

		// Virtual event handlers, overide them in your derived class
		virtual void m_btnChooseDirectoryOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_itemExportToTxtOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_itemExportToImageOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuLoadCaptionsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_menuAuthorsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1030,533 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame();

};

