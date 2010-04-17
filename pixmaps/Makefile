include ../buildsys.mk

install-extra:
	for size in 16 22 24 32 36; do \
		i=audacious2-$${size}.png; \
		${INSTALL_STATUS}; \
		if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/$${size}x$${size}/apps/audacious2.png; then \
			${INSTALL_OK}; \
		else \
			${INSTALL_FAILED}; \
		fi \
	done

	i=audacious2.png; \
	${INSTALL_STATUS}; \
	if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/48x48/apps/audacious2.png; then \
		${INSTALL_OK}; \
	else \
		${INSTALL_FAILED}; \
	fi

	i=audacious2.svg; \
	${INSTALL_STATUS}; \
	if ${INSTALL} -D -m 644 $$i ${DESTDIR}${datadir}/icons/hicolor/scalable/apps/audacious2.svg; then \
		${INSTALL_OK}; \
	else \
		${INSTALL_FAILED}; \
	fi
