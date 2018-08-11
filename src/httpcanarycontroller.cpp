#include "httpcanarycontroller.h"

HttpCanaryController::HttpCanaryController(QObject* parent) : HttpRequestHandler (parent)
{
    //empty
}

void HttpCanaryController::service(HttpRequest& request, HttpResponse& response){
    qDebug("CANARY ALERT");
    response.write("Request received");
}