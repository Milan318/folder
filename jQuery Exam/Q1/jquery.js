const swiper = new Swiper('.swiper', {
    // Optional parameters
    direction: 'horizontal',
    loop: true,
  
    // If we need pagination
    pagination: {
      el: '.swiper-pagination',
    },
  
    // Navigation arrows
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
      disabledClass:'swiper-button-disabled',
      hiddenClass:'swiper-button-hidden',
      lockClass:'swiper-button-lock',
      navigationDisabledClass	:	'swiper-navigation-disabled',
    //   nextEl:	null,
    //   prevEl:	null,

    },
  
    // And if we need scrollbar
    scrollbar: {
      el: '.swiper-scrollbar',
    },
  });