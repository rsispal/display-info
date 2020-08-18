const {getMonitorInfo: WgetMonitorInfo} = require("bindings")("display-info-wrapper");

function getMonitorInfo() {
    return WgetMonitorInfo();
}

exports.getMonitorInfo = getMonitorInfo;
