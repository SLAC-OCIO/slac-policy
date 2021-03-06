(function($) {

// Define jRespond Media queries.
var jRes = jRespond([
	{
		label: 'mobile',
		enter: 0,
		exit: 480
	},{
		label: 'tablet',
		enter: 481,
		exit: 979
	},{
		label: 'desktop',
		enter: 980,
		exit: 9999
	}
]);

// Modify the Search field for module filter.
Drupal.behaviors.adminimal_module_filter_box = {
  attach: function (context, settings) {
    //code starts
	  $('input#edit-module-filter-name').each(function(){

	    var defaultVal = Drupal.t('Search');
	    
	    $(this).focus(function(){
	      if ($(this).val() == defaultVal){
	        $(this).val('');
	      }
	      $(this).removeClass('empty');
	    })

	    .blur(function(){
	      if ($(this).val() == ''){
	        $(this).addClass('empty').val(defaultVal);
	      }
	    })

	    .blur().addClass('empty');

	  });
    //code ends
  }
};

// Fix some krumo styling.
Drupal.behaviors.krumo_remove_class = {
  attach: function (context, settings) {
  	// Find status messages that has krumo div inside them, and change the classes.
    $('#console .messages.status').has("div.krumo-root").removeClass().addClass( "krumo-wrapper" );
  }
};

// Add media query classes to the body tag.
Drupal.behaviors.adminimal_media_queries = {
	attach: function (context, settings) {
		jRes.addFunc([
			{
				breakpoint: 'mobile',
					enter: function() {
						$( "body" ).addClass( "mq-mobile" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-mobile" );
					}
			},{
				breakpoint: 'tablet',
					enter: function() {
						$( "body" ).addClass( "mq-tablet" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-tablet" );
					}
			},{
				breakpoint: 'desktop',
					enter: function() {
						$( "body" ).addClass( "mq-desktop" );
					},
					exit: function() {
						$( "body" ).removeClass( "mq-desktop" );
					}
			}
		]);
	}
};

// Move the active primary tab on mobile to be displayed last. 
Drupal.behaviors.adminimal_move_active_primary_tab = {
	attach: function (context, settings) {
  	// Add primary tabs class to the branding div for the bottom border.
    $('#branding').has("ul.tabs.primary").addClass( "has-primary-tabs" );

		// register enter and exit functions for a single breakpoint
		jRes.addFunc({
			breakpoint: 'mobile',
				enter: function() {
					$( "ul.tabs.primary li.active" ).clone().appendTo( "ul.tabs.primary" ).removeClass( "active" ).addClass( "current" );
					$( "ul.tabs.primary li.active" ).hide();
				},
				exit: function() {
					$( "ul.tabs.primary li.active" ).show();
					$( "ul.tabs.primary li.current" ).hide();
				}
		});
	}
};

})(jQuery);
