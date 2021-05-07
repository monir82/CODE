set nocompatible              " be iMproved, required
set noswapfile
filetype off                  " required
inoremap <C-j> <left>
nnoremap <C-i> <Up>
nnoremap <C-k> <Down>
nnoremap <C-j> <left>
nnoremap <C-l> <Right>
nnoremap <C-0> <End>
inoremap <C-k> <Down>
inoremap <C-i> <Up>
inoremap <A-m> <ESC>
inoremap <C-l> <Right>
inoremap <C-w> <Esc>:w :q <CR>
nnoremap <c-q> :q! <CR>
inoremap {<CR>  {<CR>}<Esc>O
nnoremap <C-S-Up> :m-2<CR>
nnoremap <C-S-Down> :m+<CR>
inoremap <C-S-Up> <Esc>:m-2<CR>
inoremap <C-S-Down> <Esc>:m+<CR>
vnoremap <S-Down> :m '>+1<CR>gv=gv
vnoremap <S-Up> :m '<-2<CR>gv=gv
imap <C-a><Esc> ggVG
nnoremap <C-a> ggVG
nnoremap <C-c> "*yy (might be because I'm in visual mode here?)
nnoremap <C-v> p
autocmd vimEnter *.cpp map <F9> :w <CR> :!clear; xterm -e 'g++ -g % -o %:r && ./%:r && echo &&  echo Press ENTER to continue &&  read line && exit'<CR><CR>
" autocmd vimEnter *.cpp map <F8> :w <CR> :!clear ; g++ --std=c++17 %; if [ -f a.out ]; then time ./a.out; rm a.out; fi <CR>
set ignorecase
set smartcase
autocmd ColorScheme * highlight LineNr cterm=bold  term=bold gui=bold guifg=#e6e5e5
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
"Comment Section
let s:comment_map = { 
    \   "c": '\/\/',
    \   "cpp": '\/\/',
    \   "go": '\/\/',
    \   "java": '\/\/',
    \   "javascript": '\/\/',
    \   "lua": '--',
    \   "scala": '\/\/',
    \   "php": '\/\/',
    \   "python": '#',
    \   "ruby": '#',
    \   "rust": '\/\/',
    \   "sh": '#',
    \   "desktop": '#',
    \   "fstab": '#',
    \   "conf": '#',
    \   "profile": '#',
    \   "bashrc": '#',
    \   "bash_profile": '#',
    \   "mail": '>',
    \   "eml": '>',
    \   "bat": 'REM',
    \   "ahk": ';',
    \   "vim": '"',
    \   "tex": '%',
    \ }

function! ToggleComment()
    if has_key(s:comment_map, &filetype)
        let comment_leader = s:comment_map[&filetype]
        if getline('.') =~ "^\\s*" . comment_leader . " " 
            execute "silent s/^\\(\\s*\\)" . comment_leader . " /\\1/"
        else 
            if getline('.') =~ "^\\s*" . comment_leader
                execute "silent s/^\\(\\s*\\)" . comment_leader . "/\\1/"
            else
                execute "silent s/^\\(\\s*\\)/\\1" . comment_leader . " /"
            end
        end
    else
        echo "No comment leader found for filetype"
    end
endfunction


nnoremap <leader>/ :call ToggleComment()<cr>
vnoremap <leader>/ :call ToggleComment()<cr>

"Comment section
"
inoremap <c-p> <End>
inoremap <F8> <Esc> :w <CR> :!clear ; g++ --std=c++17 %; if [ -f a.out ]; then time ./a.out; rm a.out; fi <CR>
nnoremap <c-s> :w<CR>
inoremap <c-s> <Esc>:w<CR>l
vnoremap <c-s> <Esc>:w<CR>

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
" all plugina
" Plugin 'Valloric/YouCompleteMe'
Plugin 'jacoborus/tender.vim'
Plugin 'vim-syntastic/syntastic'
Plugin 'google/vim-maktaba'
Plugin 'google/vim-codefmt'
Plugin 'google/vim-glaive'
Plugin 'tibabit/vim-templates'
Plugin 'scrooloose/nerdtree'
Plugin 'vim-airline/vim-airline'
Plugin 'Raimondi/delimitMate'
Plugin 'patstockwell/vim-monokai-tasty'
Plugin 'morhetz/gruvbox'
Plugin 'ctrlpvim/ctrlp.vim'
Plugin 'lifepillar/vim-solarized8'
Plugin 'majutsushi/tagbar'
Plugin 'Yggdroot/indentLine'
Plugin 'jiangmiao/auto-pairs'
" All of your Plugins must be added before the following line
call vundle#end()            " required
call glaive#Install()        " enable this line after the installation of glaive
filetype plugin indent on    " required

" custom setting
set mouse=a
set number
set encoding=utf-8
set backspace=indent,eol,start
set cursorline
"set guioptions=
syntax on
set autoread
" indent for global
set expandtab
set shiftwidth=4
set softtabstop=4
set autoindent
set cinoptions+={2
set smartindent
set tabstop=4
" indent for special file
autocmd FileType c,cpp setlocal expandtab shiftwidth=2 softtabstop=2 cindent 
autocmd FileType python setlocal expandtab shiftwidth=4 softtabstop=4 autoindent
"Theme 
if (has("termguicolors"))
 set termguicolors
endif

" For Neovim 0.1.3 and 0.1.4
let $NVIM_TUI_ENABLE_TRUE_COLOR=1

" Theme
colorscheme tender
let g:airline_theme = 'tender'
"Template
let g:tmpl_author_email = 'monir81.mk@gmail.com'
let g:tmpl_author_name = 'Monir'


" open NERDTree automatically when vim starts up on opening a directory
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 1 && isdirectory(argv()[0]) && !exists("s:std_in") | exe 'NERDTree' argv()[0] | wincmd p | ene | endif

map <silent> <F5> : NERDTreeToggle<CR>

" setup for gruvbox
"set t_Co=256
"set background=dark
"colorscheme atom-dark-256
"let g:gruvbox_termcolors=256
"let g:gruvbox_contrast_dark = 'soft'
"
"
" setup for ctrlp
" let g:ctrlp_map = '<c-p>'
" let g:ctrlp_cmd = 'CtrlP'
" let g:ctrlp_working_path_mode = 'ra'
" let g:ctrlp_custom_ignore = '\v[\/]\.(git|hg|svn)$'
" let g:ctrlp_custom_ignore = {
  " \ 'dir':  '\v[\/]\.(git|hg|svn)$',
  " \ 'file': '\v\.(exe|so|dll)$',
  " \ 'link': 'some_bad_symbolic_links',
  " \ }
" set wildignore+=*/tmp/*,*.so,*.swp,*.zip
" let g:ctrlp_user_command = ['.git', 'cd %s && git ls-files -co --exclude-standard']

" setup for tagbar
nmap <F8> :TagbarToggle<CR>

" setup for indent line
let g:indentLine_char = '│'
set tags=./tags,tags;$HOME
