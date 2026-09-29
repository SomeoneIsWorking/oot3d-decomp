// OoT3D decomp @ 004c1098  name=FUN_004c1098  size=240

void FUN_004c1098(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];

  uVar1 = DAT_004c1188;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  FUN_0036b4ec(param_1 + 0x254,param_2);
  iVar2 = FUN_002b9c64(param_2,param_1);
  if (iVar2 == 0) {
    FUN_003384c4(DAT_004c1194,DAT_004c1190,DAT_004c118c,param_1);
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      FUN_0036b3f4(DAT_004c1198,param_1,auStack_14,auStack_18,param_2);
      FUN_002bc618(param_1,auStack_14,param_1 + 0x2220);
    }
    else {
      iVar2 = FUN_002bc420(param_2,param_1);
      if (-1 < iVar2) {
        *(char *)(param_1 + 0x2226) = *(char *)(DAT_004c119c + param_1) + '\x02';
        FUN_002d64f4(param_2,param_1);
        *(undefined1 *)(param_1 + 0x2229) = 3;
        FUN_0034bd3c(param_1);
        return;
      }
    }
  }
  return;
}
