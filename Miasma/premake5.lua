project "Miasma"
    kind "SharedLib"
    language "C"

    targetdir("%{wks.location}/bin/%{prj.name}")
    objdir("%{wks.location}/bin/obj/%{prj.name}")

    files {
        "include/**.h",
        "source/**.c"
    }

    includedirs {
        "include"
    }

    defines {
        "M_EXPORT"
    }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"

        filter "configurations:Debug"
        defines "RELEASE"
        optimize "On"
