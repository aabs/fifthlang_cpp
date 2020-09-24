%{
    #include "fifth.tab.hh"
%}
%option noyywrap
digit         [0-9]
number        [-]?{digit}*[.]?{digit}+
%%
{number}     {return NUMBER;}
