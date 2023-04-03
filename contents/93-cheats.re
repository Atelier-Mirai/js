= HTML / CSS / JavaScript 簡易まとめ

//abstract{
  HTML / CSS / JavaScript に関する簡易なまとめです。タグを使用して作成されるHTML要素を一覧表示しています。考えているものを見つけやすいように、機能別にグループ化しています。
//blankline
  @<href>{https://developer.mozilla.org/ja/docs/Web/HTML/Element, HTML 要素リファレンス}より、抄訳しております。引用元にはより詳細な解説や使用例等が掲載されておりますので、是非ご活用下さい。
//}


== HTML 簡易まとめ
HTML は Hyper Text Markup Language 超文書印付け言語 の意味で、ウェブサイトにおける文書構造の記述に用います。

=== コメント
プログラミング言語では、ソースコード中に記述されるがコードとしては解釈されない、人に向けた文字列をコメントといいます。主にコードの記述者が別の開発者などにコードの意味や動作、使い方、注意点等について注釈や説明を加える為に使われます。 @<fn>{comment}
//footnote[comment][出典：IT用語辞典]

HTMLでは、コメントは以下のように記述します。

//vspace[latex][7mm]

//table[][][csv=on]{
記述例, 説明
============
@<code>{<!-- コメント --> }, コメント
//}

//vspace[latex][7mm]

=== メインルート
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<html>}, HTML 文書においてルート (基点) となる要素 (トップレベル要素) であり、ルート要素とも呼ばれます。他の全ての要素は、この要素の子孫として配置します。
//}

=== 文書メタデータ
メタデータは、ページに関する情報のことです。これは検索エンジンやブラウザなどが利用する、およびページの描画を支援するスタイル、スクリプト、データといった情報を含みます。スタイルやスクリプトのメタデータはページ内で定義するか、それらの情報を持つ別のファイルへのリンクとして定義します。

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<head>}, 文書に関する機械可読な情報 (metadata)、たとえば題名、スクリプト、スタイルシートなどを含みます。
@<code>{<link>}, 外部リソースへのリンク要素です。現在の文書と外部のリソースとの関係を指定します。この要素はCSSへのリンクに最もよく使用されますが、サイトのアイコン (favicon スタイルのアイコンと、モバイル端末のホーム画面やアプリのアイコンの両方) の確立や、その他のことにも使用されます。
@<code>{<meta>}, 他のメタ関連要素 (base / link / script / style / title) で表すことができない任意のmetadataを提示します。
@<code>{<style>}, 文書あるいは文書の一部分のスタイル情報を含みます。
@<code>{<title>}, 題名要素です。ブラウザのタイトルバーやページのタブに表示される文書の題名を定義します。
//}

=== 区分化ルート
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<body>}, HTML文書のコンテンツを示す要素で、@<code>{<body>}要素は一つだけ配置できます。
//}

=== コンテンツ区分
コンテンツ区分要素は、文書のコンテンツを論理的な断片に体系づけます。ページのコンテンツでヘッダーやフッターのナビゲーション、あるいはコンテンツのセクションを識別する見出しなどの、大まかなアウトラインを作成するために区分要素を使用します。

//vspace[latex][2mm]
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<address>}, これを含んでいる HTML が個人、団体、組織の連絡先を提供していることを示します。
@<code>{<article>}, 文書、ページ、アプリケーション、サイトなどの中で自己完結しており、 (集合したものの中で) 個別に配信や再利用を行うことを意図した構成物を表します。
@<code>{<aside>}, 文書のメインコンテンツと間接的な関係しか持っていない文書の部分を表現します。
@<code>{<footer>}, 直近の区分コンテンツまたは @<code>{<body>} 要素のフッターを表します。フッターには通常、そのセクションの著作者に関する情報、関連文書へのリンク、著作権情報等を含めます。
@<code>{<header>}, 導入部やナビゲーション等のグループを表すコンテンツです。見出し要素だけでなく、ロゴ、検索フォーム、作者名、その他の要素を含むこともできます。
//}

