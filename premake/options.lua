
-- Add switch to target iOS instead of macOS
if _TARGET_OS == 'macosx' then
	newoption {
		trigger     = 'ios',
		description = 'Target iOS'
	}
end

-- Add switch to include LLVM TableGen projects in the build
newoption {
	trigger     = 'tablegen',
	description = 'Toggle LLVM TableGen builds',
}
