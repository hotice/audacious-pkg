DATA = audacious.png \
       audacious.svg

include ../buildsys.mk

install-extra:
	for size in 16 22 24 32 36; do \
		i=audacious-$${size}.png; \
		${INSTALL_STATUS}; \
		if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/$${size}x$${size}/apps/audacious.png; then \
			${INSTALL_OK}; \
		else \
			${INSTALL_FAILED}; \
		fi \
	done

	i=audacious.png; \
	${INSTALL_STATUS}; \
	if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/48x48/apps/audacious.png; then \
		${INSTALL_OK}; \
	else \
		${INSTALL_FAILED}; \
	fi

	i=audacious.svg; \
	${INSTALL_STATUS}; \
	if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/scalable/apps/audacious.svg; then \
		${INSTALL_OK}; \
	else \
		${INSTALL_FAILED}; \
	fi
