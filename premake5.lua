workspace "Miasma_Workspace"
    configurations { "Debug", "Release" }

Includes = {}
Includes["Miasma"] = "%{wks.location}/Miasma/include"

include "Miasma"
include "Sandbox"