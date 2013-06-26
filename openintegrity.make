;
; openintegrity-build.make
;

api = 2
core = 7.x

; Include make-generate results
;includes[] = https://raw.github.com/iilab/openintegrity/master/openintegrity-base.make
includes[] = openintegrity-base.make

; Open Integrity Feature
projects[openintegrity][download][type] = "git"
projects[openintegrity][download][url] = "https://github.com/iilab/openintegrity.git"
projects[openintegrity][type] = "module"
projects[openintegrity][version] = "1.0-dev"