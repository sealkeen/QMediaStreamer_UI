## Overview
### JSON-DB based application aimed to support cross-platform audio streaming / listening experience.

## To be implemented
### Functional
- Music Explorer: Create music library and edit its content (e.g. tags, albums, genres, artists);
- Users data / Music Storage Database;
- ASP.NET Core WebServer / WebService with links to the music files stored on a remote server.
	
### Current versions support :
- WPF .Net 4.0 builds for Windows;
- WPF .Net Core 3.1 build for Windows;
- .NetStandard Xamarin Forms several component's support (in development);

## Usage - output:
- Compile the application using QtCreator and Qt5.8 with MinGW 5.3.0 for your target platform and run from build directory.
- Play a song from JSON that has been prviously provided by MediaStreamer.WPF.NetCore3_1 application or created manually.

## Current Tasks (TODO's):

### Overall //TODO: 
- Refactor into separate Methods those that consist more than of 16-21 lines;
- Delete unused code (if it's obsolete / not working);
- Connect WebScrobbler from Last.FM and its WEB APIs;
- Implement "Return to previous state (Composition / Player Position)" when application's closed and re-opened.
	
### RAMControl 
- Cross-compile for all platforms
	
### Modilbe / Overall
- (v) Implement the "Player functionality" on "Browse" page:
		Stop, Pause, Next, Previous;
- Implement slider bar to scroll playing compositions;
- Implement "Queue" from XamarinMediaManager project (allow queueing compositions);
- Implement "Video" page in Xamarin Forms;
- Implement "ListenedCompositions / UserCompositions" Model, ViewModel, View 
- (Load ListenedCompositions from DataBase, register the user's composition into database when composition is playing, see the WPF project for example code).
	
### IO:
- Implement "Play several songs cross-platformely"


