##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Arqueiro
ConfigurationName      :=Debug
WorkspacePath          :=C:/Prog2/Repositorios/Jogo
ProjectPath            :=C:/Prog2/Repositorios/Jogo/Arqueiro
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Thaina
Date                   :=18/04/2019
CodeLitePath           :="C:/Program Files (x86)/CodeL"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Arqueiro.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeL
Objects0=$(IntermediateDirectory)/Flecha.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arco.cpp$(ObjectSuffix) $(IntermediateDirectory)/Intern.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arqueiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Flecha.cpp$(ObjectSuffix): Flecha.cpp $(IntermediateDirectory)/Flecha.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Prog2/Repositorios/Jogo/Arqueiro/Flecha.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Flecha.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Flecha.cpp$(DependSuffix): Flecha.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Flecha.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Flecha.cpp$(DependSuffix) -MM Flecha.cpp

$(IntermediateDirectory)/Flecha.cpp$(PreprocessSuffix): Flecha.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Flecha.cpp$(PreprocessSuffix) Flecha.cpp

$(IntermediateDirectory)/Arco.cpp$(ObjectSuffix): Arco.cpp $(IntermediateDirectory)/Arco.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Prog2/Repositorios/Jogo/Arqueiro/Arco.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arco.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arco.cpp$(DependSuffix): Arco.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arco.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arco.cpp$(DependSuffix) -MM Arco.cpp

$(IntermediateDirectory)/Arco.cpp$(PreprocessSuffix): Arco.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arco.cpp$(PreprocessSuffix) Arco.cpp

$(IntermediateDirectory)/Intern.cpp$(ObjectSuffix): Intern.cpp $(IntermediateDirectory)/Intern.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Prog2/Repositorios/Jogo/Arqueiro/Intern.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Intern.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Intern.cpp$(DependSuffix): Intern.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Intern.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Intern.cpp$(DependSuffix) -MM Intern.cpp

$(IntermediateDirectory)/Intern.cpp$(PreprocessSuffix): Intern.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Intern.cpp$(PreprocessSuffix) Intern.cpp

$(IntermediateDirectory)/Arqueiro.cpp$(ObjectSuffix): Arqueiro.cpp $(IntermediateDirectory)/Arqueiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Prog2/Repositorios/Jogo/Arqueiro/Arqueiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arqueiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arqueiro.cpp$(DependSuffix): Arqueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arqueiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arqueiro.cpp$(DependSuffix) -MM Arqueiro.cpp

$(IntermediateDirectory)/Arqueiro.cpp$(PreprocessSuffix): Arqueiro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arqueiro.cpp$(PreprocessSuffix) Arqueiro.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Prog2/Repositorios/Jogo/Arqueiro/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


