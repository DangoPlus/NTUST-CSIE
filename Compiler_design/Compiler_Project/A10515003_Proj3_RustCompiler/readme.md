# **Compiler Project Docu_A10515003鄧鵬宇**
程式目前可以正常生成正確的java assem
bly code，四個測資都可以生成並且正確執行，之外的測資無法保證能夠正確生成，寫的過程中精簡了很多不需要的部分，比如float以及array等。
# **How to build**
    make
    ./proj3 <testfiles
    ./javaa my_rust.jasm
    java my_rust
    make clean
執行方式只要make就好，會生成proj3的可執行文件，執行後會生成my_rust.jasm的jasm文件，用javaa執行後會生成my_rust.class的文件，java運行my_rust即可，程式會顯示運行後的結果。
## changes
1. lex file 

    lex的部分未進行太多修改

2. yacc file and symbol table

    語法的部分大體結構依然保持，但是中間寫了生成java assembly code的代碼，symbol table的地方加入了一些幫助查找symbol的代碼，定義了一些變數，除此之外也並未修改大致結構。
## 感想
這是我第二次修編譯器的課程，去年因爲項目最後沒有辦法在最後結束之前寫出來最後當了，今年也大四了，想着重修無論如何也要過，項目開始的也很早，也有去年寫go compiler的經驗，這次雖然也遇到很多問題，但是也都想辦法解決了。從寫compiler的過程中，自己的程式能力的確有了很大的進步，如何在linux環境下編程，結合各種工具幫助自己，一遍遍的讀文檔看語法，甚至手寫組合語言來幫助調試，這些對我影響深遠。雖然我覺得應該沒有辦法達到能夠跑出所有隱藏測資的水平，但是最後還是完成了，不知道的測資沒法測試，就這樣就好，雖然這次寫的rust compiler不是個完美的project但是付出的時間和睡眠給了他價值，我覺得收獲頗豐。

我特別想謝謝助教和老師的幫助，如果沒有這些幫助我估計也沒法完成，也想求求助教和老師能夠幫幫大四生，讓我順利畢業吧！

感激！感謝！希望大家都可以開心的度過這個暑假！！