//vspace[latex][2mm]
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<h1>} @<code>{<h2>} @<code>{<h3>} @<br>{}@<code>{<h4>} @<code>{<h5>} @<code>{<h6>}, セクションの見出しを6段階で表します。 @<br>{}@<code>{<h1>}が最上位で、@<code>{<h6>}が最下位です。
@<code>{<main>}, 文書の @<code>{<body>} の主要な内容を表します。主要な内容とは、文書の中心的な主題、またはアプリケーションの中心的な機能に直接関連または拡張した内容の範囲のことです。
@<code>{<nav>}, 現在の文書内の他の部分や他の文書へのナビゲーションリンクを提供するためのセクションを表します。ナビゲーションセクションの一般的な例としてメニュー、目次、索引などがあります。
@<code>{<section>}, 文書の自立した一般的なセクション (区間) を表します。そのセクションを表現するより意味的に具体的な要素がない場合に使用します。
//}

=== テキストコンテンツ
テキストコンテンツ要素は、開始タグ @<code>{<body>} と終了タグ @<code>{</body>} の間にあるコンテンツでブロックやセクションを編成します。これらの要素はコンテンツの用途や構造を識別するものであり、アクセシビリティ や SEO のために重要です。
//vspace[latex][2mm]
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<div>}, フローコンテンツの汎用コンテナです。CSS を用いて何らかのスタイル付けがされる (例えば、スタイルが直接適用されたり、親要素にグリッドなど何らかのレイアウトモデルが適用されるなど) までは、コンテンツやレイアウトには影響を与えません。
@<code>{<figure>}, 図表などの自己完結型のコンテンツを表します。任意で figcaption 要素を使用してキャプション(見出し)を付けることができます。
@<code>{<figcaption>}, 親の figure 要素内にあるその他のコンテンツを説明するキャプション(見出し)や凡例を表します。
@<code>{<ol>}, 項目の順序付きリストを表します。ふつうは番号付きのリストとして表示されます。
@<code>{<ul>}, 項目の順序なしリストを表します。一般的に、行頭記号を伴うリストとして描画されます。
@<code>{<li>}, リストの項目を表すために用いられます。
@<code>{<p>}, テキストの段落を表します。
@<code>{<hr>}, 段落レベルの要素間において、テーマの意味的な区切りを表します。例えば、話の場面の切り替えや、節内での話題の転換などです。
//}

=== インライン文字列意味付け
インラインテキストセマンティクス要素は、単語、行、あるいは任意のテキスト範囲の意味、構造、スタイルを定義します。
//vspace[latex][2mm]
//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<a>}, アンカー要素は、@<code>{href}属性を用いて、別のウェブページ、ファイル、メールアドレス、同一ページ内の場所、または他の URL へのハイパーリンクを作成します。
@<code>{<br>}, 文中に改行（キャリッジリターン）を生成します。詩や住所など、行の分割が重要な場合に有用です。
@<code>{<b>}, 注目付け要素です。要素の内容に読み手の注意を惹きたい場合で、他の特別な重要性が与えられないものに使用します。
@<code>{<em>}, 強調されたテキストを示します。入れ子にすることができ、入れ子の段階に応じてより強い程度の強調を表すことができます。
@<code>{<i>}, 興味深いテキスト要素です。何らかの理由で他のテキストと区別されるテキストの範囲を表します。
@<code>{<strong>}, 強い重要性要素です。内容の重要性、重大性、または緊急性が高いテキストを表します。ブラウザは一般的に太字で描画します。
@<code>{<small>}, 著作権表示や法的表記のような、注釈や小さく表示される文を表します。既定では、@<code>{small} から @<code>{x-small} のように、一段階小さいフォントでテキストが表示されます。
@<code>{<span>}, 記述コンテンツの汎用的な行内コンテナであり、何かを表すものではありません。@<code>{class} または @<code>{id} 属性を使用して、スタイル付けのために使用することができます。
//}

=== 画像とマルチメディア
HTML は 画像、音声、映像といった、さまざまなマルチメディアリソースをサポートします。

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<img>}, 文書に画像を埋め込みます。
@<code>{<audio>}, 文書内に音声コンテンツを埋め込むために使用します。
@<code>{<video>}, 映像要素です。文書中に映像再生に対応するメディアプレイヤを埋め込みます。
//}

=== SVG と MathML
SVG と MathML のコンテンツを、 <svg> および <math> 要素を使用して直接 HTML 文書に埋め込むことができます。

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<svg>}, SVG(Scalable Vector Graphics)形式の図形描画のための要素です。直線、矩形、円、楕円、多角形、折れ線やベジェ曲線の描画が可能です。
@<code>{<math>}, 数式を記述する際に用います。
//}

