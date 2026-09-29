// OoT3D decomp @ 004380f8  name=FUN_004380f8  size=236

bool FUN_004380f8(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;

  if (*(char *)(param_1 + 0x15) != '\0') {
    FUN_0030c824(param_1);
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 8));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_28 = 4;
  local_24 = DAT_004381e8;
  local_20 = DAT_004381ec;
  local_1c = DAT_004381f0;
  local_18 = param_1;
  uVar2 = FUN_0030dbf8(param_1,&local_28,DAT_004381e4,&local_18,*param_3 + param_3[1],param_2,
                       0xfffffffe,0);
  if ((uVar2 & 0x7e00000) != 0x600000) {
    uVar3 = uVar2 >> 0x1b;
    if ((uVar2 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4(uVar2);
    }
  }
  if (-1 < (int)uVar2) {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  return -1 < (int)uVar2;
}
