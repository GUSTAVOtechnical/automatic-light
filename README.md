<h2>Automatic Light&nbsp;</h2>
<p>Como Utilizar o M&oacute;dulo Bluetooth com Arduino</p>
<p>Bluetooth &eacute; um protocolo de comunica&ccedil;&atilde;o sem fio com baixo consumo de energia onde &eacute; poss&iacute;vel fazer a transmiss&atilde;o de dados entre dispositivos. O alcance varia de 1 a 100 metros e o consumo de energia vai variar de acordo com a dist&acirc;ncia de comunica&ccedil;&atilde;o (quanto maior a dist&acirc;ncia maior o consumo).</p>
<p><strong>A comunica&ccedil;&atilde;o via Bluetooth pode ser utilizada em:</strong></p>
<p>&ndash; Comunica&ccedil;&atilde;o entre o computador e seus perif&eacute;ricos (teclado, mouse e impressora);<br />&ndash; Comunica&ccedil;&atilde;o entre celulares;<br />&ndash; Comunica&ccedil;&atilde;o entre celulares e fones de ouvidos, caixas de som e sistemas de voz para carros;<br />&ndash; Controles sem fio para v&iacute;deo games.</p>
<p>Este projeto tem a finalidade de acender e apagar uma l&acirc;mpada atrav&eacute;s de um comando enviado pelo celular.</p>
<p><strong>Materiais Necess&aacute;rios</strong></p>
<ul>
<li>1 Unidade &ndash; Arduino Uno;</li>
<li>1 Unidade &ndash; Modulo Bluetooth HC-06;</li>
<li>1 Unidade &ndash; Modulo Rel&eacute; 5V;</li>
<li>1 Unidade&nbsp;&ndash; Resistor 120&nbsp;<strong>&Omega;;</strong></li>
<li>1 Unidade&nbsp;&ndash; Resistor 220&nbsp;<strong>&Omega;;</strong></li>
<li>1 Unidade &ndash;&nbsp; Jumper Macho;</li>
<li>1 Unidade &ndash; Jumper Femea;</li>
<li>1&nbsp; Unidade &ndash; L&acirc;mpada com soquete.</li>
</ul>
<p>&nbsp;</p>
<h2>Programa</h2>
<div id="crayon-5d43581beb9bf345625685-4" class="crayon-line crayon-striped-line"><span class="crayon-t">int</span> <span class="crayon-v">key</span> <span class="crayon-o">=</span> <span class="crayon-cn">5</span><span class="crayon-sy">;</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-5" class="crayon-line"><span class="crayon-t">int</span> <span class="crayon-v">val</span> <span class="crayon-o">=</span> <span class="crayon-cn">0</span><span class="crayon-sy">;</span></div>
<div id="crayon-5d43581beb9bf345625685-6" class="crayon-line crayon-striped-line">&nbsp;</div>
<div id="crayon-5d43581beb9bf345625685-7" class="crayon-line"><span class="crayon-t">void</span> <span class="crayon-e">setup</span><span class="crayon-sy">(</span><span class="crayon-sy">)</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-8" class="crayon-line crayon-striped-line"><span class="crayon-sy">{</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-9" class="crayon-line"><span class="crayon-h">&nbsp;&nbsp;</span><span class="crayon-v">Serial</span><span class="crayon-sy">.</span><span class="crayon-e">begin</span><span class="crayon-sy">(</span><span class="crayon-cn">9600</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-10" class="crayon-line crayon-striped-line"><span class="crayon-h">&nbsp;&nbsp;</span><span class="crayon-e">pinMode</span><span class="crayon-sy">(</span><span class="crayon-v">key</span><span class="crayon-sy">,</span><span class="crayon-v">OUTPUT</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-11" class="crayon-line"><span class="crayon-h">&nbsp;&nbsp;</span><span class="crayon-e">digitalWrite</span> <span class="crayon-sy">(</span><span class="crayon-v">key</span><span class="crayon-sy">,</span><span class="crayon-v">HIGH</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-12" class="crayon-line crayon-striped-line"><span class="crayon-sy">}</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-13" class="crayon-line"><span class="crayon-h">&nbsp;&nbsp;&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-14" class="crayon-line crayon-striped-line"><span class="crayon-t">void</span> <span class="crayon-e">loop</span><span class="crayon-sy">(</span><span class="crayon-sy">)</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-15" class="crayon-line"><span class="crayon-sy">{</span></div>
<div id="crayon-5d43581beb9bf345625685-16" class="crayon-line crayon-striped-line"><span class="crayon-h">&nbsp;&nbsp;&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-17" class="crayon-line"><span class="crayon-h">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-18" class="crayon-line crayon-striped-line"><span class="crayon-v">val</span><span class="crayon-o">=</span><span class="crayon-v">Serial</span><span class="crayon-sy">.</span><span class="crayon-e">read</span><span class="crayon-sy">(</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span><span class="crayon-h">&nbsp;&nbsp;</span></div>
<div id="crayon-5d43581beb9bf345625685-19" class="crayon-line">&nbsp;</div>
<div id="crayon-5d43581beb9bf345625685-20" class="crayon-line crayon-striped-line"><span class="crayon-st">if</span> <span class="crayon-sy">(</span><span class="crayon-v">val</span><span class="crayon-o">==</span><span class="crayon-s">'A'</span><span class="crayon-sy">)</span></div>
<div id="crayon-5d43581beb9bf345625685-21" class="crayon-line"><span class="crayon-sy">{</span></div>
<div id="crayon-5d43581beb9bf345625685-22" class="crayon-line crayon-striped-line"><span class="crayon-e">digitalWrite</span> <span class="crayon-sy">(</span><span class="crayon-v">key</span><span class="crayon-sy">,</span><span class="crayon-v">LOW</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span></div>
<div id="crayon-5d43581beb9bf345625685-23" class="crayon-line"><span class="crayon-h">&nbsp;&nbsp; </span></div>
<div id="crayon-5d43581beb9bf345625685-24" class="crayon-line crayon-striped-line"><span class="crayon-sy">}</span></div>
<div id="crayon-5d43581beb9bf345625685-25" class="crayon-line"><span class="crayon-st">if</span> <span class="crayon-sy">(</span><span class="crayon-v">val</span><span class="crayon-o">==</span><span class="crayon-s">'D'</span><span class="crayon-sy">)</span></div>
<div id="crayon-5d43581beb9bf345625685-26" class="crayon-line crayon-striped-line"><span class="crayon-sy">{</span></div>
<div id="crayon-5d43581beb9bf345625685-27" class="crayon-line"><span class="crayon-e">digitalWrite</span> <span class="crayon-sy">(</span><span class="crayon-v">key</span><span class="crayon-sy">,</span><span class="crayon-v">HIGH</span><span class="crayon-sy">)</span><span class="crayon-sy">;</span></div>
<div id="crayon-5d43581beb9bf345625685-28" class="crayon-line crayon-striped-line"><span class="crayon-sy">}</span></div>
<div id="crayon-5d43581beb9bf345625685-29" class="crayon-line"><span class="crayon-sy">}</span></div>
<div class="crayon-line">
<h2>Comunica&ccedil;&atilde;o Bluetooth entre o Celular e Arduino</h2>
<p>Para fazer a comunica&ccedil;&atilde;o entre o celular e o Arduino foi utilizado um celular Android onde foi instalado o aplicativo Lights On. Este app foi desenvolvido no App Inventor de propriedade do Massachusetts Institute of Technology (MIT), que permite as pessoas criarem seus aplicativos para o sistema operacional Android.</p>
<p>Ap&oacute;s selecionar a conex&atilde;o do m&oacute;dulo Bluetooth do m&oacute;dulo correspondente (no nosso caso HC &ndash; 06), a tela inicial do aplicativo ser&aacute; reaberta. Desta forma voc&ecirc; pode acender e apagar as luzes com os bot&otilde;es correspondentes.</p>
</div>
