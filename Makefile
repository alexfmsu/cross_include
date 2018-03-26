fix:
	git filter-branch --env-filter \
	    'if [ $GIT_COMMIT = 4afcb74d9be9a92a924b06ec6427b6025916cb48 ] \ 
	     then \ 
	         export GIT_AUTHOR_DATE="Fri Jan 2 21:38:53 2009 -0800"\ 
	         export GIT_COMMITTER_DATE="Sat May 19 01:01:01 2007 -0700"\ 
	     fi'