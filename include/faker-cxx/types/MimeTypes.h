#pragma once

#include <string>
#include <vector>

namespace faker
{
const std::vector<std::string> mimeTypes = {
    "application/atom+xml",
    "application/font-woff",
    "application/gzip",
    "application/java-archive",
    "application/javascript",
    "application/json",
    "application/ld+json",
    "application/msword",
    "application/octet-stream",
    "application/ogg",
    "application/pdf",
    "application/rdf+xml",
    "application/rtf",
    "application/vnd.apple.mpegurl",
    "application/vnd.ms-excel",
    "application/vnd.ms-fontobject",
    "application/vnd.openxmlformats-officedocument.presentationml.presentation",
    "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet",
    "application/vnd.openxmlformats-officedocument.wordprocessingml.document",
    "application/x-7z-compressed",
    "application/x-font-ttf",
    "application/x-javascript",
    "application/x-mpegURL",
    "application/x-rar-compressed",
    "application/x-shockwave-flash",
    "application/x-tar",
    "application/x-www-form-urlencoded",
    "application/xhtml+xml",
    "application/xml",
    "application/zip",
    "audio/aac",
    "audio/midi",
    "audio/ogg",
    "audio/wav",
    "audio/webm",
    "audio/mpeg",
    "font/woff",
    "font/woff2",
    "image/apng",
    "image/bmp",
    "image/gif",
    "image/jpeg",
    "image/png",
    "image/svg+xml",
    "image/tiff",
    "image/webp",
    "image/x-icon",
    "multipart/form-data",
    "text/calendar",
    "text/css",
    "text/csv",
    "text/html",
    "text/javascript",
    "text/plain",
    "text/xml",
    "video/mp4",
    "video/3gpp",
    "video/3gpp2",
    "video/mp2t",
    "video/mpeg",
    "video/ogg",
    "video/webm",
    "video/x-msvideo",
    "video/x-flv"
};

const std::vector<std::string> commonMimeTypes = {
    "application/pdf",
    "audio/mpeg",
    "audio/wav",
    "image/png",
    "image/jpeg",
    "image/gif",
    "video/mp4",
    "video/mpeg",
    "text/html"
};

const std::vector<std::string> commonFileTypes = {"video", "audio", "image", "text", "application"};

}