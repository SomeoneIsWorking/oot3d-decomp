// OoT3D decomp @ 00440ff4  name=FUN_00440ff4  size=268

void FUN_00440ff4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;

  uVar1 = (param_2 & 0x3fc00) >> 10;
  uVar2 = param_2 & 0x3ff;
  if (((uVar1 != 0x11) || (uVar2 < 100)) || (0xb3 < uVar2)) {
    if (((uVar1 == 0x11) && (0x153 < uVar2)) && (uVar2 < 0x168)) {
      *(undefined4 *)(param_1 + 8) = 3;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_002e74e4();
      return;
    }
    if (((uVar1 == 0x11) && (0x167 < uVar2)) && ((int)uVar2 <= DAT_00441100)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 8) = 3;
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_002e74e4();
      return;
    }
    if ((((uVar1 == 0x11) && (DAT_00441104 <= (int)uVar2)) && (uVar2 < 400)) ||
       (((uVar1 == 0x11 && (0xe5 < uVar2)) && (uVar2 < 0x154)))) {
      *(undefined4 *)(param_1 + 8) = 3;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_002e74e4();
      return;
    }
  }
  if (-1 < (int)param_2) {
    return;
  }
  FUN_003351b4(param_2);
  return;
}
