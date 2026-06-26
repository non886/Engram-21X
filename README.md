# Engram-21X : Optimized Layout for X-BOWS Nature

An optimized Engram 2.0 layout designed for X-BOWS Nature.

---

## 🇬🇧 English Documentation

### About This Project

This is a highly customized version of the Engram 2.0 layout, tailored for the X-BOWS Nature keyboard.

> Customization Note: This layout uses a single typing layer. QMK supports multi-layer configurations; feel free to modify and design additional layers yourself.

### Modification Logic

**Compared to the original Engram 2.0 layout, this custom configuration specifically modifies three keys: `Z`, `Q`, and `G`.**

The original Engram 2.0 layout places the `Q` and `Z` keys in the right pinky area, which requires twisting the right palm outwards every time they are pressed. To fix this ergonomic flaw on the X-BOWS Nature keyboard, the following adjustments were made:
- Moved `Q` to the bottom-right `Alt` position.
- Moved `Z` back to its standard QWERTY position (left of the `X` key).
- Moved `G` (which was originally in the `Z` position) to the left `Space` key, controlled by the left thumb. (This makes typing words like "big" much easier ^^)

#### Data-Driven Rationale (Design Deduction)
These modifications were calculated based on English letter frequency statistics (sourced from Peter Norvig's Google Books corpus analysis). Looking at the lowest frequency letters from the data:
- **1.** `Z` = 0.09%
- **2.** `Q` = 0.12%
- **7.** `B` = 1.48%
- **10.** `G` = 1.87%
- **15.** `C` = 3.34%

Since `Z`, `Q`, and `G` have extremely low usage frequencies, moving them out of the primary right-pinky zone and delegating `G` to the strong left thumb makes perfect ergonomic sense without sacrificing overall typing speed.

<details>
<summary>📊 Click to view the full Letter Frequency Data</summary>

*Reverse sorting (lowest to highest frequency):*
1. Z = 0.09%
2. Q = 0.12%
3. J = 0.16%
4. X = 0.23%
5. K = 0.54%
6. V = 1.05%
7. B = 1.48%
8. Y = 1.66%
9. W = 1.68%
10. G = 1.87%
11. P = 2.14%
12. F = 2.40%
13. M = 2.51%
14. U = 2.73%
15. C = 3.34%
16. D = 3.82%
17. L = 4.07%
18. H = 5.05%
19. R = 6.28%
20. S = 6.51%
21. N = 7.23%
22. I = 7.57%
23. O = 7.64%
24. A = 8.04%
25. T = 9.28%
26. E = 12.49%
</details>

### ⌨️ Layout Maps & My Setup

**1. Original X-Bows Nature Keyboard**
<img width="1160" height="488" alt="X-BOWS N--" src="https://github.com/user-attachments/assets/e4f2730a-4a4c-485f-940d-e9ded3f92271" />

**2. Engram-21X Custom Layout Diagram**
<img width="896" height="387" alt="2026-06-26_210732" src="https://github.com/user-attachments/assets/f2e5d7b8-722f-4cfc-b2f0-39ad33667c44" />

#### My Hardware Setup
To complete the ergonomic typing experience, my personal keyboard is equipped with:
- **Switches:** TTC Frozen Silent V2 (Linear silent switches with a bottom-out cushioning effect, very friendly to the fingers).
- **Keycaps:** Keyreative PBS profile Blank Black keycaps.
- **Wrist Rest:** Official X-BOWS keyboard wrist rest.
- **Accessory:** A custom [3D-printed negative tilt keyboard stand](https://www.reddit.com/r/3Dprinting/comments/xc8lsc/i_designed_and_printed_a_negative_tilt_keyboard/).

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

Download QMK Toolbox and install QMK MSYS.

File Search (Windows): Use Everything to locate files quickly.

Text Editor: Use Notepad++ for all file editing.

Setup Folder:

Go to your qmk_firmware directory: C:\Users\<YourUsername>\qmk_firmware\keyboards\xbows\nature\keymaps

Create a folder named nonn_engram2.

Place keymap.c inside, and add rules.mk (Content: KEY_OVERRIDE_ENABLE = yes).

Compile:

Open QMK MSYS and run: qmk compile -kb xbows/nature -km nonn_engram2

Once successful, the newly compiled .hex file will appear here: C:\Users\<YourUsername>\qmk_firmware\xbows_nature_nonn_engram2.hex

Flash:

Open Qmk_toolbox.exe.

Click Open (next to 'Local file' at the top right) and select your compiled .hex file.

Enter DFU Mode: Unplug the keyboard's USB cable. Hold down the Esc key. Keep holding Esc while plugging the USB back in, wait about two seconds, then release Esc. (Look for yellow text like *** DFU device connected in the black window to confirm connection).

Clear & Write:

CRUCIAL: First, click Clear EEPROM. This erases old layer memory to ensure our new layout maps perfectly.

Finally, click Flash.

💡 RGB Controls
Turned on by default, but prefer no backlight?

FN + Tab: Toggle RGB completely ON/OFF.

FN + Y / I: Brightness Up / Down.

FN + B / O: Change Effect Mode / Color Hue.

FN + E / C: Effect Speed Faster / Slower.

⌨️ Typing Practice & Personal Progress
Learning a new layout takes time. I highly recommend using keybr.com to build your muscle memory.
You can use their custom text feature to practice these pangrams (sentences containing every letter of the alphabet) to train your global key positions:

Pack my box with five dozen liquor jugs.

The five boxing wizards jump quickly.

While making a whirlwind visit, Jack quit smoking.

Sphinx of black quartz, judge my vow.

My Real-World Progress: To give you a realistic idea of the learning curve, I have practiced this layout for 87 hours and 13 minutes, and my speed currently sits around 50~61 WPM. It might not be blazing fast yet, but the ergonomic comfort it brings is totally worth it! You can check out my ongoing progress here on my keybr profile: https://www.keybr.com/profile/k5me31n. Keep practicing!

Thank you for reading ^—^

🇹🇼 中文說明文件
關於本專案
Engram-21X 是基於 Engram 2.0 鍵盤佈局，針對 X-BOWS Nature 鍵盤所進行的深度客製化版本。

客製化提醒：本鍵盤佈局目前專注於單一主層的優化。若有額外需求，歡迎自行利用 QMK 工具與 AI 輔助來擴充圖層。

修改邏輯說明
與原版 Engram 2.0 相比，本佈局主要更動了三個按鍵：Z、Q 與 G。

原版 Engram 2.0 將 Q 與 Z 按鍵放置於右手小指區，但每次按下 Q 或 Z 時，需要將右手掌往右側轉動。為了在 X-BOWS Nature 鍵盤上改善此缺點，本配置做了以下更動：

將 Q 移至右下方的 Alt 鍵位。

將 Z 移回 QWERTY 佈局的 Z 處（X 鍵左方）。

將原本在 Z 鍵位置的 G 鍵，移動至左空白鍵，由左手拇指負責。（如此一來，輸入 "big" 會順手得多 ^^）

數據支持與設計推算
上述的改鍵設定並非隨機，而是參考了英文字母頻率統計（基於 Peter Norvig 的 Google Books 語料庫分析）。以下為推算時所對比的低頻字母數據：

第 1 低: Z = 0.09%

第 2 低: Q = 0.12%

第 7 低: B = 1.48%

第 10 低: G = 1.87%

第 15 低: C = 3.34%

從數據推算可以看出，Z、Q 以及 G 皆屬於極低頻或偏低頻的字母。因此將它們移出原本容易造成小指負擔的區域，並將 G 交由強壯的左手拇指負責，不僅符合人體工學，也完全貼合實際的打字數據分配。

反向排序（出現機率由低到高）：

Z = 0.09%

Q = 0.12%

J = 0.16%

X = 0.23%

K = 0.54%

V = 1.05%

B = 1.48%

Y = 1.66%

W = 1.68%

G = 1.87%

P = 2.14%

F = 2.40%

M = 2.51%

U = 2.73%

C = 3.34%

D = 3.82%

L = 4.07%

H = 5.05%

R = 6.28%

S = 6.51%

N = 7.23%

I = 7.57%

O = 7.64%

A = 8.04%

T = 9.28%

E = 12.49%

⌨️ 鍵盤佈局與實體配置
(請在上方英文區塊將您的原鍵盤實體參考圖與佈局示意圖拖曳上傳即可，圖片會自動顯示於此處之前)

我的硬體配置
為了搭配此佈局達到最佳的人體工學體驗，我個人的鍵盤實體配置如下：

軸體：冰靜軸 V2（靜音線性軸，觸底有緩衝效果，對手指關節更友善）。

鍵帽：鍵設局 PBS 黑無刻鍵帽。

手托：X-BOWS 鍵盤官方手托。

配件：3D 列印的負傾斜鍵盤架。

編譯與刷機步驟
準備工具：

先下載 QMK Toolbox 與安裝 QMK MSYS。

檔案搜尋工具：Windows 下建議使用 Everything 快速搜尋資料夾。

文字編輯器：建議下載 Notepad++，凡文件編輯都是用此 Notepad++ 編輯之。

建立目錄與設定檔：

前往您的 QMK 鍵盤目錄：C:\Users\<您的使用者名稱>\qmk_firmware\keyboards\xbows\nature\keymaps

在此路徑中新建 nonn_engram2 資料夾。

放入 keymap.c，並新建 rules.mk，內容輸入：KEY_OVERRIDE_ENABLE = yes。

編譯 (使用 QMK MSYS)：

開啟 QMK MSYS，輸入：qmk compile -kb xbows/nature -km nonn_engram2

待成功後，剛編譯好的 xbows_nature_nonn_engram2.hex 會出現在以下路徑：C:\Users\<您的使用者名稱>\qmk_firmware\

刷機 (使用 QMK Toolbox)：

打開您的 Qmk_toolbox.exe。

點擊右上角 Local file 旁邊的 Open，把您剛剛找到的這個 xbows_nature_nonn_engram2.hex 選進去。

進入刷機模式：

拔掉鍵盤的 USB 線。

按住鍵盤左上角的 Esc 鍵不放。

保持按住的狀態，將 USB 線插回電腦，大約兩秒後再鬆開 Esc。

此時觀察 Toolbox 中間的黑色文字視窗，應該會跳出黃色的提示字體（例如 *** DFU device connected 或 *** Caterina device connected），這代表軟體成功抓到您的鍵盤了。

清除與寫入：

非常重要：先點擊畫面中間的 Clear EEPROM 按鈕。這會抹除晶片內殘留的舊有圖層記憶，確保我們寫的程式碼能完美對應。

最後，點擊右上角的 Flash 按鈕！

💡 燈光控制 (RGB Controls)
刷機成功了，但是它也自動開啟彩色背光了，我不想用背光、怎麼關掉呢？

FN + Tab：這會觸發底層的 RM_TOGG 功能，直接一鍵完全關閉或開啟彩色背光。

🎨 其他內建的燈光控制組合（供您未來參考）：
如果未來偶爾需要微調燈光，同樣在按住 FN 鍵的狀態下，以下按鍵也各司其職：

調整亮度：

FN + Y：增加亮度

FN + I：降低亮度

變更模式與顏色：

FN + B：切換不同的燈效模式

FN + O：切換燈光顏色色調

調整動態速度：

FN + E：加快燈效速度

FN + C：減慢燈效速度

⌨️ 打字練習資源與個人進度分享
適應全新的鍵盤佈局需要時間與肌肉記憶。非常推薦使用 keybr.com 來進行盲打練習。
您也可以利用該網站的自定義文字功能，輸入以下「全字母句（包含所有英文字母的句子）」來進行全域鍵位練習，加速肌肉記憶的養成：

Pack my box with five dozen liquor jugs.

The five boxing wizards jump quickly.

While making a whirlwind visit, Jack quit smoking.

Sphinx of black quartz, judge my vow.

我的真實學習曲線： 為了讓大家對陣痛期有個真實的參考，這邊分享我個人的練習數據。目前我已累積練習了 87 小時 13 分鐘，打字速度大約穩定在 50~61 WPM。
這速度雖然稱不上飛快，但佈局改善後帶來的手指舒適度與健康是無價的！
歡迎查看我的 keybr 個人檔案進度：https://www.keybr.com/profile/k5me31n 。慢慢來，手指會記住一切的！

感謝您的觀看 ^—^
