/* JSConsole.c generated by valac 0.40.17, the Vala compiler
 * generated from JSConsole.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define JS_TEST_TYPE_JS_CONSOLE (js_test_js_console_get_type ())
#define JS_TEST_JS_CONSOLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JS_TEST_TYPE_JS_CONSOLE, JSTestJSConsole))
#define JS_TEST_JS_CONSOLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), JS_TEST_TYPE_JS_CONSOLE, JSTestJSConsoleClass))
#define JS_TEST_IS_JS_CONSOLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JS_TEST_TYPE_JS_CONSOLE))
#define JS_TEST_IS_JS_CONSOLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), JS_TEST_TYPE_JS_CONSOLE))
#define JS_TEST_JS_CONSOLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), JS_TEST_TYPE_JS_CONSOLE, JSTestJSConsoleClass))

typedef struct _JSTestJSConsole JSTestJSConsole;
typedef struct _JSTestJSConsoleClass JSTestJSConsoleClass;
typedef struct _JSTestJSConsolePrivate JSTestJSConsolePrivate;
enum  {
	JS_TEST_JS_CONSOLE_0_PROPERTY,
	JS_TEST_JS_CONSOLE_NUM_PROPERTIES
};
static GParamSpec* js_test_js_console_properties[JS_TEST_JS_CONSOLE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _JSTestJSConsole {
	GtkTextView parent_instance;
	JSTestJSConsolePrivate * priv;
};

struct _JSTestJSConsoleClass {
	GtkTextViewClass parent_class;
};


static gpointer js_test_js_console_parent_class = NULL;
static JSTestJSConsole* js_test_js_console_instance;
static JSTestJSConsole* js_test_js_console_instance = NULL;

GType js_test_js_console_get_type (void) G_GNUC_CONST;
JSTestJSConsole* js_test_js_console_new (void);
JSTestJSConsole* js_test_js_console_construct (GType object_type);
#define JS_TEST_CONSTANTS_APPLICATION_HEIGHT 500
#define JS_TEST_CONSTANTS_APPLICATION_WIDTH 700
void js_test_js_console_set_text (JSTestJSConsole* self,
                                  const gchar* new_text);
JSTestJSConsole* js_test_js_console_get_instance (void);
static void js_test_js_console_finalize (GObject * obj);


JSTestJSConsole*
js_test_js_console_construct (GType object_type)
{
	JSTestJSConsole * self = NULL;
	GtkTextBuffer* _tmp0_;
	GtkTextBuffer* _tmp1_;
#line 6 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	self = (JSTestJSConsole*) g_object_new (object_type, NULL);
#line 7 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, JS_TEST_CONSTANTS_APPLICATION_HEIGHT / 4, JS_TEST_CONSTANTS_APPLICATION_WIDTH / 3);
#line 8 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	gtk_text_view_set_editable ((GtkTextView*) self, FALSE);
#line 9 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	gtk_widget_set_can_focus ((GtkWidget*) self, FALSE);
#line 10 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp0_ = gtk_text_view_get_buffer ((GtkTextView*) self);
#line 10 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp1_ = _tmp0_;
#line 10 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	gtk_text_view_set_buffer ((GtkTextView*) self, _tmp1_);
#line 6 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	return self;
#line 78 "JSConsole.c"
}


JSTestJSConsole*
js_test_js_console_new (void)
{
#line 6 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	return js_test_js_console_construct (JS_TEST_TYPE_JS_CONSOLE);
#line 87 "JSConsole.c"
}


void
js_test_js_console_set_text (JSTestJSConsole* self,
                             const gchar* new_text)
{
	GtkTextBuffer* _tmp0_;
	GtkTextBuffer* _tmp1_;
#line 13 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	g_return_if_fail (self != NULL);
#line 13 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	g_return_if_fail (new_text != NULL);
#line 14 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp0_ = gtk_text_view_get_buffer ((GtkTextView*) self);
#line 14 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp1_ = _tmp0_;
#line 14 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	gtk_text_buffer_set_text (_tmp1_, new_text, -1);
#line 107 "JSConsole.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 21 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	return self ? g_object_ref (self) : NULL;
#line 116 "JSConsole.c"
}


JSTestJSConsole*
js_test_js_console_get_instance (void)
{
	JSTestJSConsole* result = NULL;
	JSTestJSConsole* _tmp0_;
	JSTestJSConsole* _tmp2_;
	JSTestJSConsole* _tmp3_;
#line 18 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp0_ = js_test_js_console_instance;
#line 18 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	if (_tmp0_ == NULL) {
#line 131 "JSConsole.c"
		JSTestJSConsole* _tmp1_;
#line 19 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
		_tmp1_ = js_test_js_console_new ();
#line 19 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
		g_object_ref_sink (_tmp1_);
#line 19 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
		_g_object_unref0 (js_test_js_console_instance);
#line 19 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
		js_test_js_console_instance = _tmp1_;
#line 141 "JSConsole.c"
	}
#line 21 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp2_ = js_test_js_console_instance;
#line 21 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 21 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	result = _tmp3_;
#line 21 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	return result;
#line 151 "JSConsole.c"
}


static void
js_test_js_console_class_init (JSTestJSConsoleClass * klass)
{
#line 1 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	js_test_js_console_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	G_OBJECT_CLASS (klass)->finalize = js_test_js_console_finalize;
#line 162 "JSConsole.c"
}


static void
js_test_js_console_instance_init (JSTestJSConsole * self)
{
}


static void
js_test_js_console_finalize (GObject * obj)
{
	JSTestJSConsole * self;
#line 1 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, JS_TEST_TYPE_JS_CONSOLE, JSTestJSConsole);
#line 1 "/home/nick/Desktop/MyApps/JS_Test/src/Views/JSConsole.vala"
	G_OBJECT_CLASS (js_test_js_console_parent_class)->finalize (obj);
#line 180 "JSConsole.c"
}


GType
js_test_js_console_get_type (void)
{
	static volatile gsize js_test_js_console_type_id__volatile = 0;
	if (g_once_init_enter (&js_test_js_console_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (JSTestJSConsoleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) js_test_js_console_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (JSTestJSConsole), 0, (GInstanceInitFunc) js_test_js_console_instance_init, NULL };
		GType js_test_js_console_type_id;
		js_test_js_console_type_id = g_type_register_static (gtk_text_view_get_type (), "JSTestJSConsole", &g_define_type_info, 0);
		g_once_init_leave (&js_test_js_console_type_id__volatile, js_test_js_console_type_id);
	}
	return js_test_js_console_type_id__volatile;
}


