### װ����ģʽ
### Decorator Pattern

<br>

##### ��̬�ؽ����θ��ӵ������ϣ���Ҫ��չ���ܣ�װ�����ṩ�˱ȼ̳и�������ķ�����װ���߿�������ί�б�װ���ߵ���Ϊ֮ǰ��/��֮�󣬼����Լ�����Ϊ���Դﵽ�ض���Ŀ�ġ�

<br>

##### Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality. The decorator adds its own behavior either before and/or after delegating to the object it decorates to do the rest of the job.

<br>

##### �����ÿ��ȵ����Ϸ�����ϵΪ���������һ��ļ̳���ϵ�����������������ը��������壬�����¹��ܲ�����������������������������װ����ģʽ��̬����չ���ܣ����ǻ��ǻ��õ��̳У�ֻ��������ļ̳�Ŀ�Ĳ��ǡ������Ϊ�������ǡ�����ƥ�䡱��

<br>

##### Take set-selling-system for coffee shop for example. If we adopt common heritance system , we may get class explosions, rigid designs, or add functionality to the sub-classes which may not appropriate.So decorator pattern is helpful to extend functionality dynamically, but heritance is still needed, not for "acquiring behavior" but for "matching type".