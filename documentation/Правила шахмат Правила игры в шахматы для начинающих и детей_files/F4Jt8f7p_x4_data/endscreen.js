(function(g){var window=this;'use strict';var $gb=function(a,b){a.Na("onAutonavCoundownStarted",b)},$5=function(a,b,c){g.Vp(a.element,"ytp-suggestion-set",!!b.videoId);
var d=b.playlistId;c=b.vg(c?c:"mqdefault.jpg");var e=null,f=null;b instanceof g.GL&&(b.lengthText?(e=b.lengthText||null,f=b.yv||null):b.lengthSeconds&&(e=g.cR(b.lengthSeconds),f=g.cR(b.lengthSeconds,!0)));var h=!!d;d=h&&"RD"===g.EL(d).type;var l=b instanceof g.GL?b.isLivePlayback:null,m=b instanceof g.GL?b.isUpcoming:null,n=b.author,p=b.shortViewCount,q=b.publishedTimeText,r=[],u=[];n&&r.push(n);p&&(r.push(p),u.push(p));q&&u.push(q);c={title:b.title,author:n,author_and_views:r.join(" \u2022 "),aria_label:b.ariaLabel||
g.lO("\u041f\u043e\u0441\u043c\u043e\u0442\u0440\u0435\u0442\u044c $TITLE",{TITLE:b.title}),duration:e,timestamp:f,url:b.Ak(),is_live:l,is_upcoming:m,is_list:h,is_mix:d,background:c?"background-image: url("+c+")":"",views_and_publish_time:u.join(" \u2022 "),autoplayAlternativeHeader:b.Fr};b instanceof g.FL&&(c.playlist_length=b.playlistLength);a.update(c)},a6=function(a){var b=a.T(),c=b.C;
g.T.call(this,{G:"a",N:"ytp-autonav-suggestion-card",X:{href:"{{url}}",target:c?b.Y:"","aria-label":"{{aria_label}}","data-is-live":"{{is_live}}","data-is-list":"{{is_list}}","data-is-mix":"{{is_mix}}","data-is-upcoming":"{{is_upcoming}}"},W:[{G:"div",Ia:["ytp-autonav-endscreen-upnext-thumbnail","ytp-autonav-thumbnail-small"],X:{style:"{{background}}"},W:[{G:"div",X:{"aria-label":"{{timestamp}}"},Ia:["ytp-autonav-timestamp"],qa:"{{duration}}"},{G:"div",Ia:["ytp-autonav-live-stamp"],qa:"\u0412 \u044d\u0444\u0438\u0440\u0435"},
{G:"div",Ia:["ytp-autonav-upcoming-stamp"],qa:"\u0421\u043a\u043e\u0440\u043e \u0432 \u044d\u0444\u0438\u0440\u0435"},{G:"div",N:"ytp-autonav-list-overlay",W:[{G:"div",N:"ytp-autonav-mix-text",qa:"\u041c\u0438\u043a\u0441"},{G:"div",N:"ytp-autonav-mix-icon"}]}]},{G:"div",Ia:["ytp-autonav-endscreen-upnext-title","ytp-autonav-title-card"],qa:"{{title}}"},{G:"div",Ia:["ytp-autonav-endscreen-upnext-author","ytp-autonav-author-card"],qa:"{{author}}"},{G:"div",Ia:["ytp-autonav-endscreen-upnext-author",
"ytp-autonav-view-and-date-card"],qa:"{{views_and_publish_time}}"}]});this.F=a;this.suggestion=null;this.j=c;this.Qa("click",this.onClick);this.Qa("keypress",this.onKeyPress)},b6=function(a,b){b=void 0===b?!1:b;
g.T.call(this,{G:"div",N:"ytp-autonav-endscreen-countdown-overlay"});var c=this;this.I=b;this.D=void 0;this.B=0;this.container=new g.T({G:"div",N:"ytp-autonav-endscreen-countdown-container"});g.D(this,this.container);this.container.Fa(this.element);b=a.T();var d=b.C;this.F=a;this.suggestion=null;this.onVideoDataChange("newdata",this.F.getVideoData());this.S(a,"videodatachange",this.onVideoDataChange);this.j=new g.T({G:"div",N:"ytp-autonav-endscreen-upnext-container",X:{"aria-label":"{{aria_label}}",
"data-is-live":"{{is_live}}","data-is-list":"{{is_list}}","data-is-mix":"{{is_mix}}","data-is-upcoming":"{{is_upcoming}}"},W:[{G:"div",N:"ytp-autonav-endscreen-upnext-header"},{G:"div",N:"ytp-autonav-endscreen-upnext-alternative-header",qa:"{{autoplayAlternativeHeader}}"},{G:"a",N:"ytp-autonav-endscreen-link-container",X:{href:"{{url}}",target:d?b.Y:""},W:[{G:"div",N:"ytp-autonav-endscreen-upnext-thumbnail",X:{style:"{{background}}"},W:[{G:"div",X:{"aria-label":"{{timestamp}}"},Ia:["ytp-autonav-timestamp"],
qa:"{{duration}}"},{G:"div",Ia:["ytp-autonav-live-stamp"],qa:"\u0412 \u044d\u0444\u0438\u0440\u0435"},{G:"div",Ia:["ytp-autonav-upcoming-stamp"],qa:"\u0421\u043a\u043e\u0440\u043e \u0432 \u044d\u0444\u0438\u0440\u0435"}]},{G:"div",N:"ytp-autonav-endscreen-video-info",W:[{G:"div",N:"ytp-autonav-endscreen-premium-badge"},{G:"div",N:"ytp-autonav-endscreen-upnext-title",qa:"{{title}}"},{G:"div",N:"ytp-autonav-endscreen-upnext-author",qa:"{{author}}"},{G:"div",N:"ytp-autonav-view-and-date",qa:"{{views_and_publish_time}}"},
{G:"div",N:"ytp-autonav-author-and-view",qa:"{{author_and_views}}"}]}]}]});g.D(this,this.j);this.j.Fa(this.container.element);d||this.S(this.j.Da("ytp-autonav-endscreen-link-container"),"click",this.FQ);this.F.sb(this.container.element,this,115127);this.F.sb(this.j.Da("ytp-autonav-endscreen-link-container"),this,115128);this.overlay=new g.T({G:"div",N:"ytp-autonav-overlay"});g.D(this,this.overlay);this.overlay.Fa(this.container.element);this.u=new g.T({G:"div",N:"ytp-autonav-endscreen-button-container"});
g.D(this,this.u);this.u.Fa(this.container.element);this.cancelButton=new g.T({G:"button",Ia:["ytp-autonav-endscreen-upnext-button","ytp-autonav-endscreen-upnext-cancel-button",b.K("web_modern_buttons")?"ytp-autonav-endscreen-upnext-button-rounded":""],X:{"aria-label":"\u041e\u0442\u043c\u0435\u043d\u0438\u0442\u044c \u0430\u0432\u0442\u043e\u0432\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0434\u0435\u043d\u0438\u0435"},qa:"\u041e\u0442\u043c\u0435\u043d\u0430"});g.D(this,this.cancelButton);
this.cancelButton.Fa(this.u.element);this.cancelButton.Qa("click",this.VZ,this);this.F.sb(this.cancelButton.element,this,115129);this.playButton=new g.T({G:"a",Ia:["ytp-autonav-endscreen-upnext-button","ytp-autonav-endscreen-upnext-play-button",b.K("web_modern_buttons")?"ytp-autonav-endscreen-upnext-button-rounded":""],X:{href:"{{url}}",role:"button","aria-label":"\u0412\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0441\u0442\u0438 \u0441\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435 \u0432\u0438\u0434\u0435\u043e"},
qa:"\u0412\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0441\u0442\u0438"});g.D(this,this.playButton);this.playButton.Fa(this.u.element);this.playButton.Qa("click",this.FQ,this);this.F.sb(this.playButton.element,this,115130);this.C=new g.Jp(function(){ahb(c)},500);
g.D(this,this.C);this.EQ();this.S(a,"autonavvisibility",this.EQ);this.F.K("web_autonav_color_transition")&&(this.S(a,"autonavchange",this.UZ),this.S(a,"onAutonavCoundownStarted",this.U5))},c6=function(a){var b=a.F.yk(!0,a.F.isFullscreen());
g.Vp(a.container.element,"ytp-autonav-endscreen-small-mode",a.Ug(b));g.Vp(a.container.element,"ytp-autonav-endscreen-is-premium",!!a.suggestion&&!!a.suggestion.iI);g.Vp(a.F.getRootNode(),"ytp-autonav-endscreen-cancelled-state",!a.F.Df());g.Vp(a.F.getRootNode(),"countdown-running",a.Gk());g.Vp(a.container.element,"ytp-player-content",a.F.Df());g.Lm(a.overlay.element,{width:b.width+"px"});if(!a.Gk()){a.F.Df()?bhb(a,Math.round(chb(a)/1E3)):bhb(a);b=!!a.suggestion&&!!a.suggestion.Fr;var c=a.F.Df()||!b;
g.Vp(a.container.element,"ytp-autonav-endscreen-upnext-alternative-header-only",!c&&b);g.Vp(a.container.element,"ytp-autonav-endscreen-upnext-no-alternative-header",c&&!b);g.$P(a.u,a.F.Df());g.Vp(a.element,"ytp-enable-w2w-color-transitions",dhb(a))}},ahb=function(a){var b=chb(a),c=Math,d=c.min;
var e=a.B?Date.now()-a.B:0;c=d.call(c,e,b);bhb(a,Math.ceil((b-c)/1E3));500>=b-c&&a.Gk()?a.select(!0):a.Gk()&&a.C.start()},chb=function(a){if(a.F.isFullscreen()){var b;
a=null==(b=a.F.getVideoData())?void 0:b.OI;return-1===a||void 0===a?8E3:a}return 0<=a.F.Yr()?a.F.Yr():g.gJ(a.F.T().experiments,"autoplay_time")||1E4},dhb=function(a){var b;
return!(null==(b=a.F.getVideoData())||!b.watchToWatchTransitionRenderer)},bhb=function(a,b){b=void 0===b?-1:b;
a=a.j.Da("ytp-autonav-endscreen-upnext-header");g.tf(a);if(0<=b){b=String(b);var c="\u0412\u0438\u0434\u0435\u043e \u043d\u0430\u0447\u043d\u0435\u0442\u0441\u044f \u0447\u0435\u0440\u0435\u0437 $SECONDS".match(RegExp("\\$SECONDS","gi"))[0],d="\u0412\u0438\u0434\u0435\u043e \u043d\u0430\u0447\u043d\u0435\u0442\u0441\u044f \u0447\u0435\u0440\u0435\u0437 $SECONDS".indexOf(c);if(0<=d){a.appendChild(g.rf("\u0412\u0438\u0434\u0435\u043e \u043d\u0430\u0447\u043d\u0435\u0442\u0441\u044f \u0447\u0435\u0440\u0435\u0437 $SECONDS".slice(0,
d)));var e=g.qf("span");g.Pp(e,"ytp-autonav-endscreen-upnext-header-countdown-number");g.Af(e,b);a.appendChild(e);a.appendChild(g.rf("\u0412\u0438\u0434\u0435\u043e \u043d\u0430\u0447\u043d\u0435\u0442\u0441\u044f \u0447\u0435\u0440\u0435\u0437 $SECONDS".slice(d+c.length)));return}}g.Af(a,"\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435")},d6=function(a,b){g.T.call(this,{G:"div",
Ia:["html5-endscreen","ytp-player-content",b||"base-endscreen"]});this.created=!1;this.player=a},e6=function(a){g.T.call(this,{G:"div",
Ia:["ytp-upnext","ytp-player-content"],X:{"aria-label":"{{aria_label}}"},W:[{G:"div",N:"ytp-cued-thumbnail-overlay-image",X:{style:"{{background}}"}},{G:"span",N:"ytp-upnext-top",W:[{G:"span",N:"ytp-upnext-header",qa:"\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435"},{G:"span",N:"ytp-upnext-title",qa:"{{title}}"},{G:"span",N:"ytp-upnext-author",qa:"{{author}}"}]},{G:"a",N:"ytp-upnext-autoplay-icon",X:{role:"button",href:"{{url}}","aria-label":"\u0412\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0441\u0442\u0438 \u0441\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435 \u0432\u0438\u0434\u0435\u043e"},
W:[{G:"svg",X:{height:"100%",version:"1.1",viewBox:"0 0 72 72",width:"100%"},W:[{G:"circle",N:"ytp-svg-autoplay-circle",X:{cx:"36",cy:"36",fill:"#fff","fill-opacity":"0.3",r:"31.5"}},{G:"circle",N:"ytp-svg-autoplay-ring",X:{cx:"-36",cy:"36","fill-opacity":"0",r:"33.5",stroke:"#FFFFFF","stroke-dasharray":"211","stroke-dashoffset":"-211","stroke-width":"4",transform:"rotate(-90)"}},{G:"path",N:"ytp-svg-fill",X:{d:"M 24,48 41,36 24,24 V 48 z M 44,24 v 24 h 4 V 24 h -4 z"}}]}]},{G:"span",N:"ytp-upnext-bottom",
W:[{G:"span",N:"ytp-upnext-cancel"},{G:"span",N:"ytp-upnext-paused",qa:"\u0410\u0432\u0442\u043e\u0432\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0434\u0435\u043d\u0438\u0435 \u043f\u0440\u0438\u043e\u0441\u0442\u0430\u043d\u043e\u0432\u043b\u0435\u043d\u043e."}]}]});this.api=a;this.cancelButton=null;this.D=this.Da("ytp-svg-autoplay-ring");this.B=this.notification=this.j=this.suggestion=null;this.C=new g.Jp(this.kF,5E3,this);this.u=0;var b=this.Da("ytp-upnext-cancel");this.cancelButton=
new g.T({G:"button",Ia:["ytp-upnext-cancel-button","ytp-button"],X:{tabindex:"0","aria-label":"\u041e\u0442\u043c\u0435\u043d\u0438\u0442\u044c \u0430\u0432\u0442\u043e\u0432\u043e\u0441\u043f\u0440\u043e\u0438\u0437\u0432\u0435\u0434\u0435\u043d\u0438\u0435"},qa:"\u041e\u0442\u043c\u0435\u043d\u0430"});g.D(this,this.cancelButton);this.cancelButton.Qa("click",this.WZ,this);this.cancelButton.Fa(b);this.cancelButton&&this.api.sb(this.cancelButton.element,this,115129);g.D(this,this.C);this.api.sb(this.element,
this,18788);b=this.Da("ytp-upnext-autoplay-icon");this.S(b,"click",this.XZ);this.api.sb(b,this,115130);this.GQ();this.S(a,"autonavvisibility",this.GQ);this.S(a,"mdxnowautoplaying",this.H6);this.S(a,"mdxautoplaycanceled",this.I6);g.Vp(this.element,"ytp-upnext-mobile",this.api.T().u)},ehb=function(a,b){if(b)return b;
if(a.api.isFullscreen()){var c;a=null==(c=a.api.getVideoData())?void 0:c.OI;return-1===a||void 0===a?8E3:a}return 0<=a.api.Yr()?a.api.Yr():g.gJ(a.api.T().experiments,"autoplay_time")||1E4},fhb=function(a,b){b=ehb(a,b);
var c=Math,d=c.min;var e=(0,g.M)()-a.u;c=d.call(c,e,b);b=0===b?1:Math.min(c/b,1);a.D.setAttribute("stroke-dashoffset",""+-211*(b+1));1<=b&&a.Gk()&&3!==a.api.getPresentingPlayerType()?a.select(!0):a.Gk()&&a.j.start()},f6=function(a){d6.call(this,a,"autonav-endscreen");
this.overlay=this.videoData=null;this.table=new g.T({G:"div",N:"ytp-suggestion-panel",W:[{G:"div",Ia:["ytp-autonav-endscreen-upnext-header","ytp-autonav-endscreen-more-videos"],qa:"\u041f\u043e\u043a\u0430\u0437\u0430\u0442\u044c \u0434\u0440\u0443\u0433\u0438\u0435 \u0432\u0438\u0434\u0435\u043e"}]});this.J=new g.T({G:"div",N:"ytp-suggestions-container"});this.videos=[];this.B=null;this.D=this.I=!1;this.u=new b6(this.player);g.D(this,this.u);this.u.Fa(this.element);a.getVideoData().wf?this.j=this.u:
(this.j=new e6(a),g.KS(this.player,this.j.element,4),g.D(this,this.j));this.overlay=new g.T({G:"div",N:"ytp-autonav-overlay-cancelled-state"});g.D(this,this.overlay);this.overlay.Fa(this.element);this.C=new g.cI(this);g.D(this,this.C);g.D(this,this.table);this.table.Fa(this.element);this.table.show();g.D(this,this.J);this.J.Fa(this.table.element);this.hide()},g6=function(a){var b=a.Df();
b!==a.D&&(a.D=b,a.player.ma("autonavvisibility"),a.D?(a.u!==a.j&&a.u.hide(),a.table.hide()):(a.u!==a.j&&a.u.show(),a.table.show()))},h6=function(a,b){g.T.call(this,{G:"button",
Ia:["ytp-watch-on-youtube-button","ytp-button"],qa:"{{content}}"});this.F=a;this.buttonType=this.buttonType=b;b=this.F.getVideoData();if(a.K("embeds_enable_server_driven_watch_again_on_youtube")){var c,d;if(c=(a=null==(c=b.fd)?void 0:null==(d=c.playerOverlays)?void 0:d.playerOverlayRenderer)&&g.K(a.watchOnYoutubeButton,g.MKa))this.j=c}if(this.j)this.update({content:this.j.title}),this.F.Yf(this.element,this),this.F.jg(this.element,this.j.trackingParams||null);else{switch(this.buttonType){case 1:c=
"\u041f\u043e\u0441\u043c\u043e\u0442\u0440\u0435\u0442\u044c \u0441\u043d\u043e\u0432\u0430 \u043d\u0430 YouTube";d=156915;break;case 2:c="\u041f\u0440\u043e\u0434\u043e\u043b\u0436\u0438\u0442\u044c \u043f\u0440\u043e\u0441\u043c\u043e\u0442\u0440 \u043d\u0430 YouTube";d=156942;break;default:c="\u041f\u0440\u043e\u0434\u043e\u043b\u0436\u0438\u0442\u044c \u043f\u0440\u043e\u0441\u043c\u043e\u0442\u0440 \u043d\u0430 YouTube",d=156942}this.update({content:c});this.F.sb(this.element,this,d)}2===this.buttonType&&
g.Rp(this.element,"ytp-continue-watching-button");this.Qa("click",this.onClick);g.$P(this,!0)},i6=function(a,b){d6.call(this,a,"embeds-lite-endscreen");
this.F=a;this.j=b;this.F.sb(this.element,this,156943);this.watchButton=new h6(a,2);g.D(this,this.watchButton);this.watchButton.Fa(this.element);this.hide()},ghb=function(a){d6.call(this,a,"subscribecard-endscreen");
this.j=new g.T({G:"div",N:"ytp-subscribe-card",W:[{G:"img",N:"ytp-author-image",X:{src:"{{profilePicture}}"}},{G:"div",N:"ytp-subscribe-card-right",W:[{G:"div",N:"ytp-author-name",qa:"{{author}}"},{G:"div",N:"html5-subscribe-button-container"}]}]});g.D(this,this.j);this.j.Fa(this.element);var b=a.getVideoData();this.subscribeButton=new g.lU("\u041f\u043e\u0434\u043f\u0438\u0441\u0430\u0442\u044c\u0441\u044f",null,"\u041e\u0442\u043c\u0435\u043d\u0438\u0442\u044c \u043f\u043e\u0434\u043f\u0438\u0441\u043a\u0443",
null,!0,!1,b.Yj,b.subscribed,"trailer-endscreen",null,null,a);g.D(this,this.subscribeButton);this.subscribeButton.Fa(this.j.Da("html5-subscribe-button-container"));this.S(a,"videodatachange",this.Pa);this.Pa();this.hide()},j6=function(a){var b=a.T(),c=g.fI||g.dK?{style:"will-change: opacity"}:void 0,d=b.C,e=["ytp-videowall-still"];
b.u&&e.push("ytp-videowall-show-text");g.T.call(this,{G:"a",Ia:e,X:{href:"{{url}}",target:d?b.Y:"","aria-label":"{{aria_label}}","data-is-live":"{{is_live}}","data-is-list":"{{is_list}}","data-is-mix":"{{is_mix}}"},W:[{G:"div",N:"ytp-videowall-still-image",X:{style:"{{background}}"}},{G:"span",N:"ytp-videowall-still-info",X:{"aria-hidden":"true"},W:[{G:"span",N:"ytp-videowall-still-info-bg",W:[{G:"span",N:"ytp-videowall-still-info-content",X:c,W:[{G:"span",N:"ytp-videowall-still-info-title",qa:"{{title}}"},
{G:"span",N:"ytp-videowall-still-info-author",qa:"{{author_and_views}}"},{G:"span",N:"ytp-videowall-still-info-live",qa:"\u0412 \u044d\u0444\u0438\u0440\u0435"},{G:"span",N:"ytp-videowall-still-info-duration",qa:"{{duration}}"}]}]}]},{G:"span",Ia:["ytp-videowall-still-listlabel-regular","ytp-videowall-still-listlabel"],X:{"aria-hidden":"true"},W:[{G:"span",N:"ytp-videowall-still-listlabel-icon"},"\u041f\u043b\u0435\u0439\u043b\u0438\u0441\u0442",{G:"span",N:"ytp-videowall-still-listlabel-length",
W:[" (",{G:"span",qa:"{{playlist_length}}"},")"]}]},{G:"span",Ia:["ytp-videowall-still-listlabel-mix","ytp-videowall-still-listlabel"],X:{"aria-hidden":"true"},W:[{G:"span",N:"ytp-videowall-still-listlabel-mix-icon"},"\u041c\u0438\u043a\u0441",{G:"span",N:"ytp-videowall-still-listlabel-length",qa:" (50+)"}]}]});this.suggestion=null;this.u=d;this.api=a;this.j=new g.cI(this);g.D(this,this.j);this.Qa("click",this.onClick);this.Qa("keypress",this.onKeyPress);this.j.S(a,"videodatachange",this.onVideoDataChange);
a.Yf(this.element,this);this.onVideoDataChange()},k6=function(a){d6.call(this,a,"videowall-endscreen");
var b=this;this.F=a;this.B=0;this.stills=[];this.C=this.videoData=null;this.D=this.J=!1;this.V=null;this.u=new g.cI(this);g.D(this,this.u);this.I=new g.Jp(function(){g.Rp(b.element,"ytp-show-tiles")},0);
g.D(this,this.I);var c=new g.T({G:"button",Ia:["ytp-button","ytp-endscreen-previous"],X:{"aria-label":"\u041d\u0430\u0437\u0430\u0434"},W:[g.fQ()]});g.D(this,c);c.Fa(this.element);c.Qa("click",this.b_,this);this.table=new g.XP({G:"div",N:"ytp-endscreen-content"});g.D(this,this.table);this.table.Fa(this.element);c=new g.T({G:"button",Ia:["ytp-button","ytp-endscreen-next"],X:{"aria-label":"\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435"},W:[g.gQ()]});g.D(this,c);c.Fa(this.element);c.Qa("click",
this.a_,this);a.getVideoData().wf?this.j=new b6(a,!0):this.j=new e6(a);g.D(this,this.j);g.KS(this.player,this.j.element,4);a.sb(this.element,this,158789);this.hide()},l6=function(a){return g.LS(a.player)&&a.dB()&&!a.C},m6=function(a){var b=a.Df();
b!==a.J&&(a.J=b,a.player.ma("autonavvisibility"))},n6=function(a){d6.call(this,a,"watch-again-on-youtube-endscreen");
this.watchButton=new h6(a,1);g.D(this,this.watchButton);this.watchButton.Fa(this.element);g.C8a(a)&&(this.j=new g.$2(a,g.oS(a)),g.D(this,this.j),this.u=new g.T({G:"div",Ia:["ytp-watch-again-on-youtube-endscreen-more-videos-container"],X:{tabIndex:"-1"},W:[this.j]}),g.D(this,this.u),this.j.Fa(this.u.element),this.u.Fa(this.element));a.sb(this.element,this,156914);this.hide()},khb=function(a){g.AT.call(this,a);
var b=this;this.endScreen=null;this.u=this.j=this.B=this.C=!1;this.listeners=new g.cI(this);g.D(this,this.listeners);var c=a.T(),d=a.getVideoData();d=d&&0!==d.endSeconds;if(g.uz(g.wK(c))&&d&&!g.HS(a))this.u=!0,this.endScreen=new i6(a,g.oS(a));else{var e;(c.K("shorts_mode_to_player_api")?a.Sb():null==(e=g.oS(a))?0:e.Sb())?this.endScreen=new n6(a):hhb(a)?(this.C=!0,ihb(this),this.j?this.endScreen=new f6(a):this.endScreen=new k6(a)):c.Uf?this.endScreen=new ghb(a):this.endScreen=new d6(a)}g.D(this,this.endScreen);
g.KS(a,this.endScreen.element,4);jhb(this);this.listeners.S(a,"videodatachange",this.onVideoDataChange,this);this.listeners.S(a,g.ZD("endscreen"),function(f){b.onCueRangeEnter(f)});
this.listeners.S(a,g.$D("endscreen"),function(f){b.onCueRangeExit(f)})},ihb=function(a){var b=a.player.getVideoData();
if(!b||a.j===b.ll&&a.B===b.wf)return!1;a.j=b.ll;a.B=b.wf;return!0},hhb=function(a){a=a.T();
return a.Vc&&!a.Uf},jhb=function(a){a.player.If("endscreen");
var b=a.player.getVideoData();b=new g.XD(Math.max(1E3*(b.lengthSeconds-10),0),0x8000000000000,{id:"preload",namespace:"endscreen"});var c=new g.XD(0x8000000000000,0x8000000000000,{id:"load",priority:8,namespace:"endscreen"});a.player.ye([b,c])};
g.XV.prototype.Rz=g.ca(36,function(a){this.jO!==a&&(this.jO=a,this.il())});
g.OU.prototype.Uq=g.ca(35,function(a){this.u!==a&&(this.u=a,this.Pa())});
g.XV.prototype.Uq=g.ca(34,function(a){this.shareButton&&this.shareButton.Uq(a)});
g.KU.prototype.Tq=g.ca(33,function(a){this.u!==a&&(this.u=a,this.Pa())});
g.XV.prototype.Tq=g.ca(32,function(a){this.overflowButton&&this.overflowButton.Tq(a)});
g.cU.prototype.UD=g.ca(31,function(a){this.kO!==a&&(this.kO=a,this.xp())});
g.xS.prototype.Yr=g.ca(5,function(){return this.app.Yr()});
g.BZ.prototype.Yr=g.ca(4,function(){return this.getVideoData().RR});g.w(a6,g.T);a6.prototype.select=function(){this.F.Ln(this.suggestion.videoId,this.suggestion.sessionData,this.suggestion.playlistId,void 0,void 0,this.suggestion.yB||void 0)&&this.F.qb(this.element)};
a6.prototype.onClick=function(a){g.ST(a,this.F,this.j,this.suggestion.sessionData||void 0)&&this.select()};
a6.prototype.onKeyPress=function(a){switch(a.keyCode){case 13:case 32:g.DO(a)||(this.select(),g.EO(a))}};g.w(b6,g.T);g.k=b6.prototype;g.k.CE=function(a){this.suggestion!==a&&(this.suggestion=a,$5(this.j,a),this.playButton.updateValue("url",this.suggestion.Ak()),c6(this))};
g.k.Gk=function(){return 0<this.B};
g.k.Zz=function(){this.Gk()||(this.B=Date.now(),ahb(this),$gb(this.F,chb(this)),g.Vp(this.F.getRootNode(),"countdown-running",this.Gk()))};
g.k.Ov=function(){this.Zq();ahb(this);var a=this.j.Da("ytp-autonav-endscreen-upnext-header");a&&g.Af(a,"\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435")};
g.k.Zq=function(){this.Gk()&&(this.C.stop(),this.B=0)};
g.k.select=function(a){this.F.nextVideo(!1,void 0===a?!1:a);this.Zq()};
g.k.FQ=function(a){g.ST(a,this.F)&&(a.currentTarget===this.playButton.element?this.F.qb(this.playButton.element):a.currentTarget===this.j.Da("ytp-autonav-endscreen-link-container")&&(a=this.j.Da("ytp-autonav-endscreen-link-container"),this.F.Ua(a,!0),this.F.qb(a)),this.select())};
g.k.VZ=function(){this.F.qb(this.cancelButton.element);g.BS(this.F,!0);this.D&&this.F.Na("innertubeCommand",this.D)};
g.k.onVideoDataChange=function(a,b){var c;this.D=null==(c=b.n1)?void 0:c.command};
g.k.U5=function(a){if(dhb(this)){var b=this.F.getVideoData().watchToWatchTransitionRenderer,c=null==b?void 0:b.fromColorPaletteDark;b=null==b?void 0:b.toColorPaletteDark;if(c&&b){var d=this.element;d.style.setProperty("--w2w-start-background-color",g.nR(c.surgeColor));d.style.setProperty("--w2w-start-primary-text-color",g.nR(c.primaryTitleColor));d.style.setProperty("--w2w-start-secondary-text-color",g.nR(c.secondaryTitleColor));d.style.setProperty("--w2w-end-background-color",g.nR(b.surgeColor));
d.style.setProperty("--w2w-end-primary-text-color",g.nR(b.primaryTitleColor));d.style.setProperty("--w2w-end-secondary-text-color",g.nR(b.secondaryTitleColor));d.style.setProperty("--w2w-animation-duration",a+"ms")}g.Vp(this.element,"ytp-w2w-animate",!0)}};
g.k.UZ=function(a){this.F.K("web_autonav_color_transition")&&2!==a&&g.Vp(this.element,"ytp-w2w-animate",!1)};
g.k.EQ=function(){var a=this.F.Df();this.I&&this.yb!==a&&g.$P(this,a);c6(this);this.F.Ua(this.container.element,a);this.F.Ua(this.cancelButton.element,a);this.F.Ua(this.j.Da("ytp-autonav-endscreen-link-container"),a);this.F.Ua(this.playButton.element,a)};
g.k.Ug=function(a){return 400>a.width||459>a.height};g.w(d6,g.T);g.k=d6.prototype;g.k.create=function(){this.created=!0};
g.k.destroy=function(){this.created=!1};
g.k.dB=function(){return!1};
g.k.Df=function(){return!1};
g.k.ZU=function(){return!1};g.w(e6,g.T);g.k=e6.prototype;g.k.kF=function(){this.notification&&(this.C.stop(),this.Fc(this.B),this.B=null,this.notification.close(),this.notification=null)};
g.k.CE=function(a){this.suggestion=a;$5(this,a,"hqdefault.jpg")};
g.k.GQ=function(){g.$P(this,this.api.Df());this.api.Ua(this.element,this.api.Df());this.api.Ua(this.Da("ytp-upnext-autoplay-icon"),this.api.Df());this.cancelButton&&this.api.Ua(this.cancelButton.element,this.api.Df())};
g.k.Q6=function(){window.focus();this.kF()};
g.k.Zz=function(a){var b=this;this.Gk()||(g.rC("a11y-announce","\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435 "+this.suggestion.title),this.u=(0,g.M)(),this.j=new g.Jp(function(){fhb(b,a)},25),fhb(this,a),$gb(this.api,ehb(this,a)));
g.Tp(this.element,"ytp-upnext-autoplay-paused")};
g.k.hide=function(){g.T.prototype.hide.call(this)};
g.k.Gk=function(){return!!this.j};
g.k.Ov=function(){this.Zq();this.u=(0,g.M)();fhb(this);g.Rp(this.element,"ytp-upnext-autoplay-paused")};
g.k.Zq=function(){this.Gk()&&(this.j.dispose(),this.j=null)};
g.k.select=function(a){a=void 0===a?!1:a;if(this.api.T().K("autonav_notifications")&&a&&window.Notification&&"function"===typeof document.hasFocus){var b=Notification.permission;"default"===b?Notification.requestPermission():"granted"!==b||document.hasFocus()||(this.kF(),this.notification=new Notification("\u0421\u043b\u0435\u0434\u0443\u044e\u0449\u0435\u0435",{body:this.suggestion.title,icon:this.suggestion.vg()}),this.B=this.S(this.notification,"click",this.Q6),this.C.start())}this.Zq();this.api.nextVideo(!1,
a)};
g.k.XZ=function(a){!g.zf(this.cancelButton.element,g.BO(a))&&g.ST(a,this.api)&&(this.api.Df()&&this.api.qb(this.Da("ytp-upnext-autoplay-icon")),this.select())};
g.k.WZ=function(){this.api.Df()&&this.cancelButton&&this.api.qb(this.cancelButton.element);g.BS(this.api,!0)};
g.k.H6=function(a){this.api.getPresentingPlayerType();this.show();this.Zz(a)};
g.k.I6=function(){this.api.getPresentingPlayerType();this.Zq();this.hide()};
g.k.oa=function(){this.Zq();this.kF();g.T.prototype.oa.call(this)};g.w(f6,d6);g.k=f6.prototype;g.k.create=function(){d6.prototype.create.call(this);this.C.S(this.player,"appresize",this.EA);this.C.S(this.player,"onVideoAreaChange",this.EA);this.C.S(this.player,"videodatachange",this.onVideoDataChange);this.C.S(this.player,"autonavchange",this.HQ);this.C.S(this.player,"autonavcancel",this.YZ);this.onVideoDataChange()};
g.k.show=function(){d6.prototype.show.call(this);(this.I||this.B&&this.B!==this.videoData.clientPlaybackNonce)&&g.BS(this.player,!1);g.LS(this.player)&&this.dB()&&!this.B?(g6(this),2===this.videoData.autonavState?this.player.T().K("fast_autonav_in_background")&&3===this.player.getVisibilityState()?this.j.select(!0):this.j.Zz():3===this.videoData.autonavState&&this.j.Ov()):(g.BS(this.player,!0),g6(this));this.EA()};
g.k.hide=function(){d6.prototype.hide.call(this);this.j.Ov();g6(this)};
g.k.EA=function(){var a=this.player.yk(!0,this.player.isFullscreen());g6(this);c6(this.u);g.Vp(this.element,"ytp-autonav-cancelled-small-mode",this.Ug(a));g.Vp(this.element,"ytp-autonav-cancelled-tiny-mode",this.wG(a));g.Vp(this.element,"ytp-autonav-cancelled-mini-mode",400>=a.width||360>=a.height);this.overlay&&g.Lm(this.overlay.element,{width:a.width+"px"});if(!this.D)for(a=0;a<this.videos.length;a++)g.Vp(this.videos[a].element,"ytp-suggestion-card-with-margin",1===a%2)};
g.k.onVideoDataChange=function(){var a=this.player.getVideoData();if(this.videoData!==a&&a){this.videoData=a;if((a=this.videoData.suggestions)&&a.length||this.player.K("web_player_autonav_empty_suggestions_fix")){var b=g.qM(this.videoData);b&&(this.j.CE(b),this.j!==this.u&&this.u.CE(b))}if(a&&a.length)for(b=0;b<lhb.length;++b){var c=lhb[b];if(a&&a[c]){this.videos[b]=new a6(this.player);var d=this.videos[b];c=a[c];d.suggestion!==c&&(d.suggestion=c,$5(d,c));g.D(this,this.videos[b]);this.videos[b].Fa(this.J.element)}}this.EA()}};
g.k.HQ=function(a){1===a?(this.I=!1,this.B=this.videoData.clientPlaybackNonce,this.j.Zq(),this.yb&&this.EA()):(this.I=!0,this.Df()&&(2===a?this.j.Zz():3===a&&this.j.Ov()))};
g.k.YZ=function(a){a?this.HQ(1):(this.B=null,this.I=!1)};
g.k.dB=function(){return 1!==this.videoData.autonavState};
g.k.Ug=function(a){return(910>a.width||459>a.height)&&!this.wG(a)&&!(400>=a.width||360>=a.height)};
g.k.wG=function(a){return 800>a.width&&!(400>=a.width||360>=a.height)};
g.k.Df=function(){return this.yb&&g.LS(this.player)&&this.dB()&&!this.B};
var lhb=[1,3,2,4];g.w(h6,g.T);g.k=h6.prototype;g.k.onClick=function(a){this.F.K("web_player_log_click_before_generating_ve_conversion_params")&&this.F.qb(this.element);this.j?this.F.Na("innertubeCommand",this.j.onTap):g.TT(this.getVideoUrl(),this.F,a);this.F.K("web_player_log_click_before_generating_ve_conversion_params")||this.F.qb(this.element)};
g.k.getVideoUrl=function(){var a=!0;switch(this.buttonType){case 1:a=!0;break;case 2:a=!1}a=this.F.getVideoUrl(a,!1,!1,!0);var b=this.F.T();if(g.fK(b)||g.oK(b)){var c={};b.va&&g.fK(b)&&g.fS(c,b.loaderUrl);g.fK(b)&&g.mS(this.F,"addEmbedsConversionTrackingParams",[c]);a:{switch(this.buttonType){case 2:b="emb_ytp_continue_watching";break a}b="emb_ytp_watch_again"}g.eS(c,b);a=g.mj(a,c)}return a};
g.k.Ua=function(){this.F.Ua(this.element,this.yb&&this.xa)};
g.k.show=function(){g.T.prototype.show.call(this);this.Ua()};
g.k.hide=function(){g.T.prototype.hide.call(this);this.Ua()};
g.k.ac=function(a){g.T.prototype.ac.call(this,a);this.Ua()};g.w(i6,d6);i6.prototype.show=function(){3!==this.player.getPlayerState()&&(d6.prototype.show.call(this),this.j.Rz(!0),this.j.Uq(!0),this.F.T().cm||this.j.Tq(!0),this.F.Ua(this.element,!0),this.watchButton.ac(!0))};
i6.prototype.hide=function(){d6.prototype.hide.call(this);this.j.Rz(!1);this.j.Uq(!1);this.j.Tq(!1);this.F.Ua(this.element,!1);this.watchButton.ac(!1)};g.w(ghb,d6);ghb.prototype.Pa=function(){var a=this.player.getVideoData();this.j.update({profilePicture:a.profilePicture,author:a.author});this.subscribeButton.channelId=a.Yj;var b=this.subscribeButton;a.subscribed?b.j():b.u()};g.w(j6,g.T);j6.prototype.select=function(){this.api.Ln(this.suggestion.videoId,this.suggestion.sessionData,this.suggestion.playlistId,void 0,void 0,this.suggestion.yB||void 0)&&this.api.qb(this.element)};
j6.prototype.onClick=function(a){if(g.fK(this.api.T())&&this.api.K("web_player_log_click_before_generating_ve_conversion_params")){this.api.qb(this.element);var b=this.suggestion.Ak(),c={};g.oKa(this.api,c,"emb_rel_end");b=g.mj(b,c);g.TT(b,this.api,a)}else g.ST(a,this.api,this.u,this.suggestion.sessionData||void 0)&&this.select()};
j6.prototype.onKeyPress=function(a){switch(a.keyCode){case 13:case 32:g.DO(a)||(this.select(),g.EO(a))}};
j6.prototype.onVideoDataChange=function(){var a=this.api.getVideoData(),b=this.api.T();this.u=a.D?!1:b.C};g.w(k6,d6);g.k=k6.prototype;g.k.create=function(){d6.prototype.create.call(this);var a=this.player.getVideoData();a&&(this.videoData=a);this.Ep();this.u.S(this.player,"appresize",this.Ep);this.u.S(this.player,"onVideoAreaChange",this.Ep);this.u.S(this.player,"videodatachange",this.onVideoDataChange);this.u.S(this.player,"autonavchange",this.hJ);this.u.S(this.player,"autonavcancel",this.ZZ);a=this.videoData.autonavState;a!==this.V&&this.hJ(a);this.u.S(this.element,"transitionend",this.e8)};
g.k.destroy=function(){g.Pz(this.u);g.$a(this.stills);this.stills=[];d6.prototype.destroy.call(this);g.Tp(this.element,"ytp-show-tiles");this.I.stop();this.V=this.videoData.autonavState};
g.k.dB=function(){return 1!==this.videoData.autonavState};
g.k.show=function(){var a=this.yb;d6.prototype.show.call(this);g.Tp(this.element,"ytp-show-tiles");this.player.T().u?g.Lp(this.I):this.I.start();(this.D||this.C&&this.C!==this.videoData.clientPlaybackNonce)&&g.BS(this.player,!1);l6(this)?(m6(this),2===this.videoData.autonavState?this.player.T().K("fast_autonav_in_background")&&3===this.player.getVisibilityState()?this.j.select(!0):this.j.Zz():3===this.videoData.autonavState&&this.j.Ov()):(g.BS(this.player,!0),m6(this));a!==this.yb&&this.player.Ua(this.element,
!0)};
g.k.hide=function(){var a=this.yb;d6.prototype.hide.call(this);this.j.Ov();m6(this);a!==this.yb&&this.player.Ua(this.element,!1)};
g.k.e8=function(a){g.BO(a)===this.element&&this.Ep()};
g.k.Ep=function(){var a,b,c,d;var e=(null==(a=this.videoData)?0:null==(b=a.suggestions)?0:b.length)?null==(c=this.videoData)?void 0:c.suggestions:[null==(d=this.videoData)?void 0:g.qM(d)];if(e.length){g.Rp(this.element,"ytp-endscreen-paginate");var f=this.F.yk(!0,this.F.isFullscreen());if(a=g.oS(this.F))a=a.xg()?48:32,f.width-=2*a;var h=f.width/f.height;d=96/54;b=a=2;var l=Math.max(f.width/96,2),m=Math.max(f.height/54,2);c=e.length;var n=Math.pow(2,2);var p=c*n+(Math.pow(2,2)-n);p+=Math.pow(2,2)-
n;for(p-=n;0<p&&(a<l||b<m);){var q=a/2,r=b/2,u=a<=l-2&&p>=r*n,x=b<=m-2&&p>=q*n;if((q+1)/r*d/h>h/(q/(r+1)*d)&&x)p-=q*n,b+=2;else if(u)p-=r*n,a+=2;else if(x)p-=q*n,b+=2;else break}d=!1;p>=3*n&&6>=c*n-p&&(4<=b||4<=a)&&(d=!0);n=96*a;p=54*b;h=n/p<h?f.height/p:f.width/n;h=Math.min(h,2);n=Math.floor(Math.min(f.width,n*h));p=Math.floor(Math.min(f.height,p*h));f=this.table.element;f.ariaLive="polite";g.Vm(f,n,p);g.Lm(f,{marginLeft:n/-2+"px",marginTop:p/-2+"px"});this.j.CE(g.qM(this.videoData));this.j instanceof
b6&&c6(this.j);g.Vp(this.element,"ytp-endscreen-takeover",l6(this));m6(this);n+=4;p+=4;h=0;f.ariaBusy="true";for(l=0;l<a;l++)for(m=0;m<b;m++)if(q=h,u=0,d&&l>=a-2&&m>=b-2?u=1:0===m%2&&0===l%2&&(2>m&&2>l?0===m&&0===l&&(u=2):u=2),q=g.Ae(q+this.B,c),0!==u){r=this.stills[h];r||(r=new j6(this.player),this.stills[h]=r,f.appendChild(r.element));x=Math.floor(p*m/b);var z=Math.floor(n*l/a),B=Math.floor(p*(m+u)/b)-x-4,F=Math.floor(n*(l+u)/a)-z-4;g.Rm(r.element,z,x);g.Vm(r.element,F,B);g.Lm(r.element,"transitionDelay",
(m+l)/20+"s");g.Vp(r.element,"ytp-videowall-still-mini",1===u);g.Vp(r.element,"ytp-videowall-still-large",2<u);u=Math.max(F,B);g.Vp(r.element,"ytp-videowall-still-round-large",256<=u);g.Vp(r.element,"ytp-videowall-still-round-medium",96<u&&256>u);g.Vp(r.element,"ytp-videowall-still-round-small",96>=u);q=e[q];r.suggestion!==q&&(r.suggestion=q,u=r.api.T(),x=g.Qp(r.element,"ytp-videowall-still-large")?"hqdefault.jpg":"mqdefault.jpg",$5(r,q,x),g.fK(u)&&!r.api.K("web_player_log_click_before_generating_ve_conversion_params")&&
(x=q.Ak(),z={},u.va&&g.fS(z,u.loaderUrl),g.mS(r.api,"addEmbedsConversionTrackingParams",[z]),x=g.mj(x,g.eS(z,"emb_rel_end")),r.updateValue("url",x)),(q=(q=q.sessionData)&&q.itct)&&r.api.jg(r.element,q));h++}f.ariaBusy="false";g.Vp(this.element,"ytp-endscreen-paginate",h<c);for(e=this.stills.length-1;e>=h;e--)a=this.stills[e],g.xf(a.element),g.Za(a);this.stills.length=h}};
g.k.onVideoDataChange=function(){var a=this.player.getVideoData();this.videoData!==a&&(this.B=0,this.videoData=a,this.Ep())};
g.k.a_=function(){this.B+=this.stills.length;this.Ep()};
g.k.b_=function(){this.B-=this.stills.length;this.Ep()};
g.k.ZU=function(){return this.j.Gk()};
g.k.hJ=function(a){1===a?(this.D=!1,this.C=this.videoData.clientPlaybackNonce,this.j.Zq(),this.yb&&this.Ep()):(this.D=!0,this.yb&&l6(this)&&(2===a?this.j.Zz():3===a&&this.j.Ov()))};
g.k.ZZ=function(a){if(a){for(a=0;a<this.stills.length;a++)this.F.Ua(this.stills[a].element,!0);this.hJ(1)}else this.C=null,this.D=!1;this.Ep()};
g.k.Df=function(){return this.yb&&l6(this)};g.w(n6,d6);n6.prototype.show=function(){if(3!==this.player.getPlayerState()){d6.prototype.show.call(this);var a=this.u;if(a){var b=0<this.j.suggestionData.length;g.Vp(this.element,"ytp-shorts-branded-ui",b);b?a.show():a.hide()}var c;null==(c=g.oS(this.player))||c.UD(!0);this.player.Ua(this.element,!0);this.watchButton.ac(!0)}};
n6.prototype.hide=function(){d6.prototype.hide.call(this);var a;null==(a=g.oS(this.player))||a.UD(!1);this.player.Ua(this.element,!1);this.watchButton.ac(!1)};g.w(khb,g.AT);g.k=khb.prototype;g.k.lw=function(){var a;if((this.player.T().K("shorts_mode_to_player_api")?this.player.Sb():null==(a=g.oS(this.player))?0:a.Sb())||this.u)return!0;a=this.player.getVideoData();var b;var c=!!((null==a?0:g.qM(a))||(null==a?0:null==(b=a.suggestions)?0:b.length));b=!hhb(this.player)||c;c=a.hj||g.oK(a.B);var d=this.player.JB();a=a.mutedAutoplay;return b&&!c&&!d&&!a};
g.k.Df=function(){return this.endScreen.Df()};
g.k.E4=function(){return this.Df()?this.endScreen.ZU():!1};
g.k.oa=function(){this.player.If("endscreen");g.AT.prototype.oa.call(this)};
g.k.load=function(){var a=this.player.getVideoData();var b=a.transitionEndpointAtEndOfStream;if(b&&b.videoId){var c=this.player.wb().cf.get("heartbeat"),d=g.qM(a);!d||b.videoId!==d.videoId||a.dY?(this.player.Ln(b.videoId,void 0,void 0,!0,!0,b),c&&c.DG("HEARTBEAT_ACTION_TRIGGER_AT_STREAM_END","HEARTBEAT_ACTION_TRANSITION_REASON_HAS_NEW_STREAM_TRANSITION_ENDPOINT"),a=!0):a=!1}else a=!1;a||(g.AT.prototype.load.call(this),this.endScreen.show())};
g.k.unload=function(){g.AT.prototype.unload.call(this);this.endScreen.hide();this.endScreen.destroy()};
g.k.onCueRangeEnter=function(a){this.lw()&&(this.endScreen.created||this.endScreen.create(),"load"===a.getId()&&this.load())};
g.k.onCueRangeExit=function(a){"load"===a.getId()&&this.loaded&&this.unload()};
g.k.onVideoDataChange=function(){jhb(this);this.C&&ihb(this)&&(this.endScreen&&(this.endScreen.hide(),this.endScreen.created&&this.endScreen.destroy(),this.endScreen.dispose()),this.j?this.endScreen=new f6(this.player):this.endScreen=new k6(this.player),g.D(this,this.endScreen),g.KS(this.player,this.endScreen.element,4))};g.zT("endscreen",khb);})(_yt_player);
