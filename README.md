# Engram-21X : Optimized Layout for X-BOWS Nature

An optimized Engram 2.0 layout designed for X-BOWS Nature.

---

## 🇬🇧 English Documentation

### About This Project

This is a highly customized version of the Engram 2.0 layout, tailored for the X-BOWS Nature keyboard.

> Customization Note: This layout uses a single typing layer. QMK supports multi-layer configurations; feel free to modify and design additional layers yourself.

### Modification Logic

The original Engram 2.0 layout places the `Q` and `Z` keys in the right pinky area, which requires twisting the right palm outwards every time they are pressed. To fix this ergonomic flaw on the X-BOWS Nature keyboard, the following adjustments were made:
- Moved `Q` to the bottom-right `Alt` position.
- Moved `Z` back to its standard QWERTY position (left of the `X` key).
- Moved `G` (which was originally in the `Z` position) to the left `Space` key, controlled by the left thumb. (This makes typing words like "big" much easier ^^)

### ⌨️ Layout Maps

#### Layer 0: Base

```text
 * | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Prtsc   |  Caps Lock   |
 * |   @   |   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   0   |   #   |   GUI   |    Bksp      |
 * | Tab |   B    |    Y   |   O  |   U  |   '  |            |    "   |    L   |    D  |   W  |   V  |   /  |  End |  Home  | PgUp |
 * |   [   |   C   |   I   |   E  |   A  |   ,  |      Bksp      |   .  |    H   |   T  |   S  |   N  |   ]  |    Enter   | PgDn |
 * |Shift|   Z  |   X  |   J  |   K  |   _  |  Ctrl + Back Space  |    ?  |    R   |  M  |   F  |  P  |  Del |      |  Up |
 * |Ctrl |  Alt  |     Space   |      G     |   Enter   |   Shift   |     Space     |      Q     |  FN  | Ctrl | Lft  |  Dn |  Rig |
Layer 0: Shifted
Plaintext


 * | Esc |  F1  |  F2  |  F3  |  F4  |      F5  |  F6  |  F7  |  F8  |      F9  |  F10 |  F11 |  F12 |   Prtsc   |  Caps Lock   |
 * |   `   |   |   |   =   |   ~   |   +   |   <   |   >   |   ^   |   &   |   %   |   * |   $   |   GUI   |    Bksp    |
 * | Tab |   B    |    Y   |   O  |   U  |   (   |            |   )   |    L   |    D  |   W  |   V  |   \  |  End |  Home  | PgUp |
 * |   {   |   C   |   I   |   E  |   A  |   ;  |      Bksp      |    :  |    H   |   T  |   S  |   N  |   }  |    Enter   | PgDn |
 * |Shift|   Z  |   X  |   J  |   K  |   -  |  Ctrl + Back Space  |    !  |    R   |  M  |   F  |  P  |  Del |      |  Up |
 * |Ctrl |  Alt  |     Space   |      G     |   Enter   |   Shift   |     Space     |      Q     |  FN  | Ctrl | Lft  |  Dn |  Rig |
Installation and Flashing
Required Tools:

Download QMK Toolbox (qmk.fm/toolbox) and install QMK MSYS (github.com/qmk/qmk_distro_msys/releases/latest).

File Search (Windows): Use Everything to locate files.

Text Editor: Use Notepad++. Change language via Settings > Preferences > Localization.

Setup Folder:

Go to your qmk_firmware directory (typically under your Windows User folder):
C:\Users\<YourUsername>\qmk_firmware\keyboards\xbows\nature\keymaps

Keep the default folder as a backup.

Create a folder named nonn_engram2.

Place keymap.c inside, and add rules.mk (Content: KEY_OVERRIDE_ENABLE = yes).

Compile:

Open QMK MSYS and run: qmk compile -kb xbows/nature -km nonn_engram2

Flash:

Open QMK Toolbox, load the .hex file.

Hold Esc while plugging in the keyboard to enter DFU mode.

Click Clear EEPROM, then click Flash.

🇹🇼 中文說明文件
關於本專案
Engram-21X 是基於 Engram 2.0 鍵盤佈局，針對 X-BOWS Nature 鍵盤所進行的深度客製化版本。

客製化提醒：本鍵盤佈局目前專注於單一主層的優化。若有額外需求，歡迎自行利用 QMK 工具與 AI 輔助來擴充圖層。

修改邏輯說明
原版 Engram 2.0 將 Q 與 Z 按鍵放置於右手小指區，但每次按下 Q 或 Z 時，需要將右手掌往右側轉動。為了在 X-BOWS Nature 鍵盤上改善此缺點，本配置做了以下更動：

將 Q 移至右下方的 Alt 鍵位。

將 Z 移回 QWERTY 佈局的 Z 處（X 鍵左方）。

將原本在 Z 鍵位置的 G 鍵，移動至左空白鍵，由左手拇指負責。（如此一來，輸入 "big" 會順手得多 ^^）

編譯與刷機步驟
準備工具：

下載 QMK Toolbox 與安裝 QMK MSYS。

檔案搜尋工具：Windows 下建議使用 Everything 快速搜尋資料夾。

文字編輯器：建議使用 Notepad++，於 Settings > Preferences > Localization 切換語系。

建立目錄與設定檔：

前往您的 QMK 鍵盤目錄（預設位於 C 槽的使用者資料夾下）：
C:\Users\<您的使用者名稱>\qmk_firmware\keyboards\xbows\nature\keymaps

在此路徑中新建 nonn_engram2 資料夾。

放入 keymap.c，並新建 rules.mk (內容輸入：KEY_OVERRIDE_ENABLE = yes)。

編譯 (使用 QMK MSYS)：

開啟 QMK MSYS，輸入 qmk compile -kb xbows/nature -km nonn_engram2。

刷機 (使用 QMK Toolbox)：

打開 Qmk_toolbox.exe 選取剛編譯好的 .hex 檔案。

進入模式：拔掉鍵盤 USB，按住 Esc 不放，插回 USB，大約兩秒後鬆開 Esc。

清除與寫入：務必先點擊 Clear EEPROM，再點擊 Flash。

💡 燈光控制 (RGB Controls)
FN + Tab：開啟/關閉背光。

FN + Y / I：亮度調整。

FN + B / O：燈效/色調切換。

FN + E / C：速度調整。
