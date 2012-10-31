; Drush make file for yarragreens.org, Drupal 7.x.

; Core

core = 7.x
api = 2
projects[drupal][version] = 7

; Modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3

projects[auto_nodetitle][subdir] = contrib
projects[auto_nodetitle][version] = 1.0

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.3

projects[coder][subdir] = contrib
projects[coder][version] = 1.0

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta4

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc3

projects[filefield_paths][subdir] = contrib
projects[filefield_paths][version] = 1.0-beta3

projects[filefield_sources][subdir] = contrib
projects[filefield_sources][version] = 1.6

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 1.2

projects[libraries][subdir] = contrib
projects[libraries][version] = 1.0

projects[nodequeue][subdir] = contrib
projects[nodequeue][version] = 2.0-beta1

projects[panels][subdir] = contrib
projects[panels][version] = 3.3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[quicktabs][subdir] = contrib
projects[quicktabs][version] = 3.4

projects[switchtheme][subdir] = contrib
projects[switchtheme][version] = 1.0

projects[taxonomy_display][subdir] = contrib
projects[taxonomy_display][version] = 1.0

projects[token][subdir] = contrib
projects[token][version] = 1.3

projects[views][subdir] = contrib
projects[views][version] = 3.5

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2

; Base theme

projects[omega][subdir] = contrib
projects[omega][version] = 3.1

; Libraries

projects[profiler][type] = libraries
projects[profiler][version] = 2.0-beta1

libraries[ckeditor][type] = libraries
libraries[ckeditor][download][type] = file
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.5/ckeditor_3.6.5.tar.gz
