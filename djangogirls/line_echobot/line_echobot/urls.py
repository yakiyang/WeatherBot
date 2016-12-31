from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

import echobot

urlpatterns = [
    url(r'^admin/', include(admin.site.urls)),
	url(r'^echobot/', include('echobot.urls')),
]
