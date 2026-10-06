@echo off
REM Zafi x64-debug configure + build a VS Developer kornyezetben.
REM Ezt hivja a VS Code "Zafi Build x64-debug" task (F5 elott automatikusan).
call "C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 1
"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" --preset x64-debug
if errorlevel 1 exit /b 1
"C:\Program Files\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" --build out/build/x64-debug
