<?php
$z[0]=Array("global","",342,368);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",409,438);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",478,536);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1273,1309);
$z[3][4]['filename']="head2.htm";
$z[4]=Array("list","\r\n       <li>\r\n        <div onClick=\"location.href='[field:arcurl/]';\" class=\"pic\"><img src=\"[field:litpic/]\">\r\n          <div class=\"picFc\" style=\"opacity: 0; display: block;\"></div>\r\n        </div>\r\n        <div class=\"txt\">\r\n          <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          <p>[field:description function=\"cn_substr(@me,100)\"/]... </p></div>\r\n        <div class=\"newsDate\"><span class=\"d1\">[field:pubdate function=\"MyDate('d',@me)\"/]</span><span class=\"d2\">[field:pubdate function=\"MyDate('F',@me)\"/]<br>[field:pubdate function=\"MyDate('Y',@me)\"/]</span></div>\r\n      </li>\r\n",1396,2037);
$z[4][4]['pagesize']="10";
$z[5]=Array("pagelist","",2138,2216);
$z[5][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[5][4]['listsize']="5";
$z[6]=Array("type","[field:typeurl/]",2435,2485);
$z[6][4]['typeid']="6";
$z[7]=Array("channel","\r\n                  <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n                  ",2715,2863);
$z[7][4]['type']="son";
$z[7][4]['typeid']="6";
$z[8]=Array("include","",3024,3061);
$z[8][4]['filename']="footer.htm";

?>