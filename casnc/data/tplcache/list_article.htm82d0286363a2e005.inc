<?php
$z[0]=Array("field","",334,353);
$z[0][4]['name']="title";
$z[1]=Array("global","",354,380);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",421,450);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",490,548);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1279,1315);
$z[4][4]['filename']="head2.htm";
$z[5]=Array("list","\r\n       <li>\r\n        <div onClick=\"location.href='[field:arcurl/]';\" class=\"pic\"><img src=\"[field:litpic/]\">\r\n          <div class=\"picFc\" style=\"opacity: 0; display: block;\"></div>\r\n        </div>\r\n        <div class=\"txt\">\r\n          <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          <p>[field:description function=\"cn_substr(@me,100)\"/]... </p></div>\r\n        <div class=\"newsDate\"><span class=\"d1\">[field:pubdate function=\"MyDate('d',@me)\"/]</span><span class=\"d2\">[field:pubdate function=\"MyDate('F',@me)\"/]<br>[field:pubdate function=\"MyDate('Y',@me)\"/]</span></div>\r\n      </li>\r\n",1402,2043);
$z[5][4]['pagesize']="10";
$z[6]=Array("pagelist","",2144,2216);
$z[6][4]['listitem']="info,index,end,pre,next,pageno";
$z[6][4]['listsize']="10";
$z[7]=Array("type","[field:typeurl/]",2435,2485);
$z[7][4]['typeid']="6";
$z[8]=Array("channel","\r\n                  <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n                  ",2714,2862);
$z[8][4]['type']="son";
$z[8][4]['typeid']="6";
$z[9]=Array("include","",3023,3060);
$z[9][4]['filename']="footer.htm";

?>