<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" class="loading">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312" />
<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE7" />
<meta name="viewport" content="width=device-width, initial-scale=0.0, user-scalable=no, minimum-scale=1.0, maximum-scale=1.0" />
<meta name="keywords" content="" />
<meta name="description" content="" />
<link rel="stylesheet" type="text/css" href="/dede58/html5/css/style.css" />
<meta content="yes" name="apple-mobile-web-app-capable">
<meta content="black" name="apple-mobile-web-app-status-bar-style">
<meta content="telephone=no" name="format-detection">
<title><?php echo utf82gb($typename); ?> - <?php echo utf82gb($cfg_webname); ?></title>
</head>

<body>
<script>
	var now_page = 'caselist',
	search_value = '';
</script>
			  <div id="menu">
		<div class="search_wrap">
		
            <form action='wap.php' method='get'>
                <input type='hidden' name='action' value='search' />
                <input type='text' class='search_input' placeholder='关键字查找' name='q' value=''>
                <i class='reset_input'><i></i></i>
            </form>
            
		</div>
		<ul>
			<li CLASS="nav_index "><a HREF="/wap/wap.php"><i></i><span>首页</span><b></b><div CLASS="clear"></div></a></li>
            <li class='nav_inspire '><a href='wap.php?action=caselist&id=13'><i></i><span>案例</span><b></b><div class='clear'></div></a></li>
			<li CLASS="nav_about "><a HREF="wap.php?action=list&id=20"><i></i><span>动态</span><b></b><div CLASS="clear"></div></a></li>
			<li CLASS="nav_help "><a HREF="wap.php?action=about"><i></i><span>关于</span><b></b><div CLASS="clear"></div></a></li>
			<li CLASS="nav_site "><a HREF="wap.php?action=job"><i></i><span>加入</span><b></b><div CLASS="clear"></div></a></li>
		</ul>
	</div>

            
        <div id='user'>
					<div class='account'>
				<div class='login_b_t'>
					<div class='pd10'>
						<div><span>您能给我们多少信任，我们就能给你多大惊喜</span></div>
					</div>
				</div>
			</div>
			<div class='pd10'>
					<div class='login_b_i'>
                    	<p><?php echo $address; ?></p>
						<p><?php echo $tel; ?></p>
					</div>
					<a class='login_submit' href='tel:<?php echo $tel; ?>' title='热线电话' data-ajax='false'>拨打电话</a>
				
			</div>
			</div>
	<div id="header">
		<div class="wrap">
			<i class="menu_open"></i>
			<div class="logo"><a href="/wap/wap.php"><img src="/dede58/html5/images/logo.png" /></a></div>
			<i class="search_open"></i>
		</div>
		<div class="logo_msk"></div>
	</div>
	<div id="container">

		<div id="content">	
			<div class="bangmang_list">
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
						<div class="pd5">
							<a target="_blank" href="wap.php?action=case&amp;id=<?php echo $fields['id']; ?>" class="bangmang_album"><img src="<?php echo $fields['litpic']; ?>"></a>
							<h4><a target="_blank" href="wap.php?action=case&amp;id=<?php echo $fields['id']; ?>"><?php echo ConvertStr($fields['title']); ?></a></h4>
							<div class="bangmang_list_info pd10">
							<?php echo $fields['description']; ?></div>
							<div class="bangmang_list_more">
								<div class="list_info_i">
									<dl class="list_info_views">
										<dt></dt>
										<dd><?php echo $fields['click']; ?></dd>
										<div class="clear"></div>
									</dl>
									
									<dl class="list_info_time">
										<dt></dt>
										<dd><?php echo date('Y/m/d',$fields['pubdate']); ?></dd>
										<div class="clear"></div>
									</dl>
									<div class="clear"></div>
								</div>
							</div>
						</div>
					</li>
			<?php
}
}?>

            
			
		</ul>

<div CLASS="page"> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '2';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
 </div>
            </div>
		</div>
		
		<div class="push_msk"></div>

	</div>
       <!--foot start-->

        <div id='fixed'>
			<table width='100%' border='0' cellspacing='0'>
				<tr>
					<td class='sort_left'>
						<div class='sort_cate'>
							<div class='sort_b'><a href='/wap/wap.php' data-ajax='false'><div class='sort_b_inner'><span>首页</span><div class='clear'></div></div></a></div>
						</div>
					</td>
					<td>
						<div class='sort_tag'>
							<div class='sort_b'><a title='网络地图' href='<?php echo $mapaddress?>' rel='external' data-ajax='false'><div class='sort_b_inner'><span>地图</span><div class='clear'></div></div></a></div>
						</div>
					</td>
					<td class='sort_right'>
						<div class='sort_sort'>
							<div class='sort_b'><a href='tel:<?php echo $tel?>' title='热线电话' data-ajax='false'><div class='sort_b_inner'><span>电话</span><div class='clear'></div></div></a></div>
						</div>
					</td>
				</tr>
			</table>
		</div>

		<!--foot end-->               

	<script language="javascript" src="/dede58/html5/js/zepto.min.js"></script>
	<script language="javascript" src="/dede58/html5/js/fx.js"></script>
	<script language="javascript" src="/dede58/html5/js/script.js"></script>
        <script>
    if(now_page=='caselist'){
    	$('.nav_inspire').addClass('menu_cur');
    }
    </script>
</body>
</html>