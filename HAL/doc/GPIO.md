# GPIO Feature Comparison

## basic input/output functions

| Feature                  | ATSAMD09 | ATSAMC21 | STM32F030 | STM32F407 |
|--------------------------|----------|----------|-----------|-----------|
| Read                     |     x    |     x    |     x     |     x     |
| Set                      |     x    |     x    |     x     |     x     |
| Clear                    |     x    |     x    |     x     |     x     |
| Toggle                   |     x    |     x    |     x     |     x     |
| Write                    |     x    |     x    |     x     |     x     |


## basic pin config functions

| Feature                  | ATSAMD09 | ATSAMC21 | STM32F030 | STM32F407 |
|--------------------------|----------|----------|-----------|-----------|
| EnablePeripheral         |     !    |     !    |     x     |     x     |
| SetDirection             |     x    |     x    |     x     |     x     |
| GetPullMode              |     x    |     x    |     x     |     x     |
| SetPullMode              |     x    |     x    |     x     |     x     |
| GetOutputType            |          |          |     x     |     x     |
| SetOutputType            |          |          |     x     |     x     |
| ConfigureMultiplex       |     x    |     x    |     x     |     x     |
| DisableMultiplex         |     x    |     x    |     x     |     x     |


## controller specific functions

| Feature                  | ATSAMD09 | ATSAMC21 | STM32F030 | STM32F407 |
|--------------------------|----------|----------|-----------|-----------|
| ToggleDirection          |     x    |     x    |           |           |
| EnableInputSynchronizer  |     x    |     x    |           |           |
| DisableInputSynchronizer |     x    |     x    |           |           |
| SetDriveStrength         |     x    |     x    |           |           |
| EnableInputBuffer        |     x    |     x    |           |           |
| DisableInputBuffer       |     x    |     x    |           |           |
| EnableEventAction        |          |     x    |           |           |
| DisableEventAction       |          |     x    |           |           |
| GetMode                  |          |          |     x     |     x     |
| SetMode                  |          |          |     x     |     x     |
| GetOutputSpeed           |          |          |     x     |     x     |
| SetOutputSpeed           |          |          |     x     |     x     |
