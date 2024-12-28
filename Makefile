run-performance:
	@cd scripts && \
	bun run factorial.ts && \
	go run factorial.go && \
	rust-script factorial.rs && \
	gcc -O2 factorial.c -o /tmp/temp_exec && /tmp/temp_exec && rm /tmp/temp_exec
