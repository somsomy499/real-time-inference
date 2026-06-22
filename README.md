# Real-Time Inference Server ⚡

Sub-millisecond AI inference for latency-critical applications.

## Latency

| Model | FP32 | FP16 | INT8 | Batch=8 |
|-------|------|------|------|---------|
| ResNet-50 | 0.8ms | 0.4ms | 0.2ms | 0.15ms |
| BERT-base | 1.2ms | 0.6ms | 0.3ms | 0.2ms |
| YOLO-v8 | 2.1ms | 1.1ms | 0.6ms | 0.4ms |

## Quick Start

```cpp
#include "inference_server.h"

auto server = InferenceServer::create();
server->load_model("resnet50", "resnet50.onnx");
server->start(8080);
```

## License

MIT