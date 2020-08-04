mkdir doc_tmp
cd ../../
call scons -j6 platform=windows vsproj=yes
cd bin
godot.windows.tools.64.exe --doctool "./../modules/libsndfile/doc_tmp"
rmdir "./../modules/libsndfile/doc_classes" /q /s 
xcopy "./../modules/libsndfile/doc_tmp/modules/libsndfile/doc_classes" "./../modules/libsndfile/doc_classes" /e /i /h
rmdir "./../modules/libsndfile/doc_tmp" /q /s 
cmd