=== スクリプティング
動的なコンテンツやウェブアプリケーションを作成するために、HTML ではスクリプト言語を使用できます。もっとも有名な言語は、JavaScript です。

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<canvas>}, @<code>{<canvas>}要素 と @<code>{Canvas スクリプティング API} や @<code>{WebGL API} を使用して、グラフィックやアニメーションを描画することができます。
@<code>{<script>}, 実行できるコードやデータを埋め込むために使用します。ふつうは JavaScript のコードの埋め込みや参照に使用されます。
@<code>{<noscript>}, このページ上のスクリプトの種類に対応していない場合や、スクリプトの実行がブラウザーで無効にされている場合に表示する HTML の部分を定義します。
//}

=== 表(テーブル)
以下の要素は、表形式のデータを作成および制御するために使用します。

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<table>}, 表形式のデータ、つまり、行と列の組み合わせによるセルに含まれたデータによる二次元の表で表現される情報です。
@<code>{<caption>}, 表のキャプション (またはタイトル) を指定します。
@<code>{<colgroup>}, 表内の列のグループを定義します。
@<code>{<col>}, 表内の列を定義して、全ての一般セルに共通の意味を定義するために使用します。この要素は通常、colgroup 要素内にみられます。
@<code>{<thead>}, 表の列の見出しを定義する行のセットを定義します。
@<code>{<tbody>}, 表本体要素 (tbody) は、表の一連の行 (tr 要素) を内包し、その部分が表 (table) の本体部分を構成することを表します。
@<code>{<tr>}, 表内でセルの行を定義します。行のセルは td (データセル) および th (見出しセル) 要素を混在させることができます。
@<code>{<th>}, 表のセルのグループ用のヘッダーであるセルを定義します。
@<code>{<td>}, 表でデータを包含するセルを定義します。これは表モデルに関与します。
@<code>{<tfoot>}, 表の一連の列を総括する行のセットを定義します。
//}

=== フォーム
利用者がデータを記入してウェブサイトやアプリケーションに送信することを可能にするフォームを作成するために組み合わせて用いる要素です。@<fn>{form}
//footnote[form][フォームに関する多くの情報が、 @<href>{https://developer.mozilla.org/ja/docs/Learn/Forms,HTMLフォームガイド}に掲載されています。]

//tsize[latex][|l|p{111mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{<fieldset>}, フォーム内のラベル (label) などのようにいくつかのコントロールをグループ化するために使用します。
@<code>{<legend>}, fieldset の内容のキャプション(見出し)を表すために用います。

@<code>{<form>}, サーバに情報を送信するための対話型コントロールを含む文書の区間を表します。
@<code>{<button>}, クリックできるボタンを表し、フォームや、文書で単純なボタン機能が必要なあらゆる場所で使用することができます。
@<code>{<input>}, 利用者からデータを受け取るための、フォーム用の対話的なコントロールを作成するために使用します。
@<code>{<textarea>}, 複数行のプレーンテキスト編集コントロールを表し、問い合わせフォーム等、利用者が大量の自由記述テキストを入力できるようにするときに便利です。
@<code>{<label>}, ユーザーインターフェイスの項目のキャプション(見出し)を表します。

@<code>{<datalist>}, 他のコントロールで利用可能な値を表現する一連の option 要素を含みます。
@<code>{<select>}, 選択式のメニューを提供するコントロールを表します。
@<code>{<optgroup>}, select 要素内の、選択肢 (option) のグループを作成します。
@<code>{<option>}, select 要素、optgroup 要素、datalist 要素内で項目を定義するために使われます。
#@# したがって、option は HTML 文書でポップアップメニューのメニュー項目や、その他の項目の一覧を表すことができます。

@<code>{<output>}, 出力要素(output)です。サイトやアプリが計算結果やユーザー操作の結果を挿入することができるコンテナ要素です。
@<code>{<meter>}, 既知の範囲内のスカラ値、または小数値を表します。
@<code>{<progress>}, タスクの進捗状況を表示します。プログレスバーとしてよく表示されます。
//}

== CSS 簡易まとめ

