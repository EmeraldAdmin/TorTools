; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "TorTools"
#define MyAppVersion "0.2.3b.win32.pre"
#define MyAppPublisher "EmeralDev"
#define MyAppURL "http://emeraldev.com"
#define MyAppExeName "TorTools.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{204B52C9-DCB8-4DA6-BF5B-7102C6C44C1D}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
LicenseFile=C:\Users\Zach\Documents\Source\TorTools\skel\License.txt
InfoBeforeFile=C:\Users\Zach\Documents\Source\TorTools\skel\REAMDE.txt
OutputDir=C:\Users\Zach\Documents\Source\TorTools\deploy
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\Zach\Documents\Source\TorTools\release\TorTools.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\libgcc_s_dw2-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\mingwm10.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\msvcr90.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\QtCore4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\QtGui4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\QtNetwork4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\release\QtWebKit4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\Zach\Documents\Source\TorTools\skel\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

