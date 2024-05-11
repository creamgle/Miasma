project "Sandbox"
    kind "ConsoleApp"
    language "C"

    targetdir("%{wks.location}/bin/%{prj.name}")
    objdir("%{wks.location}/bin/obj/%{prj.name}")

    files {
        "source/**.h",
        "source/**.c"
    }

    includedirs {
        "%{Includes.Miasma}"
    }

    links {
        "Miasma"
    }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"

        filter "configurations:Debug"
        defines "RELEASE"
        optimize "On"
