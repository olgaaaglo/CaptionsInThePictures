#ifndef __CaptionsMyFrame__
#define __CaptionsMyFrame__

/**
@file
Subclass of MyFrame, which is generated by wxFormBuilder.
*/

#include "MyFrame.h"

//// end generated include
#include <wx/dirdlg.h>
#include <wx/dir.h>
#include <wx/choicdlg.h>
#include <wx/filedlg.h>
#include <wx/msgdlg.h>
#include <wx/wfstream.h>
#include <wx/textfile.h>
#include <wx/dcmemory.h>
#include <exiv2/exiv2.hpp>

#include <iomanip>
#include <cassert>
#include <sstream>
#include <memory>
#include<vector>

#include"LoadedImage.h"

/** Implementing MyFrame */
class CaptionsMyFrame : public MyFrame
{
	protected:
		// Handlers for MyFrame events.
		void m_btnChooseDirectoryOnButtonClick( wxCommandEvent& event );
		void m_itemExportToTxtOnMenuSelection( wxCommandEvent& event );
		void m_itemExportToImageOnMenuSelection( wxCommandEvent& event );
		void m_menuLoadCaptionsOnMenuSelection( wxCommandEvent& event );
		void m_menuAuthorsOnMenuSelection( wxCommandEvent& event );
	public:
		/** Constructor */
		CaptionsMyFrame( wxWindow* parent );
	//// end generated class members
	std::vector<std::string> getImages(const wxString& dirPath);

	wxSizer* m_leftSizer = m_btnChooseDirectory->GetContainingSizer();
	wxGridSizer* m_buttonsSizer = nullptr;
	wxScrolledWindow* m_scrolledWindow = nullptr;

private:
	std::pair <wxString, bool> openSelectWindow(int index);
	void openSaveWindow(int index, const std::stringstream& toSave);
	int isFilename(std::string str) const;

	std::vector <std::unique_ptr<LoadedImage>> m_loadedImages;
	std::vector <wxString> m_name;












};

#endif // __CaptionsMyFrame__
