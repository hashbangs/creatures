-- practice file for macros and vertical edit (CTRL-v) in vim

-- in normal mode, q1 records a macro in 1
-- @1 uses macro stored in 1

local repos = {}

repos[1] = "core"
repos[2] = "extra"
repos[3] = "multilib"
repos[4] = "multilib-testing"

local editors = {}

editors[1] = "vi"
editors[2] = "vim"
editors[3] = "ed"
editors[4] = "ex"
editors[5] = "nano"
editors[6] = "nvim"
editors[7] = "emacs"

local initsystems = {
  "systemd",
  "openrc",
  "runit"
}

function index(a)
  for i = 1,200 do
    if a[i] ~= nil then
      print (a[i])
    end
  end
  print ("")
end

index(repos)
index(initsystems)
index(editors)
