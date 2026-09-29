// OoT3D decomp @ 00466170  name=FUN_00466170  size=296

uint FUN_00466170(int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  if (*(char *)(param_1 + 0xc) == '\0') {
    return DAT_00466298;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      do {
        bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x44));
      } while (!bVar1);
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      do {
        bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x40));
      } while (!bVar1);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      local_28 = 4;
      local_24 = DAT_004662a8;
      local_20 = DAT_004662ac;
      local_18 = 0;
      local_1c = DAT_004662b0;
      uVar2 = FUN_0030dbf8(param_1 + 0x18,&local_28,DAT_004662a4,&local_18,param_2 + param_3,param_4
                           ,0,0);
      if ((uVar2 & 0x7e00000) != 0x600000) {
        uVar3 = uVar2 >> 0x1b;
        if ((uVar2 & 0x80000000) != 0) {
          uVar3 = uVar3 - 0x20;
        }
        if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
          FUN_003351b4(uVar2);
        }
      }
      *(char *)(param_1 + 0xe) = (char)((int)uVar2 >> 0x1f) + '\x01';
      return uVar2;
    }
    return DAT_004662a0;
  }
  return DAT_0046629c;
}
