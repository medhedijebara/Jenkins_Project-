FROM scratch
COPY app  app
EXPOSE 2000
CMD ["./app"]
