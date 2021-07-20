return function()
	sysincludedirs {
		'third_party/.config',
		'third_party/llvm-project/llvm/include',
	}
	files {
		'third_party/.scu/libllvm/*',
	}

	filter 'toolset:msc'
		buildoptions {
			'/bigobj',
		}
		disablewarnings {
			'4244',
			'4267',
			'4996',
		}
end
