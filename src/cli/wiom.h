/* This file is automatically generated from the documentation. EDIT AT YOUR OWN RISK. */

#ifndef WIOM_CLI_H
#define WIOM_CLI_H

#include "cli/cli.h"

#ifndef VERSION
#define VERSION "0.0.3"
#endif

static int handle_option_i(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_o(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_f(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_c(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_p(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_P(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_q(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_a(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_A(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_v(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_V(Tracee *tracee, const Cli *cli, const char *value);
static int handle_option_h(Tracee *tracee, const Cli *cli, const char *value);

static int pre_initialize_bindings(Tracee *, const Cli *, size_t, char *const *, size_t);
static int post_initialize_bindings(Tracee *, const Cli *, size_t, char *const *, size_t);
static int pre_initialize_exe(Tracee *, const Cli *, size_t, char *const *, size_t);

static Cli wiom_cli = {
	.version  = VERSION,
	.name     = "wiom",
	.subtitle = "Watch process Inputs, Ouputs, and More ...",
	.synopsis = "wiom [option] ... [command]",
	.colophon = "Copyright (C) 2014 STMicroelectronics, licensed under GPL v2 or later.",
	.logo = "\
    ____ ___ ___ ____       ____ ____\n\
    \\   \\   \\   (____)_____|    \\    \\\n\
     \\          |    /  _  \\          \\\n\
      \\____\\____|____\\_____/___\\___\\___\\",

	.pre_initialize_bindings  = pre_initialize_bindings,
	.post_initialize_bindings = post_initialize_bindings,
	.pre_initialize_exe       = pre_initialize_exe,

	.options = {
	{ .class = "Options",
	  .arguments = {
		{ .name = "-i", .separator = ' ', .value = "path" },
		{ .name = "--input", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_i,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-o", .separator = ' ', .value = "path" },
		{ .name = "--output", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_o,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-f", .separator = ' ', .value = "string" },
		{ .name = "--format", .separator = '=', .value = "string" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_f,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-c", .separator = '\0', .value = NULL },
		{ .name = "--discard-argv", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_c,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-p", .separator = ' ', .value = "path" },
		{ .name = "--mask-path", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_p,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-P", .separator = ' ', .value = "path" },
		{ .name = "--unmask-path", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_P,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-q", .separator = '\0', .value = NULL },
		{ .name = "--mask-pseudo-files", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_q,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-a", .separator = ' ', .value = "string" },
		{ .name = "--mask-action", .separator = '=', .value = "string" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_a,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-A", .separator = ' ', .value = "string" },
		{ .name = "--unmask-action", .separator = '=', .value = "string" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_A,
	  .description = "TODO",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-v", .separator = ' ', .value = "value" },
		{ .name = "--verbose", .separator = '=', .value = "value" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_v,
	  .description = "Set the level of debug information to *value*.",
	  .detail = "The higher the integer value is, the more detailed debug\n\
information is printed to the standard error stream.  A negative\n\
value makes WioM quiet except on fatal errors.",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-V", .separator = '\0', .value = NULL },
		{ .name = "--version", .separator = '\0', .value = NULL },
		{ .name = "--about", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_V,
	  .description = "Print version, copyright, license and contact, then exit.",
	  .detail = "",
	},
	{ .class = "Options",
	  .arguments = {
		{ .name = "-h", .separator = '\0', .value = NULL },
		{ .name = "--help", .separator = '\0', .value = NULL },
		{ .name = "--usage", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_h,
	  .description = "Print the user manual, then exit.",
	  .detail = "",
	},
	END_OF_OPTIONS,
	},
};

#endif /* WIOM_CLI_H */
