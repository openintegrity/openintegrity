<?php
/**
 * @file
 * openintegrity.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function openintegrity_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'About Open Integrity Index',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '971d98df-b9ee-4500-8df6-f50613e7edf4',
  'type' => 'page',
  'language' => 'en',
  'created' => 1369132679,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7f1595bc-ea1b-46bf-8d8a-f99835f6e81f',
  'revision_uid' => 96,
  'body' => array(
    'ar' => array(
      0 => array(
        'value' => '<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Teaser.png){.img-basics-left}
### تعرف على أدواتك بشكل أفضل ### {.about-left}
#### هل تقوم أدواتك ومطوروها بحمايتك وحماية بياناتك؟ اكتشف ذلك عبر نظرة سريعة على شارة مؤشر النزاهة المفتوح. [اقرأ المزيد حول معاييرنا](#criteria)  #### {.about-left}
</div>
<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Alternatives_0.png){.img-basics-right}
### اكتشف بدائل أفضل ### {.about-right}
#### تعرف على أدوات ذات مجموع نقاط أعلى على المؤشر. [اقرأ المزيد حول نظام التوصية](#alternatives) #### {.about-right}
</div>
<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Evidence.png){.img-basics-left}
### تعرف على آراء الخبراء ### {.about-left}
#### اطلع على الأدلة التي أرسلها الخبراء. [اقرأ المزيد حول موثوقية نظام نقاط المؤشر](#trust) #### {.about-left}
</div>
<br>
<br>
## نظرة عامة ##
  * [مقدمة](#intro)
  * [الشركاء](#partners)
  * [مؤشر النزاهة المفتوح للمستخدمين](#users)
  * [مؤشر النزاهة المفتوح للمطورين](#developers)
  * [مؤشر النزاهة المفتوح للمدربين والمعلمين](#educators)
  * [التقنية](#tech)
  * [كيف يمكنك المساهمة؟](#contribute)
  * [الأسئلة المتكررة](#faq)

## مقدمة ##            {#intro}

سيمكن مؤشر النزاهة المفتوح المستخدمين من اتخاذ قرارات معقدة حول الأدوات التي يستخدمونها للخصوصية والاتصالات، دون الحاجة لخبرة واسعة في هندسة الأمن.

للمؤشر عدة أهداف محددة تتضمن:

  * تمكين المستخدمين من اتخاذ قرارات مطلعة حول الأدوات التي يستخدمونها والطرق التي قد تكشف معلوماتهم الشخصية بها.
  * إنشاء منصة لنتائج مراجعات وتقييمات الكود كي يتمكن العامة من الوصول إليها.
  * توفير مورد للمنصات الأخرى، مثل متاجر التطبيقات، لدمج الأمن الرقمي ضمن عملية اتخاذ القرار لتنصيب البرمجيات.
  * تحسين القدرة على الوصول إلى مواد حول مبادئ الأمن الرقمي بلغات أخرى غير الإنكليزية.
  * التوعية حول المبادئ الأساسية للخصوصية عبر التصميم أثناء عملية تطوير أدوات الاتصالات.
  * التشجيع على تكوين علاقات أقوى بين المطورين ومستخدمي أدواتهم.

## الشركاء  ##          {#partners}

مشروع تعاوني بين:

[![img](/sites/default/files/styles/medium/public/GP_logo%2Btxt_hires_black_on_trans_1.png?itok=2bNw5eyK){.img-about} Guardian Project](https://guardianproject.info)

[![img](/sites/default/files/styles/medium/public/logo.png?itok=1C8GV7f_){.img-about} Internews](http://internews.org)

[![img](/sites/default/files/styles/medium/public/logo_1.png?itok=CtRpZLjK){.img-about} OpenITP](https://openitp.org)

[![img](/sites/default/files/styles/medium/public/images.jpg?itok=A_rXqUOa){.img-about}Tactical Technology Collective](https://tacticaltech.org)

[![img](/sites/default/files/styles/medium/public/tor-logo_4.jpg?itok=AIXIpWjZ){.img-about} Tor Project](https://torproject.org)

[![img](/sites/default/files/styles/medium/public/8b4f9f9ce0a6da61d88ebc771746490c.png?itok=Qe_hFgu0){.img-about} iilab](https://iilab.org)

## مؤشر النزاهة المفتوح للمستخدمين ##            {#users}

مؤشر النزاهة المفتوح يساعدك على معرفة مدى اهتمام الأدوات التي تستخدمها ومطوريها بأمنك وخصوصيتك. هناك عدد من الخطوات التي يمكن للبرمجيات والمنصات اتخاذها لتحسين مدى حمايتها لك وقد عملنا مع خبراء في هذا المجال لتحديد أفضل الخطوات والممارسات لحمايتك.

عندما ترى شارة مؤشر النزاهة المفتوح، يمكنك أن تتأكد أن مطور الأداة أو الأشخاص الذين ينشرون مواد تعليمية يتخذون حماية أمن وخصوصيتك بجدية.

اكتشف بدائل أفضل للأدوات التي تستخدمها وتعرف على ما يصنع الفرق لاحتياجاتك الشخصية. ولكن تذكر، تأكد أنك تفهم المزيد حول الأخطار التي تواجهك وممارساتك خارج العالم الرقمي قبل أن تتخذ أي مخاطرة.

## مؤشر النزاهة المفتوح للمطورين ##           {#developers}

إضافة أداتك إلى المؤشر تعبير عن اتباعك لأفضل الممارسات عندما يتعلق الأمر بحماية مستخدميك وبياناتهم. نظام التوصية الخاص بمؤشر النزاهة المفتوح يعني أن لديك الفرصة للوصول إلى جمهور أكبر يهتم بالأمن والخصوصية الرقميين ويحتاج لهما.

نظامنا المعتمد على الأدلة ومراجعة الأقران يوفر لك ضمانات أن مجموع النقاط الذي تحصل عليه أداتك يعتمد على الحقائق وأن المزاعم حول أدواتك وغيرها من أدوات المطورين قد تم التحقق منها.

[اطلب حساب مطور](/developer/register) وابدأ بإضافة الأدلة لدعم أدواتك. 

## مؤشر النزاهة المفتوح للمدربين والمعلمين ##           {#educators}

كمدرب أو مرشد أو منظمة تقوم بنشر مواد تعليمية مخصصة لمساعدة المستخدمين على فهم المخاطر التي تواجههم بشكل أفضل وتطوير مهارات جديدة لحماية أنفسهم وحماية بياناتهم من التطفل أو الهجوم، يمكن لمؤشر النزاهة المفتوح مساعدتك. حيث أنه يوفر موارد يمكنك مشاركتها مع المتدربين لديك ومع جمهورك لإعطائهم بيانات موثوقة تساعدهم على البقاء على اطلاع في بيئة متغيرة بشكل سريع. كما يمكن للمؤشر مساعدتك على ضمان أن موادك التدريبية محدّثة وعلى تكييف مناهجك التدريبية اعتماداً على آخر المعارف التقنية المتوفرة حول البرمجيات والمنصات.

يرجى أن تقوم [بطلب حساب "شريك"](partner/register) وسنعطيك القدرة على الوصول إلى واجهة برمجة التطبيقات API والذي سيمكنك من عرض شارة مؤشر النزاهة المفتوح على موقعك.

## التقنية ##         {#tech}

مؤشر النزاهة المفتوح منصة تعمل على [برمجيات مفتوحة المصدر برخصة GPL3](https://github.com/iilab/openintegrity/blob/master/LICENSE.txt). [مستودع الكود متوفر على Github](https://github.com/iilab/openintegrity). ومخدّم "سيرفر" الإنتاج يعمل على getpantheon.com

يمكنك معرفة المزيد حول التكنولوجيا التي يعمل عليها مؤشر النزاهة المفتوح عبر [زيارة الويكي الخاصة بنا](https://wiki.openintegrity.org).

## كيف يمكنك المساهمة؟ ##         {#contribute}

### Tool Users ###

As a Tool user wondering about which tools to choose we need your input to make sure the Open Integrity Index is meeting your expectations and is in fact helping you to make better informed decisions.

  * If you\'d like to be part of the beta testers [subscribe to beta@openintegrity.org](mailto:beta-join@openintegrity.org)
  * If you have language skills and are interested in contributing to OII translations [subscribe to translation@openintegrity.org](translation-join@openintegrity.org) or go ahead and [start a new translation on transifex](https://www.transifex.com/projects/p/openintegrity/)

### Digital Security Experts ###

You can volunteer to be part of the OII peer review process. This means you will be notified when dispute arise in the determination of claims that count toward the Open Integrity Index of particular tools. You will work with other experts and be asked to reach consensus on claims. You might also be asked to participate in full reviews that are commissioned by tool makers or other stakeholders, in which case you will be compensated for your time.

  * If you\'d like to contact us directly to discuss the OII peer review process or participate in developing and improving the peer review process itself contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other digital security experts about topics regarding the evaluation of claims for specific tools please [Subscribe to peer-review@openintegrity.org](mailto:peer-review-join@openintegrity.org)

### Tool Developers ###

As a tool developer we are hoping that you will be interested in submitting a self-evaluation of your tool using the OII framework, and will display the OII badge in your download pages to signify your adhesion to the principles of OII about user education, and help users make better informed decisions.

  * If you\'d like to contact us directly to discuss your adhesion to the Open Integrity Index principles or the submission of your tool, please contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other Tool Developers about OII please [subscribe to tool-maker@lists.openintegrity.org](mailto:tool-maker-join@openintegrity.org)
  * Want to help us evolve the OII platform? Got some mad JS Drupal skills? Want to rebuild the whole thing from scratch? [Join the tech@openintegrity.org](mailto:tech-join@openintegrity.org) list! 

### Training and Tool Recommender Organisations ###

As an organisation that is providing training, mentoring, educational materials or recommendations of tools to activists, journalists, civil society organisations or other type of users, you can use the OII badge on your materials to help provide evidence driven decision making data to you users. 

  * If you\'d like to contact us directly to discuss how to integrate OII into your activities, please contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other organisations about using OII for educational purposes [subscribe to education@lists.openintegrity.org](mailto:education-join@openintegrity.org)

### Joining the Open Integrity Initiative ###

We are still working on defining what the future of the Open Integrity Initiative will be. If you\'d like to join us to discuss this topic, look at our [Governance wiki page](https://wiki.openintegrity.org/doku.php?id=governance) and please [subscribe to coalition@lists.openintegrity.org](mailto:coalition-join@openintegrity.org)

## FAQ ##         {#faq}

### What does the Index tells me? ###

The Index score let\'s you know whether the tool you\'re using is doing the best it can to protect you and your data.

### What are the Open Integrity Index criteria? ### {#criteria}

The Open Integrity Index summarises for you 3 critical aspects of the tools you use.

![img](/sites/default/files/BadgeSectors.png){.img-center}

  * Policy evaluates whether the tool developer or the platform administrators are doing the right thing when it comes to legal, organisational and transparency issues. 
  * Security evaluates if the various technology components of the tool are developed with the best standards in mind in order to protect you and your data.
  * Privacy evaluates if the software or platform are developed to allow you to protect your identity and anonymity.

### How is the Index score calculated? ###

The Index score is calculated by giving more points to tools that are able to justify that they follow best practices. 

![img](/sites/default/files/BadgeSample.png){.img-center}

In the example above the tool and its developers are:

  * following all or almost all best practices in terms of Policy.
  * following some of the best practices in Security.
  * following none or only one of the recommended best practices in Privacy.

![img](/sites/default/files/BadgeScale.png){.img-center}

The badges toward the left of the image above have lower overall scores, while those at the right have higher overall scores. In the middle various scores with various emphases on Policy, Security and Privacy are depicted.

### Why should I trust the scores of the Index? ### {#trust}

The Index has a number of approaches to guaranteeing the validity of its data :

  * It is based on evidence.
  * It allows the expert community to challenge claims.
  * It provides a dispute resolution mechanism by involving experts in a peer-review to provide authoritative answers when claims are disputed.
  * Its criteria structure and scoring systems have been designed with experts, based on actual practice and threats.
  * Its criteria structure and scoring systems can evolve as the state of the art in protection and threats evolve.

### How does the Index recommend alternatives? ### {#alternatives}

Currently the Index recommends alternatives by listing tools that are in the same categories than the tool of interest. We realise that this is an imperfect system and we aim to improve this by providing a more fined grained and expert curated recommendation system.

### What type of tools can I find in the Index? ###

You can find desktop software, mobile software, server software and online platforms covering the following categories:

  * Circumvention
  * Instant Messaging
  * Voice Communications
  * Video Communications
  * Email
  * Web Browsing
  * Content Management Systems

### Why isn\'t ...this software or this platform... in the Index? ###

It can be! You can [submit an Entry](/node/add/entry) even if you\'re not the tool developer. We will do our best to contact the tool developer to allow them to provide their own evidence, but you and the rest of the community can also submit evidence which will count toward the Index score.

### Can I display the Index on my website? ###

Please go ahead and [request a partner account](partner/register) and we will give you access to our API which will allow you to display the OII badge on your website.

### I can\'t find an answer to my question ###

Use our [Feedback form](contact) to let us know about your question and we\'ll make sure to include it in the FAQ to help others.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<div class="basics clearfix">

<p><img src="/sites/default/files/Teaser.png" alt="img" title="" class="img-basics-left" /></p>

<h3 class="about-left">تعرف على أدواتك بشكل أفضل</h3>

<h4 class="about-left">هل تقوم أدواتك ومطوروها بحمايتك وحماية بياناتك؟ اكتشف ذلك عبر نظرة سريعة على شارة مؤشر النزاهة المفتوح. <a href="#criteria">اقرأ المزيد حول معاييرنا</a></h4>

</div>

<div class="basics clearfix">

<p><img src="/sites/default/files/Alternatives_0.png" alt="img" title="" class="img-basics-right" /></p>

<h3 class="about-right">اكتشف بدائل أفضل</h3>

<h4 class="about-right">تعرف على أدوات ذات مجموع نقاط أعلى على المؤشر. <a href="#alternatives">اقرأ المزيد حول نظام التوصية</a></h4>

</div>

<div class="basics clearfix">

<p><img src="/sites/default/files/Evidence.png" alt="img" title="" class="img-basics-left" /></p>

<h3 class="about-left">تعرف على آراء الخبراء</h3>

<h4 class="about-left">اطلع على الأدلة التي أرسلها الخبراء. <a href="#trust">اقرأ المزيد حول موثوقية نظام نقاط المؤشر</a></h4>

</div>

<p><br>
<br></p>

<h2>نظرة عامة</h2>

<ul>
<li><a href="#intro">مقدمة</a></li>
<li><a href="#partners">الشركاء</a></li>
<li><a href="#users">مؤشر النزاهة المفتوح للمستخدمين</a></li>
<li><a href="#developers">مؤشر النزاهة المفتوح للمطورين</a></li>
<li><a href="#educators">مؤشر النزاهة المفتوح للمدربين والمعلمين</a></li>
<li><a href="#tech">التقنية</a></li>
<li><a href="#contribute">كيف يمكنك المساهمة؟</a></li>
<li><a href="#faq">الأسئلة المتكررة</a></li>
</ul>

<h2 id="intro">مقدمة</h2>

<p>سيمكن مؤشر النزاهة المفتوح المستخدمين من اتخاذ قرارات معقدة حول الأدوات التي يستخدمونها للخصوصية والاتصالات، دون الحاجة لخبرة واسعة في هندسة الأمن.</p>

<p>للمؤشر عدة أهداف محددة تتضمن:</p>

<ul>
<li>تمكين المستخدمين من اتخاذ قرارات مطلعة حول الأدوات التي يستخدمونها والطرق التي قد تكشف معلوماتهم الشخصية بها.</li>
<li>إنشاء منصة لنتائج مراجعات وتقييمات الكود كي يتمكن العامة من الوصول إليها.</li>
<li>توفير مورد للمنصات الأخرى، مثل متاجر التطبيقات، لدمج الأمن الرقمي ضمن عملية اتخاذ القرار لتنصيب البرمجيات.</li>
<li>تحسين القدرة على الوصول إلى مواد حول مبادئ الأمن الرقمي بلغات أخرى غير الإنكليزية.</li>
<li>التوعية حول المبادئ الأساسية للخصوصية عبر التصميم أثناء عملية تطوير أدوات الاتصالات.</li>
<li>التشجيع على تكوين علاقات أقوى بين المطورين ومستخدمي أدواتهم.</li>
</ul>

<h2 id="partners">الشركاء</h2>

<p>مشروع تعاوني بين:</p>

<p><a href="https://guardianproject.info"><img src="/sites/default/files/styles/medium/public/GP_logo%2Btxt_hires_black_on_trans_1.png?itok=2bNw5eyK" alt="img" title="" class="img-about" /> Guardian Project</a></p>

<p><a href="http://internews.org"><img src="/sites/default/files/styles/medium/public/logo.png?itok=1C8GV7f_" alt="img" title="" class="img-about" /> Internews</a></p>

<p><a href="https://openitp.org"><img src="/sites/default/files/styles/medium/public/logo_1.png?itok=CtRpZLjK" alt="img" title="" class="img-about" /> OpenITP</a></p>

<p><a href="https://tacticaltech.org"><img src="/sites/default/files/styles/medium/public/images.jpg?itok=A_rXqUOa" alt="img" title="" class="img-about" />Tactical Technology Collective</a></p>

<p><a href="https://torproject.org"><img src="/sites/default/files/styles/medium/public/tor-logo_4.jpg?itok=AIXIpWjZ" alt="img" title="" class="img-about" /> Tor Project</a></p>

<p><a href="https://iilab.org"><img src="/sites/default/files/styles/medium/public/8b4f9f9ce0a6da61d88ebc771746490c.png?itok=Qe_hFgu0" alt="img" title="" class="img-about" /> iilab</a></p>

<h2 id="users">مؤشر النزاهة المفتوح للمستخدمين</h2>

<p>مؤشر النزاهة المفتوح يساعدك على معرفة مدى اهتمام الأدوات التي تستخدمها ومطوريها بأمنك وخصوصيتك. هناك عدد من الخطوات التي يمكن للبرمجيات والمنصات اتخاذها لتحسين مدى حمايتها لك وقد عملنا مع خبراء في هذا المجال لتحديد أفضل الخطوات والممارسات لحمايتك.</p>

<p>عندما ترى شارة مؤشر النزاهة المفتوح، يمكنك أن تتأكد أن مطور الأداة أو الأشخاص الذين ينشرون مواد تعليمية يتخذون حماية أمن وخصوصيتك بجدية.</p>

<p>اكتشف بدائل أفضل للأدوات التي تستخدمها وتعرف على ما يصنع الفرق لاحتياجاتك الشخصية. ولكن تذكر، تأكد أنك تفهم المزيد حول الأخطار التي تواجهك وممارساتك خارج العالم الرقمي قبل أن تتخذ أي مخاطرة.</p>

<h2 id="developers">مؤشر النزاهة المفتوح للمطورين</h2>

<p>إضافة أداتك إلى المؤشر تعبير عن اتباعك لأفضل الممارسات عندما يتعلق الأمر بحماية مستخدميك وبياناتهم. نظام التوصية الخاص بمؤشر النزاهة المفتوح يعني أن لديك الفرصة للوصول إلى جمهور أكبر يهتم بالأمن والخصوصية الرقميين ويحتاج لهما.</p>

<p>نظامنا المعتمد على الأدلة ومراجعة الأقران يوفر لك ضمانات أن مجموع النقاط الذي تحصل عليه أداتك يعتمد على الحقائق وأن المزاعم حول أدواتك وغيرها من أدوات المطورين قد تم التحقق منها.</p>

<p><a href="/developer/register">اطلب حساب مطور</a> وابدأ بإضافة الأدلة لدعم أدواتك.</p>

<h2 id="educators">مؤشر النزاهة المفتوح للمدربين والمعلمين</h2>

<p>كمدرب أو مرشد أو منظمة تقوم بنشر مواد تعليمية مخصصة لمساعدة المستخدمين على فهم المخاطر التي تواجههم بشكل أفضل وتطوير مهارات جديدة لحماية أنفسهم وحماية بياناتهم من التطفل أو الهجوم، يمكن لمؤشر النزاهة المفتوح مساعدتك. حيث أنه يوفر موارد يمكنك مشاركتها مع المتدربين لديك ومع جمهورك لإعطائهم بيانات موثوقة تساعدهم على البقاء على اطلاع في بيئة متغيرة بشكل سريع. كما يمكن للمؤشر مساعدتك على ضمان أن موادك التدريبية محدّثة وعلى تكييف مناهجك التدريبية اعتماداً على آخر المعارف التقنية المتوفرة حول البرمجيات والمنصات.</p>

<p>يرجى أن تقوم <a href="partner/register">بطلب حساب "شريك"</a> وسنعطيك القدرة على الوصول إلى واجهة برمجة التطبيقات API والذي سيمكنك من عرض شارة مؤشر النزاهة المفتوح على موقعك.</p>

<h2 id="tech">التقنية</h2>

<p>مؤشر النزاهة المفتوح منصة تعمل على <a href="https://github.com/iilab/openintegrity/blob/master/LICENSE.txt">برمجيات مفتوحة المصدر برخصة GPL3</a>. <a href="https://github.com/iilab/openintegrity">مستودع الكود متوفر على Github</a>. ومخدّم "سيرفر" الإنتاج يعمل على getpantheon.com</p>

<p>يمكنك معرفة المزيد حول التكنولوجيا التي يعمل عليها مؤشر النزاهة المفتوح عبر <a href="https://wiki.openintegrity.org">زيارة الويكي الخاصة بنا</a>.</p>

<h2 id="contribute">كيف يمكنك المساهمة؟</h2>

<h3>Tool Users</h3>

<p>As a Tool user wondering about which tools to choose we need your input to make sure the Open Integrity Index is meeting your expectations and is in fact helping you to make better informed decisions.</p>

<ul>
<li>If you\'d like to be part of the beta testers <a href="mailto:beta-join@openintegrity.org">subscribe to beta@openintegrity.org</a></li>
<li>If you have language skills and are interested in contributing to OII translations <a href="translation-join@openintegrity.org">subscribe to translation@openintegrity.org</a> or go ahead and <a href="https://www.transifex.com/projects/p/openintegrity/">start a new translation on transifex</a></li>
</ul>

<h3>Digital Security Experts</h3>

<p>You can volunteer to be part of the OII peer review process. This means you will be notified when dispute arise in the determination of claims that count toward the Open Integrity Index of particular tools. You will work with other experts and be asked to reach consensus on claims. You might also be asked to participate in full reviews that are commissioned by tool makers or other stakeholders, in which case you will be compensated for your time.</p>

<ul>
<li>If you\'d like to contact us directly to discuss the OII peer review process or participate in developing and improving the peer review process itself contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other digital security experts about topics regarding the evaluation of claims for specific tools please <a href="mailto:peer-review-join@openintegrity.org">Subscribe to peer-review@openintegrity.org</a></li>
</ul>

<h3>Tool Developers</h3>

<p>As a tool developer we are hoping that you will be interested in submitting a self-evaluation of your tool using the OII framework, and will display the OII badge in your download pages to signify your adhesion to the principles of OII about user education, and help users make better informed decisions.</p>

<ul>
<li>If you\'d like to contact us directly to discuss your adhesion to the Open Integrity Index principles or the submission of your tool, please contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other Tool Developers about OII please <a href="mailto:tool-maker-join@openintegrity.org">subscribe to tool-maker@lists.openintegrity.org</a></li>
<li>Want to help us evolve the OII platform? Got some mad JS Drupal skills? Want to rebuild the whole thing from scratch? <a href="mailto:tech-join@openintegrity.org">Join the tech@openintegrity.org</a> list! </li>
</ul>

<h3>Training and Tool Recommender Organisations</h3>

<p>As an organisation that is providing training, mentoring, educational materials or recommendations of tools to activists, journalists, civil society organisations or other type of users, you can use the OII badge on your materials to help provide evidence driven decision making data to you users.</p>

<ul>
<li>If you\'d like to contact us directly to discuss how to integrate OII into your activities, please contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other organisations about using OII for educational purposes <a href="mailto:education-join@openintegrity.org">subscribe to education@lists.openintegrity.org</a></li>
</ul>

<h3>Joining the Open Integrity Initiative</h3>

<p>We are still working on defining what the future of the Open Integrity Initiative will be. If you\'d like to join us to discuss this topic, look at our <a href="https://wiki.openintegrity.org/doku.php?id=governance">Governance wiki page</a> and please <a href="mailto:coalition-join@openintegrity.org">subscribe to coalition@lists.openintegrity.org</a></p>

<h2 id="faq">FAQ</h2>

<h3>What does the Index tells me?</h3>

<p>The Index score let\'s you know whether the tool you\'re using is doing the best it can to protect you and your data.</p>

<h3 id="criteria">What are the Open Integrity Index criteria?</h3>

<p>The Open Integrity Index summarises for you 3 critical aspects of the tools you use.</p>

<p><img src="/sites/default/files/BadgeSectors.png" alt="img" title="" class="img-center" /></p>

<ul>
<li>Policy evaluates whether the tool developer or the platform administrators are doing the right thing when it comes to legal, organisational and transparency issues. </li>
<li>Security evaluates if the various technology components of the tool are developed with the best standards in mind in order to protect you and your data.</li>
<li>Privacy evaluates if the software or platform are developed to allow you to protect your identity and anonymity.</li>
</ul>

<h3>How is the Index score calculated?</h3>

<p>The Index score is calculated by giving more points to tools that are able to justify that they follow best practices.</p>

<p><img src="/sites/default/files/BadgeSample.png" alt="img" title="" class="img-center" /></p>

<p>In the example above the tool and its developers are:</p>

<ul>
<li>following all or almost all best practices in terms of Policy.</li>
<li>following some of the best practices in Security.</li>
<li>following none or only one of the recommended best practices in Privacy.</li>
</ul>

<p><img src="/sites/default/files/BadgeScale.png" alt="img" title="" class="img-center" /></p>

<p>The badges toward the left of the image above have lower overall scores, while those at the right have higher overall scores. In the middle various scores with various emphases on Policy, Security and Privacy are depicted.</p>

<h3 id="trust">Why should I trust the scores of the Index?</h3>

<p>The Index has a number of approaches to guaranteeing the validity of its data :</p>

<ul>
<li>It is based on evidence.</li>
<li>It allows the expert community to challenge claims.</li>
<li>It provides a dispute resolution mechanism by involving experts in a peer-review to provide authoritative answers when claims are disputed.</li>
<li>Its criteria structure and scoring systems have been designed with experts, based on actual practice and threats.</li>
<li>Its criteria structure and scoring systems can evolve as the state of the art in protection and threats evolve.</li>
</ul>

<h3 id="alternatives">How does the Index recommend alternatives?</h3>

<p>Currently the Index recommends alternatives by listing tools that are in the same categories than the tool of interest. We realise that this is an imperfect system and we aim to improve this by providing a more fined grained and expert curated recommendation system.</p>

<h3>What type of tools can I find in the Index?</h3>

<p>You can find desktop software, mobile software, server software and online platforms covering the following categories:</p>

<ul>
<li>Circumvention</li>
<li>Instant Messaging</li>
<li>Voice Communications</li>
<li>Video Communications</li>
<li>Email</li>
<li>Web Browsing</li>
<li>Content Management Systems</li>
</ul>

<h3>Why isn\'t ...this software or this platform... in the Index?</h3>

<p>It can be! You can <a href="/node/add/entry">submit an Entry</a> even if you\'re not the tool developer. We will do our best to contact the tool developer to allow them to provide their own evidence, but you and the rest of the community can also submit evidence which will count toward the Index score.</p>

<h3>Can I display the Index on my website?</h3>

<p>Please go ahead and <a href="partner/register">request a partner account</a> and we will give you access to our API which will allow you to display the OII badge on your website.</p>

<h3>I can\'t find an answer to my question</h3>

<p>Use our <a href="contact">Feedback form</a> to let us know about your question and we\'ll make sure to include it in the FAQ to help others.</p>
',
        'safe_summary' => '',
      ),
    ),
    'en' => array(
      0 => array(
        'value' => '<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Teaser.png){.img-basics-right}
### Get to know your tools better ### {.about-right}
#### Do your tools and their developers protect you and your data? Find out at a glance with the Open Integrity Index badge [Read more about our criteria](#criteria)  #### {.about-right}
</div>
<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Alternatives_0.png){.img-basics-left}
### Discover better alternatives ### {.about-left}
#### Find out about tools with better index scores. [Read more about recommendation system](#alternatives) #### {.about-left}
</div>
<div markdown="1" class="basics clearfix">
![img](/sites/default/files/Evidence.png){.img-basics-right}
### Find out what the experts think ### {.about-right}
#### Look at the evidence submitted by professionals. [Read more about why you can trust our score](#trust) #### {.about-right}
</div>
<br>
<br>
## Overview ##
  * [Introduction](#intro)
  * [Partners](#partners)
  * [OII for Users](#users)
  * [OII for Tool Developers](#developers)
  * [OII for Educators](#educators)
  * [Technology](#tech)
  * [How to Contribute?](#contribute)
  * [FAQ](#faq)

## Introduction ##            {#intro}

The Open Integrity Index will enable users to make sophisticated decisions about the tools they use for privacy and communications, without requiring a high-level security engineering background.

OII has several distinct objectives, including:

  * Enabling users to make educated decisions about the tools they use and the ways in which they expose their personal information.
  * Establishing a platform for the results of independent audits to be made accessible to a general audience.
  * Providing a resource for other platforms, such as application markets, to integrate digital security into the decision-making process of installing software.
  * Improving access to material on digital security principles in languages other than English.
  * Promoting stronger awareness on fundamental precepts of privacy by design in the development of communications tools.
  * Encouraging stronger relationships between developers and their communities of users.

## Partners  ##          {#partners}

A collaborative project between:

[![img](/sites/default/files/styles/medium/public/GP_logo%2Btxt_hires_black_on_trans_1.png?itok=2bNw5eyK){.img-about} Guardian Project](https://guardianproject.info)

[![img](/sites/default/files/styles/medium/public/logo.png?itok=1C8GV7f_){.img-about} Internews](http://internews.org)

[![img](/sites/default/files/styles/medium/public/logo_1.png?itok=CtRpZLjK){.img-about} OpenITP](https://openitp.org)

[![img](/sites/default/files/styles/medium/public/images.jpg?itok=A_rXqUOa){.img-about}Tactical Technology Collective](https://tacticaltech.org)

[![img](/sites/default/files/styles/medium/public/tor-logo_4.jpg?itok=AIXIpWjZ){.img-about} Tor Project](https://torproject.org)

[![img](/sites/default/files/styles/medium/public/8b4f9f9ce0a6da61d88ebc771746490c.png?itok=Qe_hFgu0){.img-about} iilab](https://iilab.org)

## OII for Users ##            {#users}

Open Integrity Index helps you find out about how well the tools you use and the developer that make them take your security and privacy in consideration. There are a number of things that software and platforms can do to improve how they protect you and we have worked with experts in the field to identify these best practices.

When you see the Open Integrity Index badge, you are assured that the tool developer or the people publishing educational material are serious about protecting your security and privacy.

Find out about better alternatives for the tools you use and learn more about what makes a difference for your own needs. Remember though, make sure you understand more about the threats you\'re facing and your practices outside of the digital world before you take any risks!

## OII for Tool Developers ##           {#developers}

Submitting your tool on Open Integrity Index is a statement that you care about following best practices when it comes to protecting your users and their data. The Open Integrity Index recommendation system means that you get a chance to give more visibility to the efforts you take to an audience that cares and needs better digital security and privacy.

Our evidence based system and peer-reviewed moderation provides you with assurance that your score is based on facts and that claims about your tools and other developer tools are verified.

[Request a developer account](/developer/register) and start submitting evidence to support your tools\' 

## OII for Educators ##           {#educators}

As a trainer, a mentor or an organisation publishing educational material that are meant to help users understand better the risks they face and develop new skills to protect themselves and their data against intrusion or attacks, the Open Integrity Index can support you. It provides a resource that you can share with your trainees and audiences to give them solid data that can help them keep up to date with a rapidly changing environment. It can also help you make sure your training material is up to date and adapt your courses based on the latest technical knowledge available about software and platforms.

Please go ahead and [request a partner account](partner/register) and we will give you access to our API which will allow you to display the OII badge on your website.

## Technology ##         {#tech}

Open Integrity Index is a platform running on [Open Source software with a GPL3 license](https://github.com/iilab/openintegrity/blob/master/LICENSE.txt). The [code repository is available on Github](https://github.com/iilab/openintegrity). The production server is running on getpantheon.com

You can find out more about the technology behind Open Integrity Index by [visiting our wiki](https://wiki.openintegrity.org).

## How to Contribute? ##         {#contribute}

### Tool Users ###

As a Tool user wondering about which tools to choose we need your input to make sure the Open Integrity Index is meeting your expectations and is in fact helping you to make better informed decisions.

  * If you\'d like to be part of the beta testers [subscribe to beta@openintegrity.org](mailto:beta-join@openintegrity.org)
  * If you have language skills and are interested in contributing to OII translations [subscribe to translation@openintegrity.org](translation-join@openintegrity.org) or go ahead and [start a new translation on transifex](https://www.transifex.com/projects/p/openintegrity/)

### Digital Security Experts ###

You can volunteer to be part of the OII peer review process. This means you will be notified when dispute arise in the determination of claims that count toward the Open Integrity Index of particular tools. You will work with other experts and be asked to reach consensus on claims. You might also be asked to participate in full reviews that are commissioned by tool makers or other stakeholders, in which case you will be compensated for your time.

  * If you\'d like to contact us directly to discuss the OII peer review process or participate in developing and improving the peer review process itself contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other digital security experts about topics regarding the evaluation of claims for specific tools please [Subscribe to peer-review@openintegrity.org](mailto:peer-review-join@openintegrity.org)

### Tool Developers ###

As a tool developer we are hoping that you will be interested in submitting a self-evaluation of your tool using the OII framework, and will display the OII badge in your download pages to signify your adhesion to the principles of OII about user education, and help users make better informed decisions.

  * If you\'d like to contact us directly to discuss your adhesion to the Open Integrity Index principles or the submission of your tool, please contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other Tool Developers about OII please [subscribe to tool-maker@lists.openintegrity.org](mailto:tool-maker-join@openintegrity.org)
  * Want to help us evolve the OII platform? Got some mad JS Drupal skills? Want to rebuild the whole thing from scratch? [Join the tech@openintegrity.org](mailto:tech-join@openintegrity.org) list! 

### Training and Tool Recommender Organisations ###

As an organisation that is providing training, mentoring, educational materials or recommendations of tools to activists, journalists, civil society organisations or other type of users, you can use the OII badge on your materials to help provide evidence driven decision making data to you users. 

  * If you\'d like to contact us directly to discuss how to integrate OII into your activities, please contact us at (mailto:contact@openintegrity.org)
  * If you\'d like to discuss with other organisations about using OII for educational purposes [subscribe to education@lists.openintegrity.org](mailto:education-join@openintegrity.org)

### Joining the Open Integrity Initiative ###

We are still working on defining what the future of the Open Integrity Initiative will be. If you\'d like to join us to discuss this topic, look at our [Governance wiki page](https://wiki.openintegrity.org/doku.php?id=governance) and please [subscribe to coalition@lists.openintegrity.org](mailto:coalition-join@openintegrity.org)

## FAQ ##         {#faq}

### What does the Index tells me? ###

The Index score let\'s you know whether the tool you\'re using is doing the best it can to protect you and your data.

### What are the Open Integrity Index criteria? ### {#criteria}

The Open Integrity Index summarises for you 3 critical aspects of the tools you use.

![img](/sites/default/files/BadgeSectors.png){.img-center}

  * Policy evaluates whether the tool developer or the platform administrators are doing the right thing when it comes to legal, organisational and transparency issues. 
  * Security evaluates if the various technology components of the tool are developed with the best standards in mind in order to protect you and your data.
  * Privacy evaluates if the software or platform are developed to allow you to protect your identity and anonymity.

### How is the Index score calculated? ###

The Index score is calculated by giving more points to tools that are able to justify that they follow best practices. 

![img](/sites/default/files/BadgeSample.png){.img-center}

In the example above the tool and its developers are:

  * following all or almost all best practices in terms of Policy.
  * following some of the best practices in Security.
  * following none or only one of the recommended best practices in Privacy.

![img](/sites/default/files/BadgeScale.png){.img-center}

The badges toward the left of the image above have lower overall scores, while those at the right have higher overall scores. In the middle various scores with various emphases on Policy, Security and Privacy are depicted.

### Why should I trust the scores of the Index? ### {#trust}

The Index has a number of approaches to guaranteeing the validity of its data :

  * It is based on evidence.
  * It allows the expert community to challenge claims.
  * It provides a dispute resolution mechanism by involving experts in a peer-review to provide authoritative answers when claims are disputed.
  * Its criteria structure and scoring systems have been designed with experts, based on actual practice and threats.
  * Its criteria structure and scoring systems can evolve as the state of the art in protection and threats evolve.

### How does the Index recommend alternatives? ### {#alternatives}

Currently the Index recommends alternatives by listing tools that are in the same categories than the tool of interest. We realise that this is an imperfect system and we aim to improve this by providing a more fined grained and expert curated recommendation system.

### What type of tools can I find in the Index? ###

You can find desktop software, mobile software, server software and online platforms covering the following categories:

  * Circumvention
  * Instant Messaging
  * Voice Communications
  * Video Communications
  * Email
  * Web Browsing
  * Content Management Systems

### Why isn\'t ...this software or this platform... in the Index? ###

It can be! You can [submit an Entry](/node/add/entry) even if you\'re not the tool developer. We will do our best to contact the tool developer to allow them to provide their own evidence, but you and the rest of the community can also submit evidence which will count toward the Index score.

### Can I display the Index on my website? ###

Please go ahead and [request a partner account](partner/register) and we will give you access to our API which will allow you to display the OII badge on your website.

### I can\'t find an answer to my question ###

Use our [Feedback form](contact) to let us know about your question and we\'ll make sure to include it in the FAQ to help others.',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<div class="basics clearfix">

<p><img src="/sites/default/files/Teaser.png" alt="img" title="" class="img-basics-right" /></p>

<h3 class="about-right">Get to know your tools better</h3>

<h4 class="about-right">Do your tools and their developers protect you and your data? Find out at a glance with the Open Integrity Index badge <a href="#criteria">Read more about our criteria</a></h4>

</div>

<div class="basics clearfix">

<p><img src="/sites/default/files/Alternatives_0.png" alt="img" title="" class="img-basics-left" /></p>

<h3 class="about-left">Discover better alternatives</h3>

<h4 class="about-left">Find out about tools with better index scores. <a href="#alternatives">Read more about recommendation system</a></h4>

</div>

<div class="basics clearfix">

<p><img src="/sites/default/files/Evidence.png" alt="img" title="" class="img-basics-right" /></p>

<h3 class="about-right">Find out what the experts think</h3>

<h4 class="about-right">Look at the evidence submitted by professionals. <a href="#trust">Read more about why you can trust our score</a></h4>

</div>

<p><br>
<br></p>

<h2>Overview</h2>

<ul>
<li><a href="#intro">Introduction</a></li>
<li><a href="#partners">Partners</a></li>
<li><a href="#users">OII for Users</a></li>
<li><a href="#developers">OII for Tool Developers</a></li>
<li><a href="#educators">OII for Educators</a></li>
<li><a href="#tech">Technology</a></li>
<li><a href="#contribute">How to Contribute?</a></li>
<li><a href="#faq">FAQ</a></li>
</ul>

<h2 id="intro">Introduction</h2>

<p>The Open Integrity Index will enable users to make sophisticated decisions about the tools they use for privacy and communications, without requiring a high-level security engineering background.</p>

<p>OII has several distinct objectives, including:</p>

<ul>
<li>Enabling users to make educated decisions about the tools they use and the ways in which they expose their personal information.</li>
<li>Establishing a platform for the results of independent audits to be made accessible to a general audience.</li>
<li>Providing a resource for other platforms, such as application markets, to integrate digital security into the decision-making process of installing software.</li>
<li>Improving access to material on digital security principles in languages other than English.</li>
<li>Promoting stronger awareness on fundamental precepts of privacy by design in the development of communications tools.</li>
<li>Encouraging stronger relationships between developers and their communities of users.</li>
</ul>

<h2 id="partners">Partners</h2>

<p>A collaborative project between:</p>

<p><a href="https://guardianproject.info"><img src="/sites/default/files/styles/medium/public/GP_logo%2Btxt_hires_black_on_trans_1.png?itok=2bNw5eyK" alt="img" title="" class="img-about" /> Guardian Project</a></p>

<p><a href="http://internews.org"><img src="/sites/default/files/styles/medium/public/logo.png?itok=1C8GV7f_" alt="img" title="" class="img-about" /> Internews</a></p>

<p><a href="https://openitp.org"><img src="/sites/default/files/styles/medium/public/logo_1.png?itok=CtRpZLjK" alt="img" title="" class="img-about" /> OpenITP</a></p>

<p><a href="https://tacticaltech.org"><img src="/sites/default/files/styles/medium/public/images.jpg?itok=A_rXqUOa" alt="img" title="" class="img-about" />Tactical Technology Collective</a></p>

<p><a href="https://torproject.org"><img src="/sites/default/files/styles/medium/public/tor-logo_4.jpg?itok=AIXIpWjZ" alt="img" title="" class="img-about" /> Tor Project</a></p>

<p><a href="https://iilab.org"><img src="/sites/default/files/styles/medium/public/8b4f9f9ce0a6da61d88ebc771746490c.png?itok=Qe_hFgu0" alt="img" title="" class="img-about" /> iilab</a></p>

<h2 id="users">OII for Users</h2>

<p>Open Integrity Index helps you find out about how well the tools you use and the developer that make them take your security and privacy in consideration. There are a number of things that software and platforms can do to improve how they protect you and we have worked with experts in the field to identify these best practices.</p>

<p>When you see the Open Integrity Index badge, you are assured that the tool developer or the people publishing educational material are serious about protecting your security and privacy.</p>

<p>Find out about better alternatives for the tools you use and learn more about what makes a difference for your own needs. Remember though, make sure you understand more about the threats you\'re facing and your practices outside of the digital world before you take any risks!</p>

<h2 id="developers">OII for Tool Developers</h2>

<p>Submitting your tool on Open Integrity Index is a statement that you care about following best practices when it comes to protecting your users and their data. The Open Integrity Index recommendation system means that you get a chance to give more visibility to the efforts you take to an audience that cares and needs better digital security and privacy.</p>

<p>Our evidence based system and peer-reviewed moderation provides you with assurance that your score is based on facts and that claims about your tools and other developer tools are verified.</p>

<p><a href="/developer/register">Request a developer account</a> and start submitting evidence to support your tools\'</p>

<h2 id="educators">OII for Educators</h2>

<p>As a trainer, a mentor or an organisation publishing educational material that are meant to help users understand better the risks they face and develop new skills to protect themselves and their data against intrusion or attacks, the Open Integrity Index can support you. It provides a resource that you can share with your trainees and audiences to give them solid data that can help them keep up to date with a rapidly changing environment. It can also help you make sure your training material is up to date and adapt your courses based on the latest technical knowledge available about software and platforms.</p>

<p>Please go ahead and <a href="partner/register">request a partner account</a> and we will give you access to our API which will allow you to display the OII badge on your website.</p>

<h2 id="tech">Technology</h2>

<p>Open Integrity Index is a platform running on <a href="https://github.com/iilab/openintegrity/blob/master/LICENSE.txt">Open Source software with a GPL3 license</a>. The <a href="https://github.com/iilab/openintegrity">code repository is available on Github</a>. The production server is running on getpantheon.com</p>

<p>You can find out more about the technology behind Open Integrity Index by <a href="https://wiki.openintegrity.org">visiting our wiki</a>.</p>

<h2 id="contribute">How to Contribute?</h2>

<h3>Tool Users</h3>

<p>As a Tool user wondering about which tools to choose we need your input to make sure the Open Integrity Index is meeting your expectations and is in fact helping you to make better informed decisions.</p>

<ul>
<li>If you\'d like to be part of the beta testers <a href="mailto:beta-join@openintegrity.org">subscribe to beta@openintegrity.org</a></li>
<li>If you have language skills and are interested in contributing to OII translations <a href="translation-join@openintegrity.org">subscribe to translation@openintegrity.org</a> or go ahead and <a href="https://www.transifex.com/projects/p/openintegrity/">start a new translation on transifex</a></li>
</ul>

<h3>Digital Security Experts</h3>

<p>You can volunteer to be part of the OII peer review process. This means you will be notified when dispute arise in the determination of claims that count toward the Open Integrity Index of particular tools. You will work with other experts and be asked to reach consensus on claims. You might also be asked to participate in full reviews that are commissioned by tool makers or other stakeholders, in which case you will be compensated for your time.</p>

<ul>
<li>If you\'d like to contact us directly to discuss the OII peer review process or participate in developing and improving the peer review process itself contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other digital security experts about topics regarding the evaluation of claims for specific tools please <a href="mailto:peer-review-join@openintegrity.org">Subscribe to peer-review@openintegrity.org</a></li>
</ul>

<h3>Tool Developers</h3>

<p>As a tool developer we are hoping that you will be interested in submitting a self-evaluation of your tool using the OII framework, and will display the OII badge in your download pages to signify your adhesion to the principles of OII about user education, and help users make better informed decisions.</p>

<ul>
<li>If you\'d like to contact us directly to discuss your adhesion to the Open Integrity Index principles or the submission of your tool, please contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other Tool Developers about OII please <a href="mailto:tool-maker-join@openintegrity.org">subscribe to tool-maker@lists.openintegrity.org</a></li>
<li>Want to help us evolve the OII platform? Got some mad JS Drupal skills? Want to rebuild the whole thing from scratch? <a href="mailto:tech-join@openintegrity.org">Join the tech@openintegrity.org</a> list! </li>
</ul>

<h3>Training and Tool Recommender Organisations</h3>

<p>As an organisation that is providing training, mentoring, educational materials or recommendations of tools to activists, journalists, civil society organisations or other type of users, you can use the OII badge on your materials to help provide evidence driven decision making data to you users.</p>

<ul>
<li>If you\'d like to contact us directly to discuss how to integrate OII into your activities, please contact us at (mailto:contact@openintegrity.org)</li>
<li>If you\'d like to discuss with other organisations about using OII for educational purposes <a href="mailto:education-join@openintegrity.org">subscribe to education@lists.openintegrity.org</a></li>
</ul>

<h3>Joining the Open Integrity Initiative</h3>

<p>We are still working on defining what the future of the Open Integrity Initiative will be. If you\'d like to join us to discuss this topic, look at our <a href="https://wiki.openintegrity.org/doku.php?id=governance">Governance wiki page</a> and please <a href="mailto:coalition-join@openintegrity.org">subscribe to coalition@lists.openintegrity.org</a></p>

<h2 id="faq">FAQ</h2>

<h3>What does the Index tells me?</h3>

<p>The Index score let\'s you know whether the tool you\'re using is doing the best it can to protect you and your data.</p>

<h3 id="criteria">What are the Open Integrity Index criteria?</h3>

<p>The Open Integrity Index summarises for you 3 critical aspects of the tools you use.</p>

<p><img src="/sites/default/files/BadgeSectors.png" alt="img" title="" class="img-center" /></p>

<ul>
<li>Policy evaluates whether the tool developer or the platform administrators are doing the right thing when it comes to legal, organisational and transparency issues. </li>
<li>Security evaluates if the various technology components of the tool are developed with the best standards in mind in order to protect you and your data.</li>
<li>Privacy evaluates if the software or platform are developed to allow you to protect your identity and anonymity.</li>
</ul>

<h3>How is the Index score calculated?</h3>

<p>The Index score is calculated by giving more points to tools that are able to justify that they follow best practices.</p>

<p><img src="/sites/default/files/BadgeSample.png" alt="img" title="" class="img-center" /></p>

<p>In the example above the tool and its developers are:</p>

<ul>
<li>following all or almost all best practices in terms of Policy.</li>
<li>following some of the best practices in Security.</li>
<li>following none or only one of the recommended best practices in Privacy.</li>
</ul>

<p><img src="/sites/default/files/BadgeScale.png" alt="img" title="" class="img-center" /></p>

<p>The badges toward the left of the image above have lower overall scores, while those at the right have higher overall scores. In the middle various scores with various emphases on Policy, Security and Privacy are depicted.</p>

<h3 id="trust">Why should I trust the scores of the Index?</h3>

<p>The Index has a number of approaches to guaranteeing the validity of its data :</p>

<ul>
<li>It is based on evidence.</li>
<li>It allows the expert community to challenge claims.</li>
<li>It provides a dispute resolution mechanism by involving experts in a peer-review to provide authoritative answers when claims are disputed.</li>
<li>Its criteria structure and scoring systems have been designed with experts, based on actual practice and threats.</li>
<li>Its criteria structure and scoring systems can evolve as the state of the art in protection and threats evolve.</li>
</ul>

<h3 id="alternatives">How does the Index recommend alternatives?</h3>

<p>Currently the Index recommends alternatives by listing tools that are in the same categories than the tool of interest. We realise that this is an imperfect system and we aim to improve this by providing a more fined grained and expert curated recommendation system.</p>

<h3>What type of tools can I find in the Index?</h3>

<p>You can find desktop software, mobile software, server software and online platforms covering the following categories:</p>

<ul>
<li>Circumvention</li>
<li>Instant Messaging</li>
<li>Voice Communications</li>
<li>Video Communications</li>
<li>Email</li>
<li>Web Browsing</li>
<li>Content Management Systems</li>
</ul>

<h3>Why isn\'t ...this software or this platform... in the Index?</h3>

<p>It can be! You can <a href="/node/add/entry">submit an Entry</a> even if you\'re not the tool developer. We will do our best to contact the tool developer to allow them to provide their own evidence, but you and the rest of the community can also submit evidence which will count toward the Index score.</p>

<h3>Can I display the Index on my website?</h3>

<p>Please go ahead and <a href="partner/register">request a partner account</a> and we will give you access to our API which will allow you to display the OII badge on your website.</p>

<h3>I can\'t find an answer to my question</h3>

<p>Use our <a href="contact">Feedback form</a> to let us know about your question and we\'ll make sure to include it in the FAQ to help others.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => 83,
        'alt' => '',
        'title' => '',
        'width' => 150,
        'height' => 101,
        'uid' => 1,
        'filename' => 'tor-logo.jpg',
        'uri' => 'public://tor-logo_4.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 4034,
        'status' => 1,
        'timestamp' => 1377520478,
        'uuid' => '132c787e-5fa7-413c-a514-85b815f770de',
      ),
      1 => array(
        'fid' => 84,
        'alt' => '',
        'title' => '',
        'width' => 400,
        'height' => 133,
        'uid' => 1,
        'filename' => 'GP_logo+txt_hires_black_on_trans.png',
        'uri' => 'public://GP_logo+txt_hires_black_on_trans_1.png',
        'filemime' => 'image/png',
        'filesize' => 41851,
        'status' => 1,
        'timestamp' => 1377520539,
        'uuid' => '84c3e453-7077-4dd0-b7b6-30b663f93528',
      ),
      2 => array(
        'fid' => 85,
        'alt' => '',
        'title' => '',
        'width' => 288,
        'height' => 92,
        'uid' => 1,
        'filename' => 'logo.png',
        'uri' => 'public://logo.png',
        'filemime' => 'image/png',
        'filesize' => 6412,
        'status' => 1,
        'timestamp' => 1377521963,
        'uuid' => '06467e1b-dd05-4a70-b644-d14648753e25',
      ),
      3 => array(
        'fid' => 86,
        'alt' => '',
        'title' => '',
        'width' => 225,
        'height' => 65,
        'uid' => 1,
        'filename' => 'logo.png',
        'uri' => 'public://logo_1.png',
        'filemime' => 'image/png',
        'filesize' => 14937,
        'status' => 1,
        'timestamp' => 1377521963,
        'uuid' => 'b5f728ed-f69e-4170-881c-173f5e83e790',
      ),
      4 => array(
        'fid' => 87,
        'alt' => '',
        'title' => '',
        'width' => 409,
        'height' => 123,
        'uid' => 1,
        'filename' => 'images.jpg',
        'uri' => 'public://images.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 5421,
        'status' => 1,
        'timestamp' => 1377521963,
        'uuid' => '57810870-b182-47f6-8eb2-40c2475946a9',
      ),
      5 => array(
        'fid' => 88,
        'alt' => '',
        'title' => '',
        'width' => 420,
        'height' => 420,
        'uid' => 1,
        'filename' => '8b4f9f9ce0a6da61d88ebc771746490c.png',
        'uri' => 'public://8b4f9f9ce0a6da61d88ebc771746490c.png',
        'filemime' => 'image/png',
        'filesize' => 42068,
        'status' => 1,
        'timestamp' => 1377521963,
        'uuid' => 'e110e24a-c56e-4f17-a571-055896a1dd5f',
      ),
      6 => array(
        'fid' => 89,
        'alt' => '',
        'title' => '',
        'width' => 506,
        'height' => 200,
        'uid' => 1,
        'filename' => 'Teaser.png',
        'uri' => 'public://Teaser.png',
        'filemime' => 'image/png',
        'filesize' => 37052,
        'status' => 1,
        'timestamp' => 1377524825,
        'uuid' => '2f296dd9-1c42-48b3-89d1-28b6199bbd0c',
      ),
      7 => array(
        'fid' => 92,
        'alt' => '',
        'title' => '',
        'width' => 505,
        'height' => 200,
        'uid' => 1,
        'filename' => 'Alternatives.png',
        'uri' => 'public://Alternatives_0.png',
        'filemime' => 'image/png',
        'filesize' => 34154,
        'status' => 1,
        'timestamp' => 1377529242,
        'uuid' => 'ed702996-d993-472b-b0e3-9311f36e75e1',
      ),
      8 => array(
        'fid' => 91,
        'alt' => '',
        'title' => '',
        'width' => 505,
        'height' => 200,
        'uid' => 1,
        'filename' => 'Evidence.png',
        'uri' => 'public://Evidence.png',
        'filemime' => 'image/png',
        'filesize' => 45674,
        'status' => 1,
        'timestamp' => 1377525021,
        'uuid' => '090fd2ee-db24-45ce-95f5-0438df0b2cc1',
      ),
      9 => array(
        'fid' => 93,
        'alt' => '',
        'title' => '',
        'width' => 200,
        'height' => 200,
        'uid' => 1,
        'filename' => 'BadgeSectors.png',
        'uri' => 'public://BadgeSectors.png',
        'filemime' => 'image/png',
        'filesize' => 12654,
        'status' => 1,
        'timestamp' => 1377701661,
        'uuid' => 'd19bd937-7a92-4e9d-8005-2dcd3752b313',
      ),
      10 => array(
        'fid' => 94,
        'alt' => '',
        'title' => '',
        'width' => 192,
        'height' => 66,
        'uid' => 1,
        'filename' => 'BadgeSample.png',
        'uri' => 'public://BadgeSample.png',
        'filemime' => 'image/png',
        'filesize' => 5423,
        'status' => 1,
        'timestamp' => 1377702024,
        'uuid' => 'a256c0ee-aa5e-4fa4-9462-24c6477be40e',
      ),
      11 => array(
        'fid' => 95,
        'alt' => '',
        'title' => '',
        'width' => 773,
        'height' => 304,
        'uid' => 1,
        'filename' => 'BadgeScale.png',
        'uri' => 'public://BadgeScale.png',
        'filemime' => 'image/png',
        'filesize' => 21986,
        'status' => 1,
        'timestamp' => 1377702099,
        'uuid' => 'c0d5699e-dd8b-4a8f-8ca7-8b7690eb3c3c',
      ),
    ),
  ),
  'title_field' => array(
    'ar' => array(
      0 => array(
        'value' => 'حول مؤشر النزاهة المفتوح',
        'format' => NULL,
        'safe_value' => 'حول مؤشر النزاهة المفتوح',
      ),
    ),
    'en' => array(
      0 => array(
        'value' => 'About Open Integrity Index',
        'format' => NULL,
        'safe_value' => 'About Open Integrity Index',
      ),
    ),
  ),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 2,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1369132679,
        'changed' => 1377704414,
      ),
      'ar' => array(
        'entity_type' => 'node',
        'entity_id' => 2,
        'language' => 'ar',
        'source' => 'en',
        'uid' => 96,
        'status' => 1,
        'translate' => 0,
        'created' => 1377735686,
        'changed' => 1377890600,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'root',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-21 11:37:59 +0100',
);
  return $nodes;
}
