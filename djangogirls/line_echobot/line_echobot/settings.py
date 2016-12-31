"""
Django settings for line_echobot project.

For more information on this file, see
https://docs.djangoproject.com/en/1.6/topics/settings/

For the full list of settings and their values, see
https://docs.djangoproject.com/en/1.6/ref/settings/
"""


# Build paths inside the project like this: os.path.join(BASE_DIR, ...)
import os
BASE_DIR = os.path.dirname(os.path.dirname(__file__))



# Quick-start development settings - unsuitable for production
# See https://docs.djangoproject.com/en/1.6/howto/deployment/checklist/

# SECURITY WARNING: keep the secret key used in production secret!
#SECRET_KEY = 'r)a15e-u#_(!(-^ucod7_@+arz8l2#lscox(c&bgvx%y495^wh'
#LINE_CHANNEL_ACCESS_TOKEN='5dnIIfYAYJLPDZlg0u9CuuCXnfaEhJJCA2X5wBaOH46NBXsTeySHYFeIP2+4B4Nc3zylrJ0mn6zY2ItyjuAjrnO2hW9g1+ri4aRJbbW27V1HG3vPuBh3sSG8UEZXnAF3j43yoPckvineVfbhT78FvAdB04t89/1O/w1cDnyilFU='
#LINE_CHANNEL_SECRET='f1115119cf243a66b3831069afa5fdba'

def get_env_variable(var_name):
	try:
		return os.environ[var_name]
	except KeyError:
		error_msg = 'Set the {} environment variable'.format(var_name)
		raise ImproperlyConfigured(error_msg)

SECRET_KEY = get_env_variable('SECRET_KEY')
LINE_CHANNEL_ACCESS_TOKEN = get_env_variable('LINE_CHANNEL_ACCESS_TOKEN')
LINE_CHANNEL_SECRET = get_env_variable('LINE_CHANNEL_SECRET')


# SECURITY WARNING: don't run with debug turned on in production!
DEBUG = True

TEMPLATE_DEBUG = True

ALLOWED_HOSTS = []


# Application definition

INSTALLED_APPS = (
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
	'echobot'
)

MIDDLEWARE_CLASSES = (
    'django.contrib.sessions.middleware.SessionMiddleware',
    'django.middleware.common.CommonMiddleware',
    'django.middleware.csrf.CsrfViewMiddleware',
    'django.contrib.auth.middleware.AuthenticationMiddleware',
    'django.contrib.messages.middleware.MessageMiddleware',
    'django.middleware.clickjacking.XFrameOptionsMiddleware',
)

ROOT_URLCONF = 'line_echobot.urls'

WSGI_APPLICATION = 'line_echobot.wsgi.application'


# Database
# https://docs.djangoproject.com/en/1.6/ref/settings/#databases

DATABASES = {
    'default': {
        'ENGINE': 'django.db.backends.sqlite3',
        'NAME': os.path.join(BASE_DIR, 'db.sqlite3'),
    }
}

# Internationalization
# https://docs.djangoproject.com/en/1.6/topics/i18n/

LANGUAGE_CODE = 'en-us'

TIME_ZONE = 'UTC'

USE_I18N = True

USE_L10N = True

USE_TZ = True


# Static files (CSS, JavaScript, Images)
# https://docs.djangoproject.com/en/1.6/howto/static-files/

STATIC_URL = '/static/'
