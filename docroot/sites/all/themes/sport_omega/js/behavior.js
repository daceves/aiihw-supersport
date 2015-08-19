/**
 * Resizes the videos on all of the site
 * to have a 16:9 ratio
 */
(function($) {

  $(window).resize(function() {

    $("video").each(function() {

      var width = $(this).width();

      $(this).css({
        "height": width * (9 / 16),
      });
    });

  }).resize();

})(jQuery);