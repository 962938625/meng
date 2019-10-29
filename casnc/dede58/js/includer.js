(function($)
{
    var include_javascript = [];
    
    $.extend(true,
    {
        include : function(script)
        {
            var found = false;
            for (var i = 0; i < include_javascript.length; i++)
                if (include_javascript[i] == script) {
                    found = true;
                    break;
                }       
            if (found == false) {
                $("head").append('<script type="text/javascript" src="' + script + '"></script>');
                include_javascript.push(script);
            }
        }
    });

})
(jQuery);
jQuery.noConflict()(function($){
$(document).ready(function($) {

 $.include('/dede58/js/jquery.easing.1.3.js');/*EASING JS PLUGIN*/
 $.include('/dede58/js/jquery.transit.min.js');/*JS TRANSITIONS*/
 $.include('/dede58/js/nicescroll.min.js');/*JS NICESCROLL*/
 $.include('/dede58/js/prettyPhoto.min.js');/*JS NICESCROLL*/
 $.include('/dede58/js/fitVids.js');/*JS NICESCROLL*/
 
/*----------------------------------------------------------*/
 /*LAYER SLIDER*/
 /*----------------------------------------------------------*/
// if ( $( '#layerslider' ).length && jQuery() ) { 
//        
//        $.include('/skin/js/jquery.layerslider.js');/*LAYER SLIDER JS PLUGIN*/
//       $.include('/skin/js/jquery-transit.js');/*LAYER SLIDER JS TRANSITIONS*/
//       
//
//        $('#layerslider').layerSlider({
//                  width : '100%',
//                  height : '550px',
//                   responsive : true,
//                   responsiveUnder : 980,
//                   sublayerContainer : 1100,
//                    autoStart : true,
//                     pauseOnHover : true,
//                     firstLayer : 1,
//                    animateFirstLayer : true,
//                    randomSlideshow : false,
//                 twoWaySlideshow : true,
//                 loops : 0,
//                 forceLoopNum : true,
//                autoPlayVideos : false,
//                autoPauseSlideshow : 'auto',
//                keybNav : true,
//                touchNav : true,
//                skin : 'fullwidth',
//                skinsPath : 'css/layer-slider/skins/',
//
//        });
//
//}


 /*----------------------------------------------------------*/
 /*FLEX SLIDER*/
 /*----------------------------------------------------------*/
 if ( $( '.flexslider' ).length && jQuery() ) { 

        $.include('/dede58/js/flex-slider.min.js');/*FLEX SLIDER JS PLUGIN*/

        var target_flexslider = $('.flexslider');
        target_flexslider.flexslider({
        animation: "slide",
        controlNav: true,
        smoothHeight: true,
        directionNav: true,
        slideshowSpeed: 7000,          
        animationDuration: 5000,
        nextText:"&rsaquo;",
        prevText:"&lsaquo;",
        keyboardNav: true,
        useCSS: false,
        start: function(slider) {target_flexslider.removeClass('loading');},           
    });

        $(".flexslider").hover( function() {    
        $('.flex-direction-nav').fadeIn(200); },
        function () {$('.flex-direction-nav').fadeOut(600);}); 
    
}


 




/*----------------------------------------------------------*/
 /*MAIN NAVIGATION */
 /*----------------------------------------------------------*/
  if ( $( '#main-navigation,#main-navigation-2' ).length && jQuery() ) {

         $.include('/dede58/js/navigation.min.js');/*COUNTDOWN  JS PLUGIN*/

        $('ul.main-menu').superfish({ 
            delay:       100,                            // one second delay on mouseout 
            animation:   {opacity:'show',height:'show'},  // fade-in and slide-down animation 
            speed:       'fast',                          // faster animation speed 
            autoArrows:  false                           // disable generation of arrow mark-up 
        });

        jQuery("#main-navigation ul li a").hover(function(){
        if (jQuery.support.transition){ 
            jQuery(this).children('span.nav_icon').transition({ opacity: 0.2, perspective: '1000px', rotateY: '180deg' });
        }else{
            jQuery(this).children('span.nav_icon').animate({ opacity: 1 });
        }
    }, function(){
        if (jQuery.support.transition){ 
            jQuery(this).children('span.nav_icon').transition({ opacity: 1, perspective: '1000px', rotateY: '0deg' });
        }else{
            jQuery(this).children('span.nav_icon').animate({ opacity: 1 });
        }   
    });
}



//CASEjs
	$.fn.showSlide = function() {
		$(this).hover(function() {
			var a = $(this);
			dsfdjsk = setTimeout(function() {
				a.find(".sc_detail").stop(!0, !1).animate({
					bottom: "0"
				},
				450, "easeOutQuart")
			},
			50)
		},
		function() {
			clearTimeout(dsfdjsk);
			$(this).find(".sc_detail").stop(!0, !1).animate({
				bottom: "-60px"
			},
			380, "easeOutQuart")
		})
	};

	$(".listbox").showSlide();
	$(".colorsmall li").hover(function() {
		$(".colorsmall li a").css({
			"z-index": 0
		});
		0 > $(this).attr("class").indexOf("white") ? ($(this).css({
			"z-index": 2
		}), $(this).find("a").css({
			"z-index": 3
		}).stop(!0, !1).animate({
			width: "31px",
			height: "12px",
			left: "-3px",
			top: "-3px"
		},
		80, "easeOutQuart")) : $(this).find("a").css({
			"z-index": 3
		}).stop(!0, !1).animate({
			width: "29px",
			height: "10px",
			left: "-3px",
			top: "-3px"
		},
		80, "easeOutQuart")
	},
	function() {
		$(".colorsmall li").css({
			"z-index": 0
		});
		$(".colorsmall li a").css({
			"z-index": 0
		});
		0 > $(this).attr("class").indexOf("white") ? $(this).find("a").stop(!0, !1).animate({
			width: "25px",
			height: "6px",
			left: "0",
			top: "0"
		},
		150, "easeOutQuart") : $(this).find("a").stop(!0, !1).animate({
			width: "23px",
			height: "4px",
			left: "0",
			top: "0"
		},
		150, "easeOutQuart")
	});



/*----------------------------------------------------------*/
 /*SLIDES JS  SLIDER*/
 /*----------------------------------------------------------*/
 if ( $( 'ul#testimonials-slider-small' ).length && jQuery() ) { 
        
        $.include('/dede58/js/jquery.bxslider.min.js');/*CAROUSEL SLIDER JS PLUGIN*/
    
  

  $('ul#testimonials-slider-small').bxSlider({
  mode: 'horizontal',
  easing: 'easeOutElastic',
  controls: false,
  speed: 1500
});
     
}



initAccordionToggle();
function initAccordionToggle() {
    jQuery('.accordion-item-toggle').each(function(i) {
        var item=jQuery(this);
        item.find('.accordion-content-toggle').slideUp(0);
        item.find('.accordion-switch-toggle').click(function() {
         var displ = item.find('.accordion-content-toggle').css('display');
         item.closest('ul').find('.accordion-switch-toggle').each(function() {
          var li = jQuery(this).closest('li');
            item.removeClass("selected");
         });
         if (displ=="block") {
          item.find('.accordion-content-toggle').slideUp(300) 
          item.removeClass("selected");
         } else {
          item.find('.accordion-content-toggle').slideDown(300) 
          item.addClass("selected");
          
         }
        });
    });
}
/*----------------------------------------------------------*/


	//背景大图
//
//	var wH = $(window).width();
//
//	if(wH<1601){$(".picList>li>img").css("width","1600");
//
//	}else{$(".picList>li>img").css("width",wH);};
//
//	$(window).resize(winChage);  
//
//	function winChage(){
//
//			var wH = $(window).width();
//
//			if(wH<1601){$(".picList li img").css("width","1600");
//
//			}else{$(".picList li img").css("width",wH);}
//
//	};
//

	//首页背景大图切换			

//	$('.picList li').soChange({
//
//		thumbObj:'.picListBnt li',  
//
//		thumbNowClass:'on', 
//
//		changeTime:4000
//
//	});




/*----------------------------------------------------------*/
 /*STICKY NAVIGATION  */
/*----------------------------------------------------------*/
 
 var aboveHeight = $('.bottom_links').outerHeight();
        $(window).scroll(function(){
         if ($(window).scrollTop() > aboveHeight && $(window).width() > 959 )  {
                $('#header-wrapper').addClass('sticky');
                $('body').addClass('empty-space');
                
                } 
                                else {
           
                $('#header-wrapper').removeClass('sticky');
                                 $('body').removeClass('empty-space');
                                 
                }
        });




});
});