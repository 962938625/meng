<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" class="loading">
<head>
<meta HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=gb2312" />
<meta HTTP-EQUIV="X-UA-Compatible" CONTENT="IE=EmulateIE7" />
<meta name="viewport" CONTENT="width=device-width, initial-scale=0.0, user-scalable=no, minimum-scale=1.0, maximum-scale=1.0" />
<meta name="keywords" CONTENT="" />
<meta name="description" CONTENT="" />
<link REL="stylesheet" TYPE="text/css" HREF="/dede58/html5/css/style.css" />
<meta CONTENT="yes" name="apple-mobile-web-app-capable">
<meta CONTENT="black" name="apple-mobile-web-app-status-bar-style">
<meta CONTENT="telephone=no" name="format-detection">
 <title><?php echo utf82gb($typename); ?> - <?php echo utf82gb($cfg_webname); ?></title>
</head>

<body>
<script>
	var now_page = 'list',
	search_value = '';
</script>
			  <div id="menu">
		<div CLASS="search_wrap">
		
            <form action='wap.php' method='get'>
                <input type='hidden' name='action' value='search' />
                <input type='text' class='search_input' placeholder='�ؼ��ֲ���' name='q' value=''>
                <i class='reset_input'><i></i></i>
            </form>
            
		</div>
		<ul>
			<li CLASS="nav_index "><a HREF="/wap/wap.php"><i></i><span>��ҳ</span><b></b><div CLASS="clear"></div></a></li>
            <li class='nav_inspire '><a href='wap.php?action=caselist&id=13'><i></i><span>����</span><b></b><div class='clear'></div></a></li>
			<li CLASS="nav_about "><a HREF="wap.php?action=list&id=20"><i></i><span>��̬</span><b></b><div CLASS="clear"></div></a></li>
			<li CLASS="nav_help "><a HREF="wap.php?action=about"><i></i><span>����</span><b></b><div CLASS="clear"></div></a></li>
			<li CLASS="nav_site "><a HREF="wap.php?action=job"><i></i><span>����</span><b></b><div CLASS="clear"></div></a></li>
		</ul>
	</div>

            
        <div id='user'>
					<div class='account'>
				<div class='login_b_t'>
					<div class='pd10'>
						<div><span>���ܸ����Ƕ������Σ����Ǿ��ܸ�����ϲ</span></div>
					</div>
				</div>
			</div>
			<div class='pd10'>
					<div class='login_b_i'>
                    	<p><?php echo $address; ?></p>
						<p><?php echo $tel; ?></p>
					</div>
					<a class='login_submit' href='tel:<?php echo $tel; ?>' title='���ߵ绰' data-ajax='false'>����绰</a>
				
			</div>
			</div>
	<div id="header">
		<div CLASS="wrap">
			<i CLASS="menu_open"></i>
			<div CLASS="logo"><a HREF="/wap/wap.php" ><img SRC="/dede58/html5/images/logo.png" /></a></div>
			<i CLASS="search_open"></i>
		</div>
		<div CLASS="logo_msk"></div>
	</div>
	<div id="container">
		
		<div id="content">	
			<div id="list2">
                    <ul>
                    
                    <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
					                    <li>
						<div CLASS="wrap">
							<a CLASS="alist" href='wap.php?action=article&amp;id=<?php echo $fields['id']; ?>'>
								<div CLASS="list_litpic fl"><img SRC="<?php echo $fields['litpic']; ?>" /></div>
								<div CLASS="list_info">
									<h4><?php echo ConvertStr($fields['title']); ?></h4>
									<h5>UPTATED:<span><?php echo date('Y-m-d H:i',$fields['pubdate']); ?></span></h5>
								</div>
								<div CLASS="clear"></div>
							</a>
						</div>
					</li>
                    <?php
}
}?>
					             
														</ul>
				<!--<div class="list_loading"><i></i><span>Ŭ��������...</span></div>-->
                <div CLASS="page"> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '2';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
 </div>
			</div>
		</div>
		
		<div CLASS="push_msk"></div>
        
        
        
        
        
        
        
        
	</div>
      <!--foot start-->

        <div id='fixed'>
			<table width='100%' border='0' cellspacing='0'>
				<tr>
					<td class='sort_left'>
						<div class='sort_cate'>
							<div class='sort_b'><a href='/wap/wap.php' data-ajax='false'><div class='sort_b_inner'><span>��ҳ</span><div class='clear'></div></div></a></div>
						</div>
					</td>
					<td>
						<div class='sort_tag'>
							<div class='sort_b'><a title='�����ͼ' href='<?php echo $mapaddress?>' rel='external' data-ajax='false'><div class='sort_b_inner'><span>��ͼ</span><div class='clear'></div></div></a></div>
						</div>
					</td>
					<td class='sort_right'>
						<div class='sort_sort'>
							<div class='sort_b'><a href='tel:<?php echo $tel?>' title='���ߵ绰' data-ajax='false'><div class='sort_b_inner'><span>�绰</span><div class='clear'></div></div></a></div>
						</div>
					</td>
				</tr>
			</table>
		</div>

		<!--foot end-->     

	<script language="javascript" SRC="/dede58/html5/js/zepto.min.js"></script>
	<script language="javascript" SRC="/dede58/html5/js/fx.js"></script>
	<script language="javascript" SRC="/dede58/html5/js/script.js"></script>
    <script>
    if(now_page=='list'){
    	$('.nav_about').addClass('menu_cur');
    }
    </script>
</body>
</html>