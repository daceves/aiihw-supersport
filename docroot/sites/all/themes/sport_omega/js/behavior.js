/**
 * Resizes the videos on all of the site
 * to have a 16:9 ratio
 */
(function($) {
	$(window).resize(function() {
		var width = $('video').width();
		var height = $('video').height();

		$("video").css({
			"width": '100%',
			"height": width*(9/16)
		});
	}).resize();
})(jQuery);