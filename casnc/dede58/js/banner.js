var d = document;
var l = window.location.href;
var f = l.substring(l.lastIndexOf('/') + 1);
var timer = false;
  
var flash_params = {
    wmode: 'opaque',
    menu: false,
    allowFullscreen: "true",
    scale: 'Scale'
};
var flashvars = {};

var lang = window.location.href.match(/\.com\/([a-z]{2})\//);
if (lang && lang.length && lang.length > 1 && lang[1] != '') 
    lang = lang[1];
else 
    lang = 'en';

$(document).ready(function(){
 autoMaxWidth.ini();
});

$(window).load(function(){
	
	 autoMaxWidth.ini();
    $(window).resize(function(){
        if (typeof indexSlides != 'undefined' && indexSlides.reformat) 
            indexSlides.reformat();
        autoMaxWidth.ini();
    });
   
    
});

var mouse_events = {};

$(document).ready(function(){
	//$('.text.png').children().attr('class','IE6png');
	//$('.text.png').children().children().attr('class','IE6png');
	//mouse_events;
	if(!iPx()){
		mouse_events.mouse_over();
		mouse_events.mouse_out();
	}
});

var timeout;
mouse_events.mouse_over = function(){
	$("#menu li").mouseover(function(){
		//onmouseover&#26102;&#38388;
		dateIn = new Date();
		timeIn = dateIn.getTime();
		timeOut = 0;
		flag = true;	

		var p = this.className;
		timeout = setTimeout(function(){mouse_events.aShow(p)}, 200);
	});
};


mouse_events.mouse_out = function(){
	$("#menu li").mouseout(function(){									
		//onmouseout&#26102;&#38388;
		dateOut = new Date();
		timeOut = dateOut.getTime();
		timeIn = 0;
		flag = false;	
		
		if (divShow_flag != true) {
			$("#menu li a").removeClass('hover');
		}
		//alert("sdf");
		clearTimeout(timeout);
		clearTimeout(time_temp);
	});
};


var dateOut;
var timeOut;
var dateIn
var timeIn;
var flag = false;
var divShow_flag = false;
var $target;
var target;
var css;
var time_temp;


var autoMaxWidth = {};
autoMaxWidth.ini = function(){

    var winW = $(window).width();
    if (winW < 980) 
        winW = 980;
    
    $('.autoMaxWidth').each(function(){
        $(this).width(winW);
        
        var $img = $('img', this).first();
        var imgW = $img.width();
        var left = (winW - imgW) / 2;
        $img.css({ "left": left + "px", "position": "relative" });
        
        if ($.browser.msie && parseInt($.browser.version) == 6) {
            $(this).css({
                'overflow': 'hidden',
                'position': 'relative'
            }).width(winW);
            $('#banner').css({
                'overflow': 'hidden',
                'position': 'relative'
            }).width(winW);
        }
        
    });
}





function iPx(){
    if ((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i)) || (navigator.userAgent.match(/iPad/i))) 
        return true;
    return false;
}

indexSlides.parameterUpdate=function(){
	
	var winW=$(window).width();
	if(winW<1000)
		winW=1000;
	$('#slide-index').width(winW);
	$('#slide-index .slides').width(winW*(indexSlides.style.length+1));
	indexSlides.obj.width(winW);

	var offset=(winW-1000)/2;

	for(var i=0; i<indexSlides.style.length; i++){
		temp=offset+parseInt(indexSlides.style[i].text.left);
		indexSlides.css[i].text.left=temp+'px';
		temp=offset+parseInt(indexSlides.style[i].button.left);
		indexSlides.css[i].button.left=temp+'px';
	}
	
}

indexSlides.ini=function(){
	
	// clone obj
	indexSlides.css=[];
	
	
	for(var i=0; i<indexSlides.style.length; i++){
		indexSlides.css[i]={}
		indexSlides.css[i].text={};
		indexSlides.css[i].text.left=indexSlides.style[i].text.left;
		indexSlides.css[i].text.top=indexSlides.style[i].text.top;
		indexSlides.css[i].button={};
		indexSlides.css[i].button.left=indexSlides.style[i].button.left;
		indexSlides.css[i].button.top=indexSlides.style[i].button.top;
		indexSlides.css[i].direction=indexSlides.style[i].direction;
	}
	
	indexSlides.parameterUpdate();
	
	indexSlides.obj.eq(0).clone().appendTo('#slide-index .slides');
	
	$('#slide-index .control a').each(function(i){
		$(this).click(function(e){
			e.preventDefault();
			indexSlides.pause();
			indexSlides.goto(i);
			indexSlides.start();
		});
	});
	
	indexSlides.goto(0);
	indexSlides.start();

}

indexSlides.goto=function(i){

	if(indexSlides.animating || i==indexSlides.current)
		return false;

	indexSlides.animating=true;

	var j=i;
	if(i>=indexSlides.style.length)
		j=0;

	indexSlides.clearStage(i);

	indexSlides.current=j;
	
	$('#slide-index .control a').removeClass('active').eq(j).addClass('active');
	$obj=$('#slide-index .slide').eq(i);
	
	if(indexSlides.css[j].direction=='tb'){
	
		var initialTextCSS={
			'left':indexSlides.css[j].text.left,
			'top':-$obj.find('.text').height()
		};
		
		var initialButtonCSS={
			'left':indexSlides.css[j].button.left,
			'top':$obj.height()+$obj.find('.button').height()
			
		};
	
	}else if(indexSlides.css[j].direction=='lr'){
	
		var initialTextCSS={
			'left':-parseInt($obj.find('.text').width())+'px',
			'top':indexSlides.css[j].text.top
		};
		
		var initialButtonCSS={
			'left':500,
			'top':indexSlides.css[j].button.top,
			'width':$obj.find('.button').width()
			
		};
		
	}
	
	var left=-i*indexSlides.obj.width();
	
	$('#slide-index .slides').animate({'margin-left':left},500,function(){
		$obj.find('.text').animate(indexSlides.css[j].text,300,function(){
			$obj.find('.button').show().animate(indexSlides.css[j].button,300, "swing",function(){
				
				if(i>=indexSlides.css.length){
					$obj=$('#slide-index .slide').eq(0);
					$obj.find('.text').css(indexSlides.css[j].text);
					$obj.find('.button').css(indexSlides.css[j].button);
					$('#slide-index .slides').css('margin-left','0px');
				}
				
				indexSlides.animating=false;
				indexSlides.reformat();
				
			});
		});
	});
	
}

indexSlides.start=function(){
	indexSlides.timer=setInterval(indexSlides.next,6000);
}

indexSlides.pause=function(){
	if(indexSlides.timer)
		clearInterval(indexSlides.timer);
}

indexSlides.next=function(){
	var next=indexSlides.current+1;

	//if(next>=indexSlides.total)
		//next=0;
	
	indexSlides.goto(next);
}

indexSlides.clearStage=function(i){
	if(indexSlides.current>-1){
		indexSlides.animating=true;
		var left=3000;
		if(i<indexSlides.current)
			left=-1000;
		indexSlides.obj.eq(indexSlides.current).find('.text, .button').animate({'left':left+'px'},500,function(){
		});
	}
}

indexSlides.reformat=function(){
	indexSlides.parameterUpdate();
	if(!indexSlides.animating){
		var left=-indexSlides.current*indexSlides.obj.width();
		$('#slide-index .slides').css({
			'margin-left':left
		});
		
		$obj=$('#slide-index .slide').eq(indexSlides.current);

		
	}
}

