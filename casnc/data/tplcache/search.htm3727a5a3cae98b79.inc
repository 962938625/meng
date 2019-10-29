<?php
$z[0]=Array("global","",340,366);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",407,436);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",476,534);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1259,1295);
$z[3][4]['filename']="head2.htm";
$z[4]=Array("list","\r\n       <li>\r\n        <div onClick=\"location.href='[field:arcurl/]';\" class=\"pic\"><img src=\"[field:litpic/]\">\r\n          <div class=\"picFc\" style=\"opacity: 0; display: block;\"></div>\r\n        </div>\r\n        <div class=\"txt\">\r\n          <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          <p>[field:description function=\"cn_substr(@me,100)\"/]... </p></div>\r\n        <div class=\"newsDate\"><span class=\"d1\">[field:pubdate function=\"MyDate('d',@me)\"/]</span><span class=\"d2\">[field:pubdate function=\"MyDate('F',@me)\"/]<br>[field:pubdate function=\"MyDate('Y',@me)\"/]</span></div>\r\n      </li>\r\n",1382,2023);
$z[4][4]['pagesize']="10";
$z[5]=Array("pagelist","",2124,2202);
$z[5][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[5][4]['listsize']="5";
$z[6]=Array("type","[field:typeurl/]",2421,2471);
$z[6][4]['typeid']="6";
$z[7]=Array("channel","\r\n                  <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n                  ",2699,2847);
$z[7][4]['type']="son";
$z[7][4]['typeid']="6";
$z[8]=Array("include","",3008,3045);
$z[8][4]['filename']="footer.htm";

?>