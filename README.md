# STM32 - VSCode

Keil实在太难使用了，

* 界面丑陋

* 配置发杂

* 代码提示功能很差

* 还不支持中文。

作为一个对对软件颜值要求很高的人，对第一点我非常不能忍受。于是开始尝试在VSCode或CLion上~~开发~~学习STM32程序。于是这个模板就产生了。

要使用这个模板，需要安装VSCode的插件：`Platformio`

打开插件的主页，选择打开项目，选中`platformio.ini`即可。

本模板适配`STM32F103RBT6`开发板，不过使用别的开发板也只需要对`platformio.ini`稍作修改、更换官方库文件即可。

模板的`lib`文件夹自带正点原子的三个库以及官方库。

目录树如下：

```
├─include
├─lib
│  ├─delay
│  ├─interrupt
│  │  ├─include
│  │  └─src
│  ├─STM32F10x_FWLib
│  │  ├─include
│  │  └─src
│  ├─sys
│  └─usart
├─src
└─test
```