CSSは、Cascading Style Sheets の略で、ウェブサイトにおける装飾などの為に用います。
@<href>{https://developer.mozilla.org/ja/docs/Web/CSS, CSS: カスケーディングスタイルシート}より、抄訳しています。引用元には詳細な解説や使用例等が掲載されています。是非ご活用下さい。

=== 構文
カスケーディングスタイルシート(CSS)言語の基本的な狙いは、ブラウザがページの要素を、色、位置、装飾などの特定の特性をもって描けるようにすることです。
その為に、@<B>{プロパティ}(人がどのような特性か考えることのできる名前)と、
その特性をどのようにブラウザが操作しなければならないか表す@<B>{値}の組で表現します。これを@<B>{宣言}と呼びます。ページの要素を選択する条件である@<B>{セレクタ}により、それぞれの宣言を文書のそれぞれの部品に適用できるようにします。
//list[][CSS構文]{
  セレクタ {
    プロパティ1: 値;
    プロパティ2: 値;
    プロパティ3: 値;
  }
//}

//list[][CSSの例]{
  header, p.intro {
    background-color: red;
    border-radius: 3px;
  }
//}

=== セレクタ
==== 基本セレクタ
 : 全称セレクタ
  全ての要素を選択します。任意で、特定の名前空間に限定したり、全ての名前空間を対象にしたりすることができます。 @<br>{}
  例: @<code>{*} は文書の全ての要素を選択します。

 : 要素型セレクタ
  指定されたノード名を持つ全ての要素を選択します。 @<br>{}
  例: @<code>{input} はあらゆる @<code>{<input>} 要素を選択します。

 : クラスセレクタ
  指定された @<code>{class} 属性を持つ全ての要素を選択します。 @<br>{}
  例: @<code>{.index} は @<code>{"index"} クラスを持つあらゆる要素を選択します。

 : ID セレクタ
  @<code>{ID} 属性の値に基づいて要素を選択します。文書中に指定された @<code>{ID} を持つ要素は1つしかないはずです。 @<br>{}
  例: @<code>{#toc} は @<code>{"toc"} という @<code>{ID} を持つ要素を選択します。

 : 属性セレクタ
  指定された属性を持つ要素を全て選択します。 @<br>{}
  構文: @<code>{[attr] [attr=value] [attr~=value] [attr|=value] [attr^=value] [attr$=value] [attr*=value]} @<br>{}
  例: @<code>{[autoplay]} は @<code>{autoplay} 属性が（どんな値でも）設定されている全ての要素を選択します。

==== グループ化セレクタ
 : セレクターリスト
  @<code>{,(カンマ)} はグループ化の手段であり、一致する全てのノードを選択します。 @<br>{}
  例: @<code>{div, span} は @<code>{<span>} と @<code>{<div>} の両要素に一致します。

 : 子孫結合子
  @<code>{半角空白} 結合子は、第1の要素の子孫にあたるノードを選択します。 @<br>{}
  例: @<code>{div span}は @<code>{<div>}要素内の@<code>{<span>}要素を全て選択します。

 : 子結合子
  @<code>{>} 結合子は、第1の要素の直接の子に当たるノードを選択します。 @<br>{}
  例: @<code>{ul > li} は @<code>{<ul>} 要素の内側に直接ネストされた @<code>{<li>} 要素を全て選択します。

 : 一般兄弟結合子
  @<code>{~} 結合子は兄弟を選択します。つまり、第2の要素が第1の要素の後にあり(直後でなくても構わない)、両者が同じ親を持つ場合です。 @<br>{}
  例: @<code>{p ~ span} は @<code>{<p>} 要素の後にある @<code>{<span>} 要素を全て選択します。

: 隣接兄弟結合子
 @<code>{+} 結合子は隣接する兄弟を選択します。つまり、第2の要素が第1の要素の直後にあり、両者が同じ親を持つ場合です。 @<br>{}
 例: @<code>{h2 + p} は @<code>{<h2>} 要素の後にすぐに続く @<code>{<p>} 要素を全て選択します。

==== 擬似表記
 : 擬似クラス
   @<code>{:} 表記により、文書ツリーに含まれない状態情報によって要素を選択できます。 @<br>{}
   例: @<code>{a:visited} は利用者が訪問済みの @<code>{<a>} 要素を全て選択します。

 : 疑似要素
  @<code>{::} 表記は、 HTML に含まれていない存在(エンティティ)を表現します。 @<br>{}
  例: @<code>{p::first-line} は全ての @<code>{<p>} 要素の先頭行を選択します。


==== コメント
#@# プログラミング言語では、ソースコード中に記述されるがコードとしては解釈されない、人間に向けた文字列をコメントといいます。主にコードの記述者が別の開発者などにコードの意味や動作、使い方、注意点などについて注釈や説明を加えるために使われます。 @<fn>{comment}
#@# //footnote[comment][出典：IT用語辞典]
#@#
CSSでは、コメントは以下のように記述します。
//vspace[latex][2mm]
//table[][][csv=on]{
記述例, 説明
============
@<code>{/* コメント */}, コメント
//}

//vspace[latex][7mm]

=== 良く使うCSSプロパティのご案内
CSSには、100以上ものプロパティがあり、そしてそれぞれのプロパティが取り得る値も個々に決められています。@<href>{https://developer.mozilla.org/ja/docs/Web/CSS/Reference, CSS リファレンス}に全てが紹介されていますので、詳しくはそちらをご覧ください。ここでは、主なもののみを簡単にご紹介します。
//vspace[latex][7mm]
//tsize[latex][|l|p{100mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{background}, 色、画像、原点と寸法、反復方法など、背景に関する全てのスタイルプロパティを一括で設定します。
@<code>{border}, 要素の境界(枠線)を設定します。これは border-width / border-style / border-color の値を設定します。
@<code>{border-radius}, 要素の境界(枠線)の外側の角を丸めます。1つの半径を設定すると円の角になり、2つの半径を設定すると楕円の角になります。
@<code>{box-shadow}, 要素のフレームの周囲にシャドウ(影)効果を追加します。
@<code>{color}, 要素のテキストやテキスト装飾における前景色の色の値を設定します。
@<code>{display}, 要素をブロック要素とインライン要素のどちらとして扱うかを設定します。およびその子要素のために使用されるレイアウト、例えば フローレイアウト、グリッド、フレックスなどを設定します。
@<code>{filter}, ぼかしや色変化などのグラフィック効果を要素に適用します。フィルターは画像、背景、境界の描画を調整するためによく使われます。
@<code>{font-family}, 選択した要素に対して、フォントファミリ名や総称ファミリ名の優先順位リストを指定します。明朝体、ゴシック体など、書体名を設定します。
@<code>{font-size}, フォントの大きさを定義します。
@<code>{font-style}, 通常体 (normal)、筆記体 (italic)、斜体 (oblique) のどれでスタイル付けするかを設定します。
@<code>{font-weight}, フォントの太さ (あるいは重み) を指定します。
@<code>{height}, 要素の高さを指定します。
@<code>{line-height}, 行ボックスの高さを設定します。これは主にテキストの行間を設定するために使用します。


//}

//tsize[latex][|l|p{100mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{list-style-type}, リスト項目要素のマーカーを設定します (円、文字、独自のカウンタースタイルなど)。
@<code>{margin}, 要素の全四辺のマージン領域を設定します。
@<code>{max-height}, 要素の最大高を設定します。
@<code>{max-width}, 要素の最大幅を設定します。
@<code>{object-fit}, @<code>{<img>} や @<code>{<video>} などの中身を、コンテナにどのようにはめ込むかを設定します。
@<code>{object-position}, @<code>{object-fit} プロパティと併用し、ボックス内における置換要素の配置を指定することが可能です。
@<code>{padding}, 要素の全四辺のパディング領域を一度に設定します。
@<code>{position}, 文書内で要素がどのように配置されるかを設定します。
@<code>{text-align}, ブロック要素または表セルボックスの水平方向の配置を設定します。
@<code>{text-decoration}, テキストの装飾的な線の表示を設定します。
@<code>{text-shadow}, テキストに影を追加します。文字列及びその装飾に適用される影のカンマで区切られたリストを受け付けます。
@<code>{vertical-align}, インラインボックス、インラインブロック、表セルボックスの垂直方向の配置を設定します。
@<code>{width}, 要素の幅を設定します。
@<code>{z-index}, 位置指定要素とその子孫要素、またはフレックスアイテムの z 順を定義します。より大きな z-index を持つ要素はより小さな要素の上に重なります。
//}

//vspace[latex][7mm]
==== グリッドレイアウト関係のプロパティ
//tsize[latex][|l|p{90mm}|]
//table[][][csv=on]{
要素, 説明
============
@<code>{grid-template-columns}, 列の線名と列幅のサイズ変更機能を定義します。
@<code>{grid-template-rows}, 行の線名と行高のサイズ変更機能を定義します。
@<code>{grid-auto-flow}, 自動配置されたアイテムがどのようにグリッドに流れていくかを指定します。
@<code>{grid-column}, グリッド列の中におけるグリッドアイテムの寸法と位置を指定し、線、区間、なし (自動) をグリッド配置に適用されることで、グリッド領域の列の開始と終了の端を指定します。
@<code>{grid-row}, グリッド行の中におけるグリッドアイテムの寸法と位置を指定し、線、区間、なし (自動) をグリッド配置に適用されることで、グリッド領域の行の開始と終了の端を指定します。
@<code>{gap}, 行や列の間のすき間 (溝) を定義します。これは @<code>{row-gap} および @<code>{column-gap} の一括指定です。
@<code>{align-self}, グリッド領域内のアイテムの垂直方向の配置を指定します。
@<code>{justify-self}, グリッド領域内のアイテムの水平方向の配置を指定します。
//}

//clearpage
== JavaScript 簡易まとめ

JavaScriptは、主にブラウザで用いられるプログラミング言語で、動的なサイトの作成に用います。

@<fn>{jsp}
//footnote[jsp][出典：@<href>{https://jsprimer.net, JavaScript Primer 迷わないための入門書}など]

=== コメント
#@# //quote{
#@# //noindent
#@# プログラミング言語では、ソースコード中に記述されるがコードとしては解釈されない、人間に向けた文字列をコメントという。
#@# 主にコードの記述者が別の開発者などにコードの意味や動作、使い方、注意点などについて注釈や説明を加えるために使われる。（出典：IT用語辞典）
#@# //}
#@#
JavaScriptは、一行コメントと複数行コメントが用意されています。
//vspace[latex][2mm]
//table[][]{
コード例	説明
-----------------
@<code>{// xxx}	一行コメント
@<code>{/* xxx */}	複数行コメント
//}

=== データ構造
//quote{
//noindent
変数とは、コンピュータプログラムのソースコードなどで、データを一時的に記憶しておくための領域に固有の名前を付けたもの。 @<fn>{fn-data}
//}
//footnote[fn-data][出典：IT用語辞典]

JavaScriptでは、定数宣言用の「@<code>{const}」と、変数宣言用の「@<code>{let}」が用意されています。

//vspace[latex][2mm]

//table[][]{
コード例	説明
-----------------
@<code>{const x}	@<B>{変数宣言}。@<code>{x}に値の再代入はできない
@<code>{let x}	@<B>{変数宣言}。@<code>{const}と似ているが、@<code>{x}に値を再代入できる
@<code>{var x}	@<B>{変数宣言}。古い変数宣言方法(今は使わない)
//}

=== リテラル
//quote{
//noindent
リテラル(literal)とは、直値、直定数とも呼ばれ、コンピュータプログラムのソースコードなどの中に、特定のデータ型の値を直に記載したものである。また、そのように値をコードに書き入れるために定められている書式のことをいう。 @<fn>{fn-literal}
//}

//footnote[fn-literal][出典: IT用語辞典]

//table[][]{
コード例	説明
-----------------
@<code>{true} または @<code>{false}	@<B>{真偽値}
@<code>{123}	@<B>{10進数}の整数リテラル
@<code>{123n}	巨大な整数を表すBigIntリテラル
@<code>{1_2541_0000}	日本の人口など、大きな数は @<code>{_} で区切ると読みやすくなる
@<code>{0b10}	@<B>{2進数}の整数リテラル
@<code>{0x30A2}	@<B>{16進数}の整数リテラル
@<code>{[x, y]}	@<code>{x}と@<code>{y}を初期値にもつ@<B>{配列オブジェクト}を作成
@<code>{{ k: v \}}	プロパティ名が@<code>{k}、 @<br>{}プロパティの値が@<code>{v}の@<B>{オブジェクト(≒連想配列)}を作成
//}

//clearpage

=== 文字列
//quote{
//noindent
文字列とは、文字を並べたもの。コンピュータ上では、数値など他の形式のデータと区別して、文字の並びを表すデータを文字列という。 @<fn>{fn-string}
//}

//footnote[fn-string][出典：IT用語辞典]

//table[][]{
コード例	説明
-----------------
@<code>{"xxx"}	ダブルクォートの@<B>{文字列リテラル}。
@<code>{'xxx'}	シングルクォートの@<B>{文字列リテラル}。
@<code>{`xxx`}	テンプレート文字列リテラル。改行を含んだ入力が可能
@<code>{`${x\}`}	テンプレート文字列リテラル中の変数@<code>{x}の値を展開する
//}


=== 演算子
//quote{
//noindent
演算子とは、数学やプログラミングなどで式を記述する際に用いる、演算内容を表す記号などのこと。様々な演算子が定義されており、これを組み合わせて式や命令文を構成する。 @<fn>{fn-operator}
//}

//footnote[fn-operator][出典：IT用語辞典]

以下の表は優先順位の最も高いもの (21) から最も低いもの (1) の順に並べられている。@<fn>{operator}

//footnote[operator][出典: @<href>{https://developer.mozilla.org/ja/docs/Web/JavaScript/Reference/Operators/Operator_Precedence,演算子の優先順位}]

//image[js_operator][][width=100%]

#@# //table[][]{
#@# コード例	説明
#@# -----------------
#@# @<code>{+}	プラス演算子、文字列結合演算子
#@# @<code>{-}	マイナス演算子
#@# @<code>{*}	乗算演算子
#@# @<code>{/}	除算演算子
#@# @<code>{%}	剰余演算子
#@# @<code>{**}	べき乗演算子
#@# @<code>{++}	インクリメント演算子
#@# @<code>{--}	デクリメント演算子
#@# @<code>{===}	厳密等価演算子
#@# @<code>{!==}	厳密不等価演算子
#@# @<code>{==}	等価演算子(@<B>{使用禁止})
#@# @<code>{!=}	不等価演算子(@<B>{使用禁止})
#@# @<code>{>}	大なり演算子/より大きい
#@# @<code>{>=}	大なりイコール演算子/以上
#@# @<code>{<}	小なり演算子/より小さい
#@# @<code>{<=}	小なりイコール演算子/以下
#@# @<code>{&}	ビット論理積
#@# @<code>{|}	ビット論理和
#@# @<code>{^}	ビット排他的論理和
#@# @<code>{~}	ビット否定
#@# @<code>{<<}	左シフト演算子
#@# @<code>{>>}	右シフト演算子
#@# @<code>{>>>}	ゼロ埋め右シフト演算子
#@# @<code>{&&}	AND演算子
#@# @<code>{??}	NULL合体演算子
#@# @<code>{||}	OR演算子
#@# @<code>{(x)}	グループ演算子
#@# @<code>{x, y}	カンマ演算子
#@# //}


//clearpage

=== 制御構造
プログラムの流れを制御するための構文です。
繰り返しのための「 @<code>{for文} 」、条件分岐のための「 @<code>{if文} 」などが用意されています。

//vspace[latex][7mm]

//table[][]{
例	説明
-----------------
@<code>{while(x){\}}	@<B>{whileループ}。 @<br>{}@<code>{x}が@<code>{true}なら反復処理を行う。 @<br>{}繰返回数が不明な際に用いると効果的
@<code>{for(let x=0;x < y ;x++){\}}	@<B>{forループ}。 @<br>{}@<code>{x < y}が@<code>{true}なら反復処理を行う。 @<br>{}繰返回数が分かる時に使うと効果的
@<code>{for(const p in o){\}}	@<B>{for...inループ}。 @<br>{}オブジェクト（@<code>{o}）のプロパティ(@<code>{p}) @<br>{}に対して反復処理を行う
@<code>{for(const x of iter){\}}	@<B>{for...ofループ}。 @<br>{}イテレータ(@<code>{iter})の反復処理を行う
@<code>{if(x){/*A*/\}else{/*B*/\}}	@<B>{条件式}。 @<br>{}@<code>{x}が@<code>{true}ならAの処理を、 @<br>{}それ以外ならBの処理を行う
@<code>{switch(x){case "A":{/*A*/\} "B":{/*B*/\}\}}	@<B>{switch文}。 @<br>{}@<code>{x}が@<code>{"A"}ならAの処理を、 @<br>{}"B"ならBの処理を行う
@<code>{x ? A: B}	@<B>{条件 （三項） 演算子}。 @<br>{}@<code>{x}が@<code>{true}なら@<code>{A}の処理を、 @<br>{}それ以外なら@<code>{B}の処理を行う
@<code>{break}	@<B>{break文}。 @<br>{}現在の反復処理を終了しループから抜け出す。
@<code>{continue}	@<B>{continue文}。 @<br>{}現在の反復処理を終了し次のループに行く。
@<code>{try{\}catch(e){\}finally{\}}	@<code>{try...catch}構文
@<code>{throw new Error("xxx")}	@<code>{throw}文
//}

=== データアクセス
プログラミング言語 Pascal の開発者 ニクラウス・ヴィルト氏による、
「プログラミング」＝「データ構造」＋「アルゴリズム」 は、広く知られています。

配列とオブジェクト(≒連想配列)という主要なデータ構造にアクセスするために、次の構文が用意されています。

//vspace[latex][7mm]

//table[][]{
コード例	説明
-----------------
@<code>{array[0]}	配列への@<B>{インデックスアクセス}
@<code>{obj["x"]}	オブジェクトへの@<B>{プロパティアクセス}（ブラケット記法）
@<code>{obj.x}	オブジェクトへの@<B>{プロパティアクセス}（ドット記法）
//}

=== 関数宣言
//quote{
//noindent
関数とは、コンピュータプログラム上で定義されるサブルーチンの一種で、数学の関数のように与えられた値（引数）を元に何らかの計算や処理を行い、結果を呼び出し元に返すもののこと。 @<fn>{fn-function}
//}

//footnote[fn-function][出典：IT用語辞典]

//table[][]{
サンプル	説明
-----------------
@<code>{function f(){\}}	@<B>{関数}宣言
@<code>{const f = function(){\};}	@<B>{関数}式
@<code>{const f = () => {\};}	@<B>{Arrow Function}の宣言
@<code>{function f(x, y){\}}	関数における仮引数の宣言
@<code>{function f(x = 1, y = 2){\}}	@<B>{デフォルト引数}、 @<br>{}引数が渡されていない場合の初期値を指定する。
@<code>{clasX{\}}	@<B>{クラス}宣言
@<code>{const X = clasX{\};}	@<B>{クラス}式
//}

=== モジュール
大きなプログラムを作る際、小さな部品（モジュール）を組み合わせて作ると、管理しやすく、部品の再利用もできるので便利です。
JavaScriptにも、特定のファイルで定義した関数を、他のファイルでも使えるようにする仕組みが用意されています。

//vspace[latex][7mm]

//table[][]{
コード	説明
-----------------
@<code>{import x from "./x.js"}	@<B>{デフォルトインポート}
@<code>{import { x \} from "./x.js"}	@<B>{名前付きインポート}
@<code>{export default x}	@<B>{デフォルトエクスポート}
@<code>{export { x \}}	@<B>{名前付きエクスポート}
//}

=== その他
//table[][]{
コード	説明
-----------------
@<code>{x;}	文
@<code>{{ \}}	ブロック文
//}

====[column] 金の延棒クイズ 【解答】

最後までお読みくださり、ありがとうございます。金の延棒クイズの解答です。
//blankline

//sideimage[gold_table2][35mm][sep=5mm,side=R]{
２回鋏を入れて、金の延棒を１と２と４の大きさに分割します。

一日目のお支払いには、１の延棒を渡します。

二日目のお支払いには、２の延棒を渡して、先に渡した１の延棒は返してもらいます。

三日目のお支払いには、１の延棒も渡します。

四日目のお支払いには、大きな４の延棒を渡し、２と１の延棒は返してもらいます。

五日目のお支払いには、１の延棒も渡します。

六日目のお支払いには、２の延棒を渡して、先に渡した１の延棒は返してもらいます。

七日目のお支払いには、全ての延棒を渡します。

//}
//blankline

延棒の有無を @<code>{0} と @<code>{1} で表すと二進数と対応しています。

意外なところに潜む二進数。探してみてくださいね。

#@#
#@# //clearpage
#@# === メモ
#@#
#@#
#@#
#@# //clearpage
#@# === メモ
#@#

#@# //clearpage
#@#
#@# === メモ
#@# //clearpage
