// OoT3D decomp @ 003384c4  name=FUN_003384c4  size=364

undefined4 FUN_003384c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  float fVar6;

  fVar6 = (float)FUN_0036b4d0(param_4 + 0x254);
  fVar1 = DAT_00338630;
  if ((DAT_00338630 <= fVar6) &&
     (fVar6 = (float)FUN_0036b4d0(param_3,param_4 + 0x254), fVar6 <= fVar1)) {
    fVar6 = (float)FUN_0036b4d0(param_2,param_4 + 0x254);
    if (fVar6 < fVar1) {
      uVar5 = 0xff;
    }
    else {
      uVar5 = 1;
    }
    if (*(char *)(param_4 + 0x2227) == '\0') {
      if ((*(char *)(DAT_00338634 + param_4) != '\x05') ||
         (iVar3 = DAT_00338638, *(short *)(DAT_0033863c + 0x4a) == 0)) {
        iVar3 = DAT_00338640;
      }
      iVar4 = DAT_00338644;
      if ((*(char *)(DAT_00338634 + param_4) == '\a') ||
         ((iVar4 = DAT_00338648, *(char *)(param_4 + 0x2226) < '\x18' &&
          ((2 < *(byte *)(param_4 + 0x2229) || (iVar4 = DAT_00338644, iVar3 != 0)))))) {
        FUN_0036f59c(param_4);
        *(uint *)(param_4 + 0x1714) = *(uint *)(param_4 + 0x1714) | 8;
      }
      if (3 < (int)*(char *)(param_4 + 0x2226) - 0x10U) {
        if (*(char *)(param_4 + 2) == '\x02') {
          FUN_0036f59c(param_4,(uint)*(ushort *)(*(int *)(param_4 + 0x170c) + 0xf4) + iVar4);
        }
        else {
          FUN_0036aeb4(param_4 + 0x28,iVar4);
        }
      }
    }
    uVar2 = DAT_00338650;
    *(undefined1 *)(param_4 + 0x2227) = uVar5;
    *(undefined4 *)(param_4 + 0x29d8) = uVar2;
    return 1;
  }
  FUN_0034bbfc(param_4);
  return 0;